"""
asset_naming_tools.py
UE5 projesindeki asset'lerin isimlendirme kurallarina (naming conventions) uyup
uymadigini kontrol eden ve istersen otomatik duzelten editor Python modulu.

NAMING_RULES artik butun yaygin asset turlerini kapsar (mesh, texture, material,
animasyon, AI, ses, efekt, UI, veri vb.) — Allar'in yaygin kullanilan UE Style
Guide'ina dayanir.

KURULUM:
    Bu dosyayi projenin Content/Python/ klasorune koy.

KULLANIM (Output Log komut satirindan):
    py "import asset_naming_tools; asset_naming_tools.report_naming_violations()"
    py "import asset_naming_tools; asset_naming_tools.rename_to_convention(dry_run=True)"
    py "import asset_naming_tools; asset_naming_tools.rename_to_convention(dry_run=False)"

Kod degistirdikten sonra editoru kapatip acmadan tekrar denemek icin:
    py "import importlib, asset_naming_tools; importlib.reload(asset_naming_tools)"
"""

import unreal
import csv
import os
import datetime

# ------------------------------------------------------------------
# AYARLAR — kendi projenin kuralina gore duzenle
# Sol taraf: Unreal asset sinif adi, sag taraf: beklenen on ek (prefix)
# ------------------------------------------------------------------
NAMING_RULES = {
    # --- Core / Blueprint ---
    "Blueprint": "BP_",
    "WidgetBlueprint": "WBP_",
    "AnimBlueprint": "ABP_",
    "BlueprintInterface": "BPI_",
    "UserDefinedStruct": "F",
    "UserDefinedEnum": "E",
    "DataAsset": "DA_",

    # --- Geometri / Mesh ---
    "StaticMesh": "SM_",
    "SkeletalMesh": "SK_",
    "Skeleton": "SKEL_",
    "PhysicsAsset": "PHYS_",

    # --- Materyal / Texture ---
    "Texture2D": "T_",
    "TextureCube": "TC_",
    "TextureRenderTarget2D": "RT_",
    "Material": "M_",
    "MaterialInstanceConstant": "MI_",
    "MaterialFunction": "MF_",
    "MaterialParameterCollection": "MPC_",
    "PhysicalMaterial": "PM_",
    "SubsurfaceProfile": "SSP_",

    # --- Animasyon / Sequencer ---
    "AnimSequence": "A_",
    "AnimMontage": "AM_",
    "BlendSpace": "BS_",
    "BlendSpace1D": "BS_",
    "AimOffsetBlendSpace": "AO_",
    "PoseAsset": "POSE_",
    "LevelSequence": "LS_",
    "CameraAnim": "CA_",

    # --- AI ---
    "BehaviorTree": "BT_",
    "BlackboardData": "BB_",
    "EnvQuery": "EQS_",

    # --- Ses ---
    "SoundWave": "A_",
    "SoundCue": "SC_",
    "SoundMix": "Mix_",
    "SoundClass": "SC_",
    "SoundAttenuation": "ATT_",
    "ReverbEffect": "Reverb_",

    # --- Efekt (VFX) ---
    "ParticleSystem": "PS_",
    "NiagaraSystem": "NS_",
    "NiagaraEmitter": "NE_",
    "NiagaraFunctionScript": "NF_",

    # --- UI ---
    "Font": "Font_",
    "SlateBrushAsset": "Brush_",

    # --- Diger / Veri ---
    "DataTable": "DT_",
    "CurveTable": "CT_",
    "CurveFloat": "Curve_",
    "CurveVector": "Curve_",
    "CurveLinearColor": "Curve_",
    "ForceFeedbackEffect": "FF_",
    "InputAction": "IA_",
    "InputMappingContext": "IMC_",
    "FoliageType_InstancedStaticMesh": "FT_",
    "MediaPlayer": "MP_",
    "MediaSource": "MS_",
}

# Bu klasorleri tarama disinda birak (motor/plugin icerikleri gibi)
IGNORE_FOLDERS = ["/Game/Developers"]

CSV_OUTPUT_DIR = os.path.join(unreal.Paths.project_saved_dir(), "NamingReports")


# ------------------------------------------------------------------
# YARDIMCI FONKSIYONLAR
# ------------------------------------------------------------------
def _get_asset_class_name(asset_data):
    """UE5.1+ ve daha eski surumler arasindaki API farkini tolere eder."""
    try:
        return str(asset_data.asset_class_path.asset_name)
    except AttributeError:
        return str(asset_data.asset_class)


def _is_ignored(asset_path):
    return any(asset_path.startswith(folder) for folder in IGNORE_FOLDERS)


def _build_new_path(asset_path, new_name):
    package_path = asset_path.split(".")[0]  # /Game/Meshes/Rock.Rock -> /Game/Meshes/Rock
    folder = "/".join(package_path.split("/")[:-1])
    return f"{folder}/{new_name}"


# ------------------------------------------------------------------
# DENETIM — kural disi asset'leri bul
# ------------------------------------------------------------------
def check_naming_conventions(folder="/Game", recursive=True):
    """Kural disi isimlendirilmis tum asset'leri bulup liste olarak dondurur."""
    violations = []
    asset_paths = unreal.EditorAssetLibrary.list_assets(folder, recursive=recursive, include_folder=False)

    for asset_path in asset_paths:
        if _is_ignored(asset_path):
            continue

        asset_data = unreal.EditorAssetLibrary.find_asset_data(asset_path)
        class_name = _get_asset_class_name(asset_data)
        expected_prefix = NAMING_RULES.get(class_name)
        if not expected_prefix:
            continue  # bu turde kural tanimli degil, atla

        asset_name = str(asset_data.asset_name)
        if not asset_name.startswith(expected_prefix):
            violations.append({
                "path": asset_path,
                "current_name": asset_name,
                "class": class_name,
                "suggested_name": expected_prefix + asset_name,
            })

    return violations


# ------------------------------------------------------------------
# RAPORLAMA
# ------------------------------------------------------------------
def report_naming_violations(export_csv=True, folder="/Game", recursive=True):
    """Kural disi asset'leri log'a yazar ve istersen CSV'ye kaydeder."""
    violations = check_naming_conventions(folder, recursive)

    if not violations:
        unreal.log("Kural disi isimlendirme bulunamadi.")
        return violations

    unreal.log(f"{len(violations)} asset isimlendirme kuralina uymuyor:")
    for v in violations:
        unreal.log(f"  [{v['class']}] {v['current_name']}  ->  {v['suggested_name']}")

    if export_csv:
        _export_csv(violations)

    return violations


def _export_csv(rows):
    os.makedirs(CSV_OUTPUT_DIR, exist_ok=True)
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    path = os.path.join(CSV_OUTPUT_DIR, f"naming_violations_{timestamp}.csv")

    with open(path, "w", newline="", encoding="utf-8") as f:
        writer = csv.DictWriter(f, fieldnames=rows[0].keys())
        writer.writeheader()
        writer.writerows(rows)

    unreal.log(f"CSV kaydedildi: {path}")


# ------------------------------------------------------------------
# OTOMATIK DUZELTME — dry_run ile guvenli, onay ile gercek rename
# ------------------------------------------------------------------
def rename_to_convention(dry_run=True, folder="/Game", recursive=True):
    """
    Kural disi asset'leri dogru on ekle yeniden adlandirir.
    dry_run=True  -> hicbir sey degistirmez, sadece ne yapacagini gosterir.
    dry_run=False -> onay penceresinden sonra gercekten yeniden adlandirir.
    """
    violations = check_naming_conventions(folder, recursive)

    if not violations:
        unreal.log("Kural disi isimlendirme bulunamadi.")
        return

    unreal.log(f"{len(violations)} asset yeniden adlandirilacak:")
    for v in violations:
        unreal.log(f"  {v['current_name']}  ->  {v['suggested_name']}")

    if dry_run:
        unreal.log("DRY RUN modundasin — hicbir dosya degistirilmedi. "
                    "Gercekten uygulamak icin rename_to_convention(dry_run=False) cagir.")
        return

    result = unreal.EditorDialog.show_message(
        "Onay",
        f"{len(violations)} asset yeniden adlandirilacak. Bu geri alinamaz bir islemdir. Emin misin?",
        unreal.AppMsgType.YES_NO
    )
    if result != unreal.AppReturnType.YES:
        unreal.log("Islem iptal edildi.")
        return

    success_count = 0
    for v in violations:
        new_path = _build_new_path(v["path"], v["suggested_name"])
        if unreal.EditorAssetLibrary.rename_asset(v["path"], new_path):
            success_count += 1
        else:
            unreal.log_warning(f"Rename basarisiz: {v['path']}")

    unreal.log(f"{success_count}/{len(violations)} asset basariyla yeniden adlandirildi.")


# ------------------------------------------------------------------
# Dogrudan calistirilinca varsayilan davranis
# ------------------------------------------------------------------
if __name__ == "__main__":
    report_naming_violations()