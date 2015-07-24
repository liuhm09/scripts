main() {
 asm(
 "mov r3, #0x0\n"
 "mov r2, #0x8\n"
 "mov r1, pc\n"
 "add r1, #0x10\n"
 "mov r0, #0x1\n"
 "svc #0x00900004\n"
 "mov r0, #0x0\n"
 "svc #0x00900001\n"
 ".long 0x736d6173\n"
 ".long 0x0a676e75\n"
 );
}