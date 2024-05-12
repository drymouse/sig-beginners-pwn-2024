#include <stdio.h>
#include <stdlib.h>

int main() {
    char binsh[] = "/bin/sh";
    asm("mov rax, 0x3b; mov rdi, 0x2f62696e2f736800; xor rsi, rsi; xor rdx, rdx");
    return 0;
}