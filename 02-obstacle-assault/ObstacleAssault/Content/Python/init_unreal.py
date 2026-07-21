"""
init_unreal_SAMPLE.py

Bu dosyanin ADINI "init_unreal.py" olarak degistirip Content/Python/ klasorune koy.
Unreal, editor her acildiginda bu ismi ozel olarak arar ve otomatik calistirir.

Eger zaten bir init_unreal.py dosyan varsa, icine sadece asagidaki iki satiri ekle
(uzerine yazma, mevcut icerigin altina ekle).
"""

import naming_menu
naming_menu.register_naming_menu()