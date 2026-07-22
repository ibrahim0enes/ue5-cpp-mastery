"""
cleanup_tools.py
[Kullanilmayan asset temizligi + bos klasor temizligi]

Kullanilmayan (referanssiz) asset'leri bulup guvenli sekilde bir karantina
klasorune tasir, ve icinde hicbir sey kalmayan bos klasorleri siler.

KULLANIM:
    py "import cleanup_tools; cleanup_tools.report_cleanup_summary()"
    py "import cleanup_tools; cleanup_tools.quarantine_unused_assets(dry_run=True)"
    py "import cleanup_tools; cleanup_tools.quarantine_unused_assets(dry_run=False)"
    py "import cleanup_tools; cleanup_tools.delete_empty_folders(dry_run=True)"
    py "import cleanup_tools; cleanup_tools.delete_empty_folders(dry_run=False)"

ONEMLI GUVENLIK NOTU:
    "Kullanilmiyor" tespiti, asset'in baska bir asset tarafindan referans
    verilip verilmedigine bakar. Bir Level'da dogrudan kullanilan ama hicbir
    asset tarafindan referans verilmeyen seyler (bazi durumlarda) yanlislikla
    "kullanilmiyor" gorunebilir. Bu yuzden varsayilan akis DOGRUDAN SILME
    degil, KARANTINA KLASORUNE TASIMA'dir — bir sure gozden gecirdikten sonra
    hala gereksizse elle veya delete_unused_assets() ile kalici silebilirsin.
"""

import unreal
import os
import csv
import datetime

QUARANTINE_FOLDER = "/Game/_PendingDelete"
IGNORE_FOLDERS = ["/Game/Developers", QUARANTINE_FOLDER]
REPORT_DIR = os.path.join(unreal.Paths.project_saved_dir(), "CleanupReports")


def _is_ignored(path):
    return any(path.startswith(f) for f in IGNORE_FOLDERS)


# ------------------------------------------------------------------
# KULLANILMAYAN ASSET'LER
# ------------------------------------------------------------------
def find_unused_assets(folder="/Game", recursive=True):
    """Hicbir yerden referans verilmeyen asset'leri bulur."""
    unused = []
    registry = unreal.AssetRegistryHelpers.get_asset_registry()

    for asset_path in unreal.EditorAssetLibrary.list_assets(folder, recursive=recursive, include_folder=False):
        if _is_ignored(asset_path):
            continue

        package_name = asset_path.split(".")[0]
        try:
            referencers = registry.get_referencers(package_name)
        except Exception:
            referencers = None

        if not referencers:
            unused.append(asset_path)

    return unused


def quarantine_unused_assets(dry_run=True, folder="/Game", recursive=True):
    """
    Kullanilmayan asset'leri direkt silmek yerine QUARANTINE_FOLDER'a tasir.
    Bu, delete_unused_assets()'ten daha guvenli bir ilk adimdir.
    """
    unused = find_unused_assets(folder, recursive)
    if not unused:
        unreal.log("Kullanilmayan asset bulunamadi.")
        return

    unreal.log(f"{len(unused)} kullanilmayan asset '{QUARANTINE_FOLDER}' klasorune tasinacak:")
    for u in unused:
        unreal.log(f"  {u}")

    if dry_run:
        unreal.log("DRY RUN modundasin — hicbir sey tasinmadi. "
                    "Gercekten uygulamak icin quarantine_unused_assets(dry_run=False) cagir.")
        return

    result = unreal.EditorDialog.show_message(
        "Onay",
        f"{len(unused)} asset '{QUARANTINE_FOLDER}' klasorune tasinacak. Emin misin?",
        unreal.AppMsgType.YES_NO
    )
    if result != unreal.AppReturnType.YES:
        unreal.log("Islem iptal edildi.")
        return

    moved = 0
    for asset_path in unused:
        asset_name = asset_path.split("/")[-1].split(".")[0]
        new_path = f"{QUARANTINE_FOLDER}/{asset_name}"
        if unreal.EditorAssetLibrary.rename_asset(asset_path, new_path):
            moved += 1
        else:
            unreal.log_warning(f"Tasinamadi: {asset_path}")

    unreal.log(f"{moved}/{len(unused)} asset '{QUARANTINE_FOLDER}' klasorune tasindi.")
    unreal.log("Bir sure gozden gecir. Hala gerek yoksa delete_unused_assets(folder='%s') ile kalici silebilirsin." % QUARANTINE_FOLDER)


def delete_unused_assets(dry_run=True, folder=QUARANTINE_FOLDER, recursive=True):
    """
    ILERI SEVIYE / RISKLI: Verilen klasordeki (varsayilan: karantina klasoru)
    asset'leri KALICI olarak siler. Once quarantine_unused_assets() kullanmani
    ve listeyi gozden gecirmeni oneririm.
    """
    targets = unreal.EditorAssetLibrary.list_assets(folder, recursive=recursive, include_folder=False)
    if not targets:
        unreal.log(f"{folder} icinde silinecek asset yok.")
        return

    unreal.log(f"{len(targets)} asset KALICI olarak silinecek:")
    for t in targets:
        unreal.log(f"  {t}")

    if dry_run:
        unreal.log("DRY RUN modundasin — hicbir sey silinmedi.")
        return

    result = unreal.EditorDialog.show_message(
        "Onay",
        f"{len(targets)} asset KALICI olarak silinecek. Bu islem GERI ALINAMAZ. Emin misin?",
        unreal.AppMsgType.YES_NO
    )
    if result != unreal.AppReturnType.YES:
        unreal.log("Islem iptal edildi.")
        return

    deleted = 0
    for asset_path in targets:
        if unreal.EditorAssetLibrary.delete_asset(asset_path):
            deleted += 1
        else:
            unreal.log_warning(f"Silinemedi: {asset_path}")

    unreal.log(f"{deleted}/{len(targets)} asset kalici olarak silindi.")


# ------------------------------------------------------------------
# BOS KLASORLER
# ------------------------------------------------------------------
def _get_all_subfolders(root="/Game"):
    registry = unreal.AssetRegistryHelpers.get_asset_registry()
    try:
        return list(registry.get_sub_paths(root, True))
    except Exception as e:
        unreal.log_error(f"Alt klasorler alinamadi: {e}")
        return []


def find_empty_folders(root="/Game"):
    """Icinde (alt klasorler dahil) hic asset olmayan klasorleri bulur."""
    empty = []
    for folder in _get_all_subfolders(root):
        if _is_ignored(folder):
            continue
        if not unreal.EditorAssetLibrary.does_directory_have_assets(folder, recursive=True):
            empty.append(folder)
    return empty


def delete_empty_folders(dry_run=True, root="/Game"):
    """Bos klasorleri bulup (onay sonrasi) siler."""
    empty_folders = find_empty_folders(root)
    if not empty_folders:
        unreal.log("Bos klasor bulunamadi.")
        return

    unreal.log(f"{len(empty_folders)} bos klasor bulundu:")
    for f in empty_folders:
        unreal.log(f"  {f}")

    if dry_run:
        unreal.log("DRY RUN modundasin — hicbir klasor silinmedi. "
                    "Gercekten uygulamak icin delete_empty_folders(dry_run=False) cagir.")
        return

    result = unreal.EditorDialog.show_message(
        "Onay",
        f"{len(empty_folders)} bos klasor silinecek. Emin misin?",
        unreal.AppMsgType.YES_NO
    )
    if result != unreal.AppReturnType.YES:
        unreal.log("Islem iptal edildi.")
        return

    # en derin klasorden basla, ust klasor daha sonra kendiliginden bos kalir
    deleted = 0
    for folder in sorted(empty_folders, key=len, reverse=True):
        if unreal.EditorAssetLibrary.does_directory_exist(folder):
            if unreal.EditorAssetLibrary.delete_directory(folder):
                deleted += 1

    unreal.log(f"{deleted}/{len(empty_folders)} bos klasor silindi.")


# ------------------------------------------------------------------
# OZET RAPOR
# ------------------------------------------------------------------
def report_cleanup_summary(root="/Game", export_csv=True):
    """Kullanilmayan asset'leri ve bos klasorleri tek raporda toplar."""
    unused = find_unused_assets(root)
    empty_folders = find_empty_folders(root)

    unreal.log(f"=== Temizlik Ozeti ===")
    unreal.log(f"Kullanilmayan asset: {len(unused)}")
    unreal.log(f"Bos klasor: {len(empty_folders)}")

    if export_csv:
        os.makedirs(REPORT_DIR, exist_ok=True)
        timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
        path = os.path.join(REPORT_DIR, f"cleanup_report_{timestamp}.csv")
        with open(path, "w", newline="", encoding="utf-8") as f:
            writer = csv.writer(f)
            writer.writerow(["Tur", "Yol"])
            for u in unused:
                writer.writerow(["Kullanilmayan Asset", u])
            for e in empty_folders:
                writer.writerow(["Bos Klasor", e])
        unreal.log(f"Rapor kaydedildi: {path}")

    return {"unused_assets": unused, "empty_folders": empty_folders}


if __name__ == "__main__":
    report_cleanup_summary()