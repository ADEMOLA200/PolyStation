#include <iostream>

void syscall_ps3(uint64_t n, ThreadState& state) {
    switch (n) {
      case 1024:
        std::cout << "PS3 HLE: Hello from syscall!\n";
        break;
    }
}
