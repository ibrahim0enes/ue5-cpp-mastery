"""
health_dashboard.py
[Proje Durum Raporu]

Proje genelinde hizli bir "saglik" ozeti cikarir: tur bazinda asset sayisi,
toplam disk boyutu, en buyuk asset'ler. Projenin nabzini hizlica gormek icin.

KULLANIM:
    py "import health_dashboard; health_dashboard.run()"
"""

import unreal
import os
import csv
import datetime

REPORT_DIR = os.path.join(unreal.Paths.project_saved_dir(), "HealthReports")


def _get_asset_class_name(asset_data):
    try:
        return str(asset_data.asset_class_path.asset_name)
    except AttributeError:
        return str(asset_data.asset_class)


def _package_to_disk_path(package_name):
    content_dir = unreal.Paths.project_content_dir()
    relative = str(package_name).replace("/Game/", "", 1)
    return os.path.normpath(os.path.join(content_dir, relative + ".uasset"))


def get_asset_counts_by_type(folder="/Game", recursive=True):
    """Asset sayisini turune gore gruplar, buyukten kucuge sirali dondurur."""
    registry = unreal.AssetRegistryHelpers.get_asset_registry()
    counts = {}

    for asset_data in registry.get_assets_by_path(folder, recursive=recursive):
        class_name = _get_asset_class_name(asset_data)
        counts[class_name] = counts.get(class_name, 0) + 1

    return dict(sorted(counts.items(), key=lambda kv: kv[1], reverse=True))


def get_largest_assets(folder="/Game", recursive=True, top_n=10):
    """Diskte en cok yer kaplayan N asset'i bulur."""
    registry = unreal.AssetRegistryHelpers.get_asset_registry()
    sized = []

    for asset_data in registry.get_assets_by_path(folder, recursive=recursive):
        disk_path = _package_to_disk_path(asset_data.package_name)
        if os.path.exists(disk_path):
            size = os.path.getsize(disk_path)
            sized.append((str(asset_data.package_name), size))

    sized.sort(key=lambda x: x[1], reverse=True)
    return sized[:top_n]


def get_total_disk_size(folder="/Game", recursive=True):
    """Klasordeki tum asset'lerin toplam disk boyutunu byte olarak dondurur."""
    registry = unreal.AssetRegistryHelpers.get_asset_registry()
    total = 0

    for asset_data in registry.get_assets_by_path(folder, recursive=recursive):
        disk_path = _package_to_disk_path(asset_data.package_name)
        if os.path.exists(disk_path):
            total += os.path.getsize(disk_path)

    return total


def _format_size(num_bytes):
    for unit in ["B", "KB", "MB", "GB"]:
        if num_bytes < 1024:
            return f"{num_bytes:.1f} {unit}"
        num_bytes /= 1024
    return f"{num_bytes:.1f} TB"


def run(folder="/Game", export_csv=True):
    """Tam saglik raporunu Output Log'a basar ve istersen CSV'ye kaydeder."""
    counts = get_asset_counts_by_type(folder)
    total_assets = sum(counts.values())
    total_size = get_total_disk_size(folder)
    largest = get_largest_assets(folder)

    unreal.log("========================================")
    unreal.log("        PROJE DURUM RAPORU")
    unreal.log("========================================")
    unreal.log(f"Toplam asset: {total_assets}")
    unreal.log(f"Toplam disk boyutu: {_format_size(total_size)}")
    unreal.log("")
    unreal.log("-- Tur bazinda dagilim --")
    for class_name, count in counts.items():
        unreal.log(f"  {class_name}: {count}")
    unreal.log("")
    unreal.log("-- En buyuk 10 asset --")
    for path, size in largest:
        unreal.log(f"  {_format_size(size)}  -  {path}")
    unreal.log("========================================")

    if export_csv:
        _export_csv(counts, largest, total_assets, total_size)

    return {
        "total_assets": total_assets,
        "total_size_bytes": total_size,
        "counts_by_type": counts,
        "largest_assets": largest,
    }


def _export_csv(counts, largest, total_assets, total_size):
    os.makedirs(REPORT_DIR, exist_ok=True)
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    path = os.path.join(REPORT_DIR, f"health_report_{timestamp}.csv")

    with open(path, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(["Ozet"])
        writer.writerow(["Toplam asset", total_assets])
        writer.writerow(["Toplam boyut (byte)", total_size])
        writer.writerow([])
        writer.writerow(["Tur", "Sayi"])
        for class_name, count in counts.items():
            writer.writerow([class_name, count])
        writer.writerow([])
        writer.writerow(["En Buyuk Asset", "Boyut (byte)"])
        for asset_path, size in largest:
            writer.writerow([asset_path, size])

    unreal.log(f"Rapor kaydedildi: {path}")


if __name__ == "__main__":
    run()