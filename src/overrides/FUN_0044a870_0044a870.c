/* Hand-written override for FUN_0044a870.
 *
 * Original bytes (10):
 *     53 8b d9 e8 78 fc ff ff
 *     5b c3
 *
 *     push ebx / mov ebx,ecx / nothing in between / call 0x0044a4f0 / pop ebx / ret
 *
 * The decompiled body is a bare `FUN_0044a4f0(); return;`, which VC9 correctly folds
 * into `jmp FUN_0044a4f0` - one instruction, five bytes. But the original moves ECX
 * into ebx and restores it afterwards, and that is not incidental: the callee
 * is a __thiscall method that indexes through ebx, having been compiled to
 * expect its `this` there (None). The prototype says `__stdcall ... (void)`, so
 * the C has no way to say "hand ECX on" - ECX is caller-saved and invisible at the
 * source level - and the save, the move, the call and the restore are emitted here.
 *
 * The displacement is a literal because splice writes each function back at its own
 * address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0044a870(void)
{
  __asm {
    _emit 0x53         ; push ebx
    _emit 0x8B
    _emit 0xD9         ; mov ebx, ecx
    _emit 0xE8             ; call FUN_0044a4f0
    _emit 0x78
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x5B         ; pop ebx
    _emit 0xC3             ; ret
  }
  __assume(0);
}
