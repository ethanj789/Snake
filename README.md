# GBA Snake Game

This is a Snake game implemented for the Game Boy Advance (GBA) in C. The project includes a main game, image assets, and utility files to handle graphics, input, and DMA operations.

---

## Features

- Score tracking
- Apple spawning and collision detection
- Win and lose screens
- Fullscreen and partial image rendering using DMA for fast graphics
- Button input handling for the GBA
- Modular structure using C structs for snake and apples

---

## Building and Running

> Note: The `GBAServer.jar` and `docker.bat` are class-provided and not included in this repository.

To compile and run the project on your local GBA development environment:

1. Compile the `.c` files into a `.gba` binary using your preferred GBA compiler (`devkitARM` / `makefile`).
2. Use a GBA emulator (like VisualBoyAdvance) to run the resulting `.gba` file.

---
## Controls
| Button    | Action                       |
| --------- | ---------------------------- |
| `Start`   | Start the game               |
| `Select`  | Reset / Back to title screen |
| `D-Pad`   | Move snake                   |
| `A` / `B` | Not used                     |
