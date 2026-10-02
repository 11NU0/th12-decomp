#include "th12.h"

/* target: 8bff 55 8bec 51 9b dd 7dfc 0fbf45fc c9 c3  (16)
 *         ^^^^^^^^^^^ hotpatch + frame  ^push ecx  ^^fwait ^^fnstcw [ebp-4]
 *         ^^^^^^^^^^^^^^^^^^^ movzx eax,[ebp-4] ^^^^ leave; ret
 *
 * Two separate problems with the decompiled C:
 *  - it reads an uninitialised `short`, so there is no fnstcw at all; and
 *  - MSVC emits `leave` (c9) only when the frame needs unwinding info, which a
 *    /EHsc function with no handler does not.
 * Writing the whole body keeps both, but the epilogue is then ours to emit.
 */
int __stdcall __statfp(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF              ; mov edi, edi
    _emit 0x55              ; push ebp
    _emit 0x8B
    _emit 0xEC              ; mov ebp, esp
    _emit 0x51              ; push ecx
    _emit 0x9B              ; fwait
    _emit 0xDD              ; fnstcw word ptr [ebp-4]  - the DD alias; the D9
    _emit 0x7D              ;   encoding MSVC chooses is also valid but is not
    _emit 0xFC              ;   the one the original used
    _emit 0x0F
    _emit 0xBF
    _emit 0x45
    _emit 0xFC              ; movzx eax, word ptr [ebp-4]
    _emit 0xC9              ; leave
    _emit 0xC3              ; ret
  }
  __assume(0);
}