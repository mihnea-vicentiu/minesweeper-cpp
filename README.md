# Minesweeper

A desktop Minesweeper game written in C++ with SFML.

The game includes three difficulty levels, mouse-driven cell interaction, a timer, saved high scores, and a nickname editor for the score table.

## Features

- Beginner, Intermediate, and Expert boards.
- Classic left-click reveal and right-click flag controls.
- Chord reveal: click an uncovered numbered cell after flagging all adjacent mines to reveal the remaining adjacent cells.
- High score storage in `highscore.txt`.
- Keyboard navigation for menus and the high score screen.

## Controls

- Menu navigation: <kbd>W</kbd>/<kbd>S</kbd> or <kbd>Up</kbd>/<kbd>Down</kbd>.
- Toggle detailed difficulty text: <kbd>A</kbd>/<kbd>D</kbd> or <kbd>Left</kbd>/<kbd>Right</kbd>.
- Select menu item: <kbd>Space</kbd> or <kbd>Enter</kbd>.
- Reveal cell: left mouse click.
- Flag or unflag cell: right mouse click.
- Return from high scores: <kbd>Escape</kbd>.
- Edit nickname from the high score screen: press <kbd>Enter</kbd>, type letters, use <kbd>Backspace</kbd>, then press <kbd>Enter</kbd> again.

Flag marker states:

<img src="assets/mark1.png" alt="Flag marker 1"> <kbd>&#8594;</kbd> <img src="assets/mark2.png" alt="Flag marker 2"> <kbd>&#8594;</kbd> <img src="assets/mark3.png" alt="Flag marker 3">

## Requirements

- CMake 3.24 or newer.
- A C++23-capable compiler.
- SFML dependencies for your platform.

SFML itself is fetched by CMake through `FetchContent`.

On Debian/Ubuntu, the common native dependencies are installed by the CI action in `.github/actions/install-linux-deps/action.yml` and can be used as a reference.

## Build And Run

Configure and build:

```sh
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

Run on single-config generators such as Make or Ninja:

```sh
./build/minesweeper
```

Run on multi-config generators such as Visual Studio:

```sh
./build/Release/minesweeper
```

The executable expects the `assets/` directory next to it. CMake copies the assets into the build directory during configuration.

## Project Layout

- `include/minesweeper/` contains public project headers.
- `src/` contains implementation files and `main.cpp`.
- `assets/` contains sprites, UI images, the icon, and the font.
- `scripts/` contains CI helper scripts for sanitizer and Valgrind runs.
- `.github/` contains the CI workflow and reusable GitHub Actions.

## Resources

- [SFML](https://github.com/SFML/SFML/tree/aa82ea132b9296a31922772027ad5d14c1fa381b) under the Zlib license.
- [Minesweeper sprite sheet](https://github.com/didii/MineSweeper.Unity/blob/master/Assets/Spritesheets/MinesweeperSpritesheet.png).
- Additional visual references from [minesweeper.online](https://minesweeper.online/).
