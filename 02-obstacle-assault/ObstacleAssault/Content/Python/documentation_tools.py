"""
documentation_tools.py
[Belgeleme / gorsel]

Level'in veya secili aktorlerin ekran goruntusunu otomatik alip
zaman damgali dosya olarak kaydeden script. Ilerleme takibi, portfolyo
veya Notion sayfana eklemek icin pratik.

KULLANIM:
    py "import documentation_tools; documentation_tools.capture_viewport('genel_gorunum')"
    py "import documentation_tools; documentation_tools.capture_selected_actors()"

NOT: HighResShot komutuyla alinan goruntuler varsayilan olarak
Saved/Screenshots klasorune duser (motor konfigurasyonuna gore degisebilir).
"""

import unreal
import os
import datetime

SCREENSHOT_DIR = os.path.join(unreal.Paths.project_saved_dir(), "Documentation", "Screenshots")


def capture_viewport(label="screenshot", resolution="1920x1080"):
    """Aktif viewport'un yuksek cozunurluklu ekran goruntusunu alir."""
    os.makedirs(SCREENSHOT_DIR, exist_ok=True)
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    filename = f"{label}_{timestamp}"

    world = unreal.EditorLevelLibrary.get_editor_world()
    command = f"HighResShot {resolution} filename={filename}"
    unreal.SystemLibrary.execute_console_command(world, command)

    unreal.log(f"Screenshot komutu gonderildi: {command}")
    unreal.log(f"Dosya adi: {filename} (Saved/Screenshots klasorune duser)")


def capture_selected_actors(margin_multiplier=2.5, resolution="1920x1080"):
    """
    Editorde secili her aktore kamerayi otomatik yaklastirip tek tek
    screenshot alir. Karakter/prop belgelemek icin pratik bir yol.
    """
    selected = unreal.EditorLevelLibrary.get_selected_level_actors()
    if not selected:
        unreal.log_warning("Once en az bir aktor sec.")
        return

    for actor in selected:
        origin, extent = actor.get_actor_bounds(False)
        distance = max(extent.x, extent.y, extent.z) * margin_multiplier + 200

        camera_location = origin + unreal.Vector(-distance, -distance, distance * 0.5)
        camera_rotation = unreal.MathLibrary.find_look_at_rotation(camera_location, origin)

        unreal.EditorLevelLibrary.set_level_viewport_camera_info(camera_location, camera_rotation)
        capture_viewport(actor.get_name(), resolution)

    unreal.log(f"{len(selected)} aktor icin screenshot alindi.")


if __name__ == "__main__":
    capture_viewport("test")