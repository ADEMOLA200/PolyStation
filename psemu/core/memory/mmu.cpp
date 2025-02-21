#include <unordered_map>
class MMU {
    private:
      std::unordered_map<uint64_t, uint8_t*> pageTable; // Guest-to-host mapping
    
    public:
      uint8_t* translate(uint64_t guestAddr) {
        uint64_t page = guestAddr >> 12;
        if (!pageTable.count(page)) {
          pageTable[page] = new uint8_t[4096]; // Allocate 4KB page
        }
        return pageTable[page] + (guestAddr & 0xFFF);
      }
    };
