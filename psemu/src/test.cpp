int main() {
    PPUJIT jit;
    uint8_t code[] = {0x48, 0x31, 0xC0}; // x86 "xor rax, rax"
    jit.compile_and_run(code, sizeof(code));
    return 0;
}
