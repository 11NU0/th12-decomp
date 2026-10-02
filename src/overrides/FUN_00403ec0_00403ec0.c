/* Hand-written override for FUN_00403ec0.
 *
 * Original bytes (10):
 *     53 8b d9 e8 58 f1 ff ff
 *     5b c3
 *
 *     push ebx / mov ebx,ecx / nothing in between / call 0x00403020 / pop ebx / ret
 *
 * The decompiled body is a bare `FUN_00403020(); return;`, which VC9 correctly folds
 * into `jmp FUN_00403020` - one instruction, five bytes. But the original moves ECX
 * into ebx and restores it afterwards, and that is not incidental: the callee
 * is a __thiscall method that indexes through ebx, having been compiled to
 * expect its `this` there (indexed through ebx at +6). The prototype says `__stdcall ... (void)`, so
 * the C has no way to say "hand ECX on" - ECX is caller-saved and invisible at the
 * source level - and the save, the move, the call and the restore are emitted here.
 *
 * The displacement is a literal because splice writes each function back at its own
 * address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00403ec0(void)
{
  __asm {
    _emit 0x53         ; push ebx
    _emit 0x8B
    _emit 0xD9         ; mov ebx, ecx
    _emit 0xE8             ; call FUN_00403020
    _emit 0x58
    _emit 0xF1
    _emit 0xFF
    _emit 0xFF
    _emit 0x5B         ; pop ebx
    _emit 0xC3             ; ret
  }
  __assume(0);
}
