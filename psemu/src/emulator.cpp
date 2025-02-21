#include <fstream>
#include <vector>
#include "core/memory/mmu.h"
#include "core/cpu/ppc_jit.h"

class Emulator {
private:
    MMU mmu;
    PPUJIT ppuJit;

public:
    void load_game(const std::string& path) {
        std::ifstream file(path, std::ios::binary);
        if (!file) {
            throw std::runtime_error("Failed to open game file");
        }

        // Read game into memory
        std::vector<uint8_t> game_data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        uint8_t* guest_memory = mmu.translate(0x1000000); // Load at guest address 0x1000000
        std::memcpy(guest_memory, game_data.data(), game_data.size());
    }

    void run() {
        ppuJit.compile_and_run(mmu.translate(0x1000000), 1024); // Run from guest address 0x1000000
    }
};
