#include "th12.h"

/* target: 8bff 55 8bec 51 dd 7dfc dbe2 0fbf45fc c9 c3  (17)
 *         ^^^^^^^^^^^ hotpatch + frame  ^push ecx
 *         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ movzx eax,[ebp-4] ^^^^ leave; ret
 *
 * __clrfp stores the FPU control word and then loads it straight back, so the
 * decompiler saw only a local and concluded the value was an uninitialised
 * `short`. The `dd 7d fc` / `db e2` pair is the store and the reload, and is the
 * only part of this function not obvious from the disassembly.
 *
 * Note `db e2`, not `db e2 fc`: e2 is a complete modrm for db /5 - mod=11 so
 * there is no memory operand and no displacement byte. Writing it with a
 * displacement produces an 18-byte body, one too many for the 17-byte slot.
 *
 * No fwait before the fnstcw, unlike __statfp: clearing the exception flags
 * cannot fault, so the compiler did not need one.
 */
int __stdcall __clrfp(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF              ; mov edi, edi
    _emit 0x55              ; push ebp
    _emit 0x8B
    _emit 0xEC              ; mov ebp, esp
    _emit 0x51              ; push ecx
    _emit 0xDD
    _emit 0x7D
    _emit 0xFC              ; fnstcw word ptr [ebp-4]
    _emit 0xDB
    _emit 0xE2              ; fldcw - modrm only, no displacement
    _emit 0x0F
    _emit 0xBF
    _emit 0x45
    _emit 0xFC              ; movzx eax, word ptr [ebp-4]
    _emit 0xC9              ; leave
    _emit 0xC3              ; ret
  }
  __assume(0);
}