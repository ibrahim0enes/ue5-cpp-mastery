"""
naming_menu.py
asset_naming_tools.py ve folder_organizer.py icindeki komutlari, editorun ust
menu cubuguna "Pipeline Tools" adinda bir menu olarak ekler. Boylece Output
Log'a komut yazmak yerine tek tikla calistirabilirsin.

KURULUM:
    1) Bu dosyayi Content/Python/ klasorune koy
       (asset_naming_tools.py ve folder_organizer.py ile AYNI klasore).
    2) init_unreal.py dosyana asagidaki iki satiri ekle (dosya yoksa olustur):

        import naming_menu
        naming_menu.register_naming_menu()

    3) Editoru yeniden baslat. Ust menu cubugunda "Pipeline Tools" gorunecek.

Kod degistirdikten sonra editoru kapatip acmadan denemek icin:
    py "import importlib, naming_menu; importlib.reload(naming_menu); naming_menu.register_naming_menu()"
"""

import unreal


def _add_entry(menu, section, name, label, tooltip, python_command):
    entry = unreal.ToolMenuEntry(
        name=name,
        type=unreal.MultiBlockType.MENU_ENTRY
    )
    entry.set_label(label)
    entry.set_tool_tip(tooltip)
    entry.set_string_command(
        unreal.ToolMenuStringCommandType.PYTHON,
        "",
        string=python_command
    )
    menu.add_menu_entry(section, entry)


def register_naming_menu():
    menus = unreal.ToolMenus.get()

    main_menu = menus.find_menu("LevelEditor.MainMenu")
    if not main_menu:
        unreal.log_error("Ana menu bulunamadi, kayit yapilamadi.")
        return

    pipeline_menu = main_menu.add_sub_menu(
        owner="PipelineTools",
        section_name="",
        name="PipelineTools",
        label="Pipeline Tools",
        tool_tip="Isimlendirme ve klasor duzeni komutlari"
    )

    # --- Isimlendirme bolumu ---
    pipeline_menu.add_section("NamingSection", "Isimlendirme")

    _add_entry(
        pipeline_menu, "NamingSection", "CheckNaming", "Isimlendirmeyi Kontrol Et",
        "Kural disi isimlendirilmis asset'leri log'a ve CSV'ye yazar (hicbir sey degistirmez)",
        "import asset_naming_tools; asset_naming_tools.report_naming_violations()"
    )
    _add_entry(
        pipeline_menu, "NamingSection", "PreviewRename", "Duzeltmeyi Onizle (Dry Run)",
        "Neyin nasil yeniden adlandirilacagini gosterir, hicbir dosyaya dokunmaz",
        "import asset_naming_tools; asset_naming_tools.rename_to_convention(dry_run=True)"
    )
    _add_entry(
        pipeline_menu, "NamingSection", "ApplyRename", "Duzeltmeyi Uygula",
        "Onay penceresinden sonra asset'leri gercekten yeniden adlandirir",
        "import asset_naming_tools; asset_naming_tools.rename_to_convention(dry_run=False)"
    )

    # --- Klasor duzeni bolumu ---
    pipeline_menu.add_section("OrganizeSection", "Klasor Duzeni")

    _add_entry(
        pipeline_menu, "OrganizeSection", "CheckFolders", "Karisik Dosyalari Bul",
        "Yanlis klasorde duran asset'leri log'a ve CSV'ye yazar (hicbir sey degistirmez)",
        "import folder_organizer; folder_organizer.report_misplaced_assets()"
    )
    _add_entry(
        pipeline_menu, "OrganizeSection", "PreviewOrganize", "Duzenlemeyi Onizle (Dry Run)",
        "Hangi asset'in hangi klasore tasinacagini gosterir, hicbir dosyaya dokunmaz",
        "import folder_organizer; folder_organizer.organize(dry_run=True)"
    )
    _add_entry(
        pipeline_menu, "OrganizeSection", "ApplyOrganize", "Duzenlemeyi Uygula",
        "Onay penceresinden sonra asset'leri gercekten dogru klasorlere tasir",
        "import folder_organizer; folder_organizer.organize(dry_run=False)"
    )

    # --- Temizlik bolumu ---
    pipeline_menu.add_section("CleanupSection", "Temizlik")

    _add_entry(
        pipeline_menu, "CleanupSection", "CleanupReport", "Temizlik Raporu",
        "Kullanilmayan asset'leri ve bos klasorleri listeler (hicbir sey degistirmez)",
        "import cleanup_tools; cleanup_tools.report_cleanup_summary()"
    )
    _add_entry(
        pipeline_menu, "CleanupSection", "PreviewQuarantine", "Kullanilmayanlari Onizle (Dry Run)",
        "Karantinaya tasinacak asset'leri gosterir, hicbir sey tasimaz",
        "import cleanup_tools; cleanup_tools.quarantine_unused_assets(dry_run=True)"
    )
    _add_entry(
        pipeline_menu, "CleanupSection", "ApplyQuarantine", "Kullanilmayanlari Karantinaya Tasi",
        "Onay sonrasi kullanilmayan asset'leri _PendingDelete klasorune tasir",
        "import cleanup_tools; cleanup_tools.quarantine_unused_assets(dry_run=False)"
    )
    _add_entry(
        pipeline_menu, "CleanupSection", "PreviewEmptyFolders", "Bos Klasorleri Onizle (Dry Run)",
        "Silinecek bos klasorleri gosterir, hicbir sey silmez",
        "import cleanup_tools; cleanup_tools.delete_empty_folders(dry_run=True)"
    )
    _add_entry(
        pipeline_menu, "CleanupSection", "ApplyEmptyFolders", "Bos Klasorleri Sil",
        "Onay sonrasi bos klasorleri kalici olarak siler",
        "import cleanup_tools; cleanup_tools.delete_empty_folders(dry_run=False)"
    )

    # --- Belgeleme bolumu ---
    pipeline_menu.add_section("DocSection", "Belgeleme")

    _add_entry(
        pipeline_menu, "DocSection", "CaptureViewport", "Viewport Screenshot Al",
        "Aktif viewport'un yuksek cozunurluklu ekran goruntusunu alir",
        "import documentation_tools; documentation_tools.capture_viewport('viewport')"
    )
    _add_entry(
        pipeline_menu, "DocSection", "CaptureSelected", "Secili Aktorlerin Yakin Cekimini Al",
        "Editorde secili her aktore kamerayi yaklastirip tek tek screenshot alir",
        "import documentation_tools; documentation_tools.capture_selected_actors()"
    )

    # --- Commit kontrolu bolumu ---
    pipeline_menu.add_section("PreCommitSection", "Commit Kontrolu")

    _add_entry(
        pipeline_menu, "PreCommitSection", "PreCommitCheck", "Commit Oncesi Tam Kontrol",
        "Isimlendirme + klasor duzeni + temizlik kontrollerini tek seferde calistirir",
        "import pre_commit_check; pre_commit_check.run()"
    )

    # --- Proje durumu bolumu ---
    pipeline_menu.add_section("HealthSection", "Proje Durumu")

    _add_entry(
        pipeline_menu, "HealthSection", "HealthReport", "Proje Durum Raporu",
        "Tur bazinda asset sayisi, toplam boyut ve en buyuk asset'leri raporlar",
        "import health_dashboard; health_dashboard.run()"
    )

    menus.refresh_all_widgets()
    unreal.log("Pipeline Tools menusu eklendi (ust menu cubugunda).")


if __name__ == "__main__":
    register_naming_menu()