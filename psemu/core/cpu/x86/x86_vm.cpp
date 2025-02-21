#include <_types/_uint8_t.h>
#include <cstddef>
#include <xbyak/xbyak.h>

class X86VM {
public:
  void run_x86_code(uint8_t* code, size_t size) {
    Xbyak::CodeGenerator code(4096);
    // TODO:
    // Load x86-64 code into executable memory
    // Use VMX instructions to enter root mode
    // Execute guest code
  }
};
