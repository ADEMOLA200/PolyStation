#include "emulator.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: psemu <game_path>\n";
        return 1;
    }

    try {
        Emulator emu;
        emu.load_game(argv[1]); // Load game from command line
        emu.run();              // Run the game
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    return 0;
}
