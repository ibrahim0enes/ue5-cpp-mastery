"""
folder_organizer.py
Projedeki dagitik/karisik duran asset'leri (animasyon, blueprint, BT, EQS, texture vb.)
turlerine gore standart bir klasor yapisina tasiyan organizasyon scripti.

KULLANIM:
    py "import folder_organizer; folder_organizer.report_misplaced_assets()"
    py "import folder_organizer; folder_organizer.organize(dry_run=True)"
    py "import folder_organizer; folder_organizer.organize(dry_run=False)"
"""

import unreal
import os
import csv
import datetime

# ------------------------------------------------------------------
# AYARLAR — kendi projenin klasor yapisina gore duzenle.
# Sol: Unreal asset sinif adi, Sag: /Game altindaki standart klasor.
# ------------------------------------------------------------------
FOLDER_RULES = {
    "StaticMesh": "Meshes",
    "SkeletalMesh": "Characters/Meshes",
    "Texture2D": "Textures",
    "Material": "Materials",
    "MaterialInstanceConstant": "Materials",
    "MaterialFunction": "Materials/Functions",
    "Blueprint": "Blueprints",
    "WidgetBlueprint": "UI",
    "AnimBlueprint": "Animations/AnimBlueprints",
    "AnimSequence": "Animations",
    "AnimMontage": "Animations/Montages",
    "BlendSpace": "Animations/BlendSpaces",
    "BehaviorTree": "AI/BehaviorTrees",
    "BlackboardData": "AI/Blackboards",
    "EnvQuery": "AI/EQS",
    "SoundWave": "Audio",
    "SoundCue": "Audio/Cues",
    "ParticleSystem": "Effects/Particles",
    "NiagaraSystem": "Effects/Niagara",
    "LevelSequence": "Cinematics",
    "DataTable": "Data",
    "PhysicsAsset": "Physics",
}

ROOT = "/Game"
IGNORE_FOLDERS = ["/Game/Developers", "/Game/Collections"]
REPORT_DIR = os.path.join(unreal.Paths.project_saved_dir(), "OrganizeReports")


# ------------------------------------------------------------------
# YARDIMCI FONKSIYONLAR
# ------------------------------------------------------------------
def _get_asset_class_name(asset_data):
    try:
        return str(asset_data.asset_class_path.asset_name)
    except AttributeError:
        return str(asset_data.asset_class)


def _is_ignored(asset_path):
    return any(asset_path.startswith(f) for f in IGNORE_FOLDERS)


# ------------------------------------------------------------------
# DENETIM
# ------------------------------------------------------------------
def find_misplaced_assets(folder=ROOT, recursive=True):
    """Turune gore olmasi gereken klasorde durmayan asset'leri bulur."""
    misplaced = []
    registry = unreal.AssetRegistryHelpers.get_asset_registry()

    for asset_data in registry.get_assets_by_path(folder, recursive=recursive):
        asset_path = str(asset_data.package_name)
        if _is_ignored(asset_path):
            continue

        class_name = _get_asset_class_name(asset_data)
        expected_subfolder = FOLDER_RULES.get(class_name)
        if not expected_subfolder:
            continue  # bu turde kural tanimli degil, atla

        expected_folder = f"{ROOT}/{expected_subfolder}"
        current_folder = "/".join(asset_path.split("/")[:-1])

        if current_folder != expected_folder:
            misplaced.append({
                "path": f"{asset_path}.{asset_data.asset_name}",
                "name": str(asset_data.asset_name),
                "class": class_name,
                "current_folder": current_folder,
                "expected_folder": expected_folder,
            })

    return misplaced


def report_misplaced_assets(folder=ROOT, recursive=True, export_csv=True):
    """Yanlis klasordeki asset'leri log'a yazar ve istersen CSV'ye kaydeder."""
    misplaced = find_misplaced_assets(folder, recursive)

    if not misplaced:
        unreal.log("Tum asset'ler dogru klasorde. Duzenlenecek bir sey yok.")
        return misplaced

    unreal.log(f"{len(misplaced)} asset yanlis klasorde:")
    for m in misplaced:
        unreal.log(f"  [{m['class']}] {m['name']}  ({m['current_folder']}  ->  {m['expected_folder']})")

    if export_csv:
        _export_csv(misplaced)

    return misplaced


def _export_csv(rows):
    os.makedirs(REPORT_DIR, exist_ok=True)
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    path = os.path.join(REPORT_DIR, f"misplaced_assets_{timestamp}.csv")

    with open(path, "w", newline="", encoding="utf-8") as f:
        writer = csv.DictWriter(f, fieldnames=rows[0].keys())
        writer.writeheader()
        writer.writerows(rows)

    unreal.log(f"CSV kaydedildi: {path}")


# ------------------------------------------------------------------
# DUZELTME — dry_run ile guvenli, onay ile gercek tasima
# ------------------------------------------------------------------
def organize(dry_run=True, folder=ROOT, recursive=True):
    """
    Yanlis klasordeki asset'leri dogru klasore tasir.
    dry_run=True  -> hicbir sey degistirmez, sadece plani gosterir.
    dry_run=False -> onay penceresinden sonra gercekten tasir.
    """
    misplaced = find_misplaced_assets(folder, recursive)

    if not misplaced:
        unreal.log("Tum asset'ler dogru klasorde.")
        return

    unreal.log(f"{len(misplaced)} asset tasinacak:")
    for m in misplaced:
        unreal.log(f"  {m['name']}: {m['current_folder']}  ->  {m['expected_folder']}")

    if dry_run:
        unreal.log("DRY RUN modundasin — hicbir dosya tasinmadi. Gercekten uygulamak icin organize(dry_run=False) cagir.")
        return

    result = unreal.EditorDialog.show_message(
        "Onay",
        f"{len(misplaced)} asset farkli klasorlere tasinacak. Bu islem projedeki referanslari etkiler. Emin misin?",
        unreal.AppMsgType.YES_NO
    )
    if result != unreal.AppReturnType.YES:
        unreal.log("Islem iptal edildi.")
        return

    moved = 0
    for m in misplaced:
        new_path = f"{m['expected_folder']}/{m['name']}"
        if unreal.EditorAssetLibrary.rename_asset(m["path"], new_path):
            moved += 1
        else:
            unreal.log_warning(f"Tasima basarisiz: {m['path']}")

    unreal.log(f"{moved}/{len(misplaced)} asset tasindi.")
    _fixup_redirectors(folder, recursive)


def _fixup_redirectors(folder=ROOT, recursive=True):
    """Tasima sonrasi geride kalan redirector'lari (kirik referanslari onleyen isaretciler) temizler."""
    asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
    redirectors = []

    for asset_path in unreal.EditorAssetLibrary.list_assets(folder, recursive=recursive, include_folder=False):
        asset_data = unreal.EditorAssetLibrary.find_asset_data(asset_path)
        class_name = _get_asset_class_name(asset_data)
        if "Redirector" in class_name:
            asset = unreal.EditorAssetLibrary.load_asset(asset_path)
            if asset:
                redirectors.append(asset)

    if redirectors:
        asset_tools.fixup_referencers(redirectors)
        unreal.log(f"{len(redirectors)} redirector temizlendi.")


if __name__ == "__main__":
    report_misplaced_assets()