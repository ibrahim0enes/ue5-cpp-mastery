# 03 · Dungeon Escape

A first-person puzzle room. Goal: build a composition-based architecture with delegates, Enhanced Input, tracing, and an inventory system, entirely in C++.

- **Lectures:** 50 · 6h 50m
- **Sujet:** [`docs/sujets/Sujet - Bölüm 3 - Dungeon Escape.pdf`](../docs/sujets)
- **XP:** 150 mandatory (+35 bonus)
- **`.uproject`:** `DungeonEscape.uproject` (create it directly in this folder)

## Core ideas

Actor Components · composition over inheritance · pointers & `GetOwner` · delegates (`DECLARE_DYNAMIC_MULTICAST_DELEGATE`) · Enhanced Input · sphere tracing & `Cast<>` · `TArray` inventory

## Exercises (see the sujet for full detail)

`EX00` Mover Component · `EX01` Trigger Component · `EX02` Delegate Binding · `EX03` Pressure Plate · `EX04` Enhanced Input Setup · `EX05` Interaction Trace · `EX06` Inventory System · `EX07` Lock & Hidden Wall · `BONUS` Dual Plate Door
