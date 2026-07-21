# UE5 C++ Mastery

**5 Unreal Engine 5 projects, built C++-first, one system at a time.**

This repo is where I actually write the code for the *"Unreal Engine 5 C++ Game Development (Fully Updated in 5.6)"* course (GameDev.tv Team & Kaan Alpar). Each project has its own self-written spec ("sujet"), a self-test checklist, and a small XP/rank system I built to track progress — inspired by 42 Istanbul's project-based, self-graded format.

> 🎓 Learning hub (deep-dive notes, per-lecture explanations, resources): Notion
> 📄 Project specs ("sujets"), 42-style, one per project: `docs/sujets/`
> 🏆 XP & rank tracker: `docs/xp-terminal/`

---

## Progress

| # | Project | Core C++ / UE5 concepts | XP | Status |
|---|---|---|---|---|
| 00 | [Introduction & Setup](01-introduction-setup) | Compiler/IDE setup, `C++` vs Blueprint | 50 (+15 bonus) | ✅ Done |
| 01 | [Obstacle Assault](02-obstacle-assault) | Structs, `Tick`, `DeltaTime`, functions, classes | 120 (+30 bonus) | ✅ Done |
| 02 | [Dungeon Escape](03-dungeon-escape) | Composition, pointers, delegates, Enhanced Input, tracing | 150 (+35 bonus) | ⬜ Not started |
| 03 | [Battle Blaster](04-battle-blaster) | Pawn/GameMode, timers, projectiles, damage, UMG, GameInstance | 150 (+35 bonus) | ⬜ Not started |
| 04 | [Shooter Sam](05-shooter-sam) | Animation Blend Spaces, AI Controller, NavMesh, Behavior Trees | 175 (+40 bonus) | ⬜ Not started |

**Total: 645 XP mandatory · 800 XP with all bonuses.** Update the status column (⬜ Not started → 🟨 In progress → ✅ Done) as each project is finished, or track it live in the [XP terminal](docs/xp-terminal).

---

## Repo structure

```text
ue5-cpp-mastery/
├── 01-introduction-setup/     # no code — environment setup + C++ vs Blueprint decision
├── 02-obstacle-assault/       # ObstacleAssault.uproject once created
├── 03-dungeon-escape/         # DungeonEscape.uproject
├── 04-battle-blaster/         # BattleBlaster.uproject
├── 05-shooter-sam/            # ShooterSam.uproject
├── docs/
│   ├── sujets/                 # the 5 PDF project specs
│   └── xp-terminal/            # the self-contained XP/rank tracker (open in a browser)
├── .gitattributes              # Git LFS rules for Unreal binary assets
├── .gitignore                  # standard UnrealEngine.gitignore
└── README.md
```

Each project folder is its own **independent `.uproject`** — not one big Unreal project with 5 levels. That's deliberate: it mirrors how the course treats them (separate games, separate lessons) and keeps each repo folder buildable/openable on its own.

### Project naming

| Project | `.uproject` name | Why |
|---|---|---|
| Obstacle Assault | `ObstacleAssault` | PascalCase, no spaces — becomes the C++ module name (`ObstacleAssault.Build.cs`), so it has to be a valid identifier |
| Dungeon Escape | `DungeonEscape` | same reasoning |
| Battle Blaster | `BattleBlaster` | same reasoning |
| Shooter Sam | `ShooterSam` | same reasoning |

The folder is kebab-case (`02-obstacle-assault`) for readable GitHub URLs; the `.uproject`/module inside is PascalCase because UE5 turns the project name directly into C++ identifiers.

---

## Tech stack

- **Engine:** Unreal Engine 5.6 (pin this — later minor versions can rename APIs used in the course)
- **Language:** C++17 (UE5 default), Blueprint for designer-facing tuning only
- **IDE:** Visual Studio 2022 (Windows) or Xcode (Mac), "Game Development with C++" workload
- **Source control:** Git + Git LFS for binary `Content/` assets

---

## Getting started

```bash
git clone https://github.com/<your-username>/ue5-cpp-mastery.git
cd ue5-cpp-mastery
git lfs install
git lfs pull
```

To work on a project, open its folder in Unreal Engine 5.6 and create/open the `.uproject` there — don't create it somewhere else and move it in, or the relative asset paths can break.

Each project folder has its own short `README.md` with:
- what the project is
- which lecture range it covers
- a link to that project's sujet in `docs/sujets/`

---

## How I'm using the sujets + self-tests

Each project has a PDF "sujet" in `docs/sujets/` written in the same spirit as a 42 Istanbul project brief:

- **Chapter 0** — objective, ground rules, self-defense questions (things I should be able to explain without looking anything up)
- **Chapter I** — numbered exercises (`EX00`, `EX01`, ...) that build on each other in order, each with an objective, constraints, and an expected result — no solution code
- **Bonus** — locked until every mandatory exercise in that project is done

I check exercises off in the [XP terminal](docs/xp-terminal) as I actually get them working (not as I watch the video) — that's what turns into the XP/rank numbers in the progress table above.

---

## Commit convention

Commits are scoped to a project and, where it makes sense, to a sujet exercise, so the history itself is a build log:

```text
feat(obstacle-assault): moving platform with DeltaTime (EX02)
fix(dungeon-escape): null-check FindComponentByClass result (EX01)
docs(shooter-sam): add sujet + section README
```

---

## License & attribution

My own C++/Blueprint code in this repo is released under the [MIT License](LICENSE) — use it, learn from it, fork it.

**Not included, and not covered by that license:**
- Unreal Engine itself (Epic Games, subject to the [Unreal Engine EULA](https://www.unrealengine.com/en-US/eula))
- Course video content, lecture text, or any proprietary assets from *Unreal Engine 5 C++ Game Development* (GameDev.tv Team & Kaan Alpar, [udemy.com/course/unrealcourse](https://www.udemy.com/course/unrealcourse/))
- Any purchased/Fab marketplace art assets used for visuals

The exercise structure and XP/rank format are my own design, inspired by — but not affiliated with or endorsed by — 42 Istanbul.

---

## Acknowledgments

- **GameDev.tv Team & Kaan Alpar** — course curriculum this repo follows lecture-by-lecture
- **42 Istanbul** — format inspiration for the sujets and the self-defense/evaluation style
