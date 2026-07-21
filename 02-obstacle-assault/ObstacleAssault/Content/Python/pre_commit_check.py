"""
pre_commit_check.py
[Commit Oncesi Tam Kontrol]

asset_naming_tools, folder_organizer ve cleanup_tools icindeki raporlama
fonksiyonlarini tek seferde calistirip "commit atmaya hazir misin" seklinde
tek bir ozet cikartir. HICBIR SEYI DEGISTIRMEZ — sadece rapor verir.

KULLANIM:
    py "import pre_commit_check; pre_commit_check.run()"
"""

import unreal
import os
import datetime

REPORT_DIR = os.path.join(unreal.Paths.project_saved_dir(), "PreCommitReports")


def run(folder="/Game"):
    unreal.log("========================================")
    unreal.log("   COMMIT ONCESI TAM KONTROL BASLIYOR")
    unreal.log("========================================")

    results = {}

    # --- Isimlendirme ---
    try:
        import asset_naming_tools
        naming_violations = asset_naming_tools.check_naming_conventions(folder)
        results["Isimlendirme hatasi"] = len(naming_violations)
    except ImportError:
        unreal.log_warning("asset_naming_tools.py bulunamadi, atlandi.")
        results["Isimlendirme hatasi"] = None

    # --- Klasor duzeni ---
    try:
        import folder_organizer
        misplaced = folder_organizer.find_misplaced_assets(folder)
        results["Yanlis klasordeki asset"] = len(misplaced)
    except ImportError:
        unreal.log_warning("folder_organizer.py bulunamadi, atlandi.")
        results["Yanlis klasordeki asset"] = None

    # --- Temizlik ---
    try:
        import cleanup_tools
        unused = cleanup_tools.find_unused_assets(folder)
        empty_folders = cleanup_tools.find_empty_folders(folder)
        results["Kullanilmayan asset"] = len(unused)
        results["Bos klasor"] = len(empty_folders)
    except ImportError:
        unreal.log_warning("cleanup_tools.py bulunamadi, atlandi.")
        results["Kullanilmayan asset"] = None
        results["Bos klasor"] = None

    unreal.log("---------- OZET ----------")
    total_problems = 0
    for label, count in results.items():
        if count is None:
            unreal.log(f"{label}: kontrol edilemedi (modul eksik)")
            continue
        unreal.log(f"{label}: {count}")
        total_problems += count

    ready = total_problems == 0
    unreal.log("==========================")
    if ready:
        unreal.log("SONUC: TEMIZ — commit atmaya hazirsin.")
    else:
        unreal.log(f"SONUC: {total_problems} sorun var — commit atmadan once Pipeline Tools menusunden ilgili duzeltmeleri calistir.")
    unreal.log("==========================")

    _export_summary(results, ready)
    return ready, results


def _export_summary(results, ready):
    os.makedirs(REPORT_DIR, exist_ok=True)
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    path = os.path.join(REPORT_DIR, f"pre_commit_{timestamp}.txt")

    with open(path, "w", encoding="utf-8") as f:
        f.write(f"Commit Oncesi Kontrol - {timestamp}\n")
        f.write(f"Sonuc: {'TEMIZ' if ready else 'SORUNLU'}\n\n")
        for label, count in results.items():
            f.write(f"{label}: {count if count is not None else 'kontrol edilemedi'}\n")

    unreal.log(f"Ozet kaydedildi: {path}")


if __name__ == "__main__":
    run()