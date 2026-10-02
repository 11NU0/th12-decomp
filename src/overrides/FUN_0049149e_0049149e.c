/* Hand-corrected override for FUN_0049149e.
 *
 * The Ghidra decompilation is a plain call statement:
 *
 *     void __cdecl FUN_0049149e(void *p1, rsize_t p2, void *p3, rsize_t p4)
 *     { FUN_0044d310(p1,p2,p3,p4); }
 *
 * but VC9 at /O2 rewrites that into a *sibling call* - a bare `jmp FUN_0044d310`
 * with no argument setup at all - because the four incoming arguments already sit
 * exactly where the four outgoing ones belong. An `__asm {}` barrier does not stop
 * it. The target instead sets the arguments up and cleans up itself:
 *
 *     mov edi,edi ; push ebp ; mov ebp,esp
 *     push [ebp+0x14] ; push [ebp+0x10] ; push [ebp+0xc] ; push [ebp+8]
 *     call FUN_0044d310 ; add esp,0x10 ; pop ebp ; ret
 *
 * so the argument pushes are written explicitly here. With /hotpatch /Oy- (applied
 * per unit, see artifacts\hotpatch_units.txt) this reproduces the target byte for
 * byte; only the call displacement differs, and that is a relocation.
 *
 * `void *` operands are ambiguous in MSVC inline asm, hence the explicit dword ptr.
 */
#include "th12.h"

void __cdecl FUN_0049149e(void *p1, rsize_t p2, void *p3, rsize_t p4)
{
  __asm {
    push dword ptr p4
    push dword ptr p3
    push dword ptr p2
    push dword ptr p1
    call FUN_0044d310
    add esp, 0x10
  }
}
