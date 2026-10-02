/* Hand-corrected override for FUN_004914b9.
 *
 * Identical situation to FUN_0049149e (see that file for the full explanation):
 * the Ghidra decompilation is a plain call to FUN_0044d340, which VC9 at /O2
 * collapses into a sibling call `jmp FUN_0044d340`, while the target pushes the
 * four arguments and cleans up 0x10 bytes itself.
 *
 * Target:
 *   mov edi,edi ; push ebp ; mov ebp,esp
 *   push [ebp+0x14] ; push [ebp+0x10] ; push [ebp+0xc] ; push [ebp+8]
 *   call FUN_0044d340 ; add esp,0x10 ; pop ebp ; ret
 */
#include "th12.h"

void __cdecl FUN_004914b9(void *p1, rsize_t p2, void *p3, rsize_t p4)
{
  __asm {
    push dword ptr p4
    push dword ptr p3
    push dword ptr p2
    push dword ptr p1
    call FUN_0044d340
    add esp, 0x10
  }
}
