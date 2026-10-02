/* Hand-written override for FUN_0044b600.
 *
 * Original bytes (10):
 *     56 8b f1 e8 08 01 00 00
 *     5e c3
 *
 *     push esi / mov esi,ecx / nothing in between / call 0x0044b710 / pop esi / ret
 *
 * The decompiled body is a bare `FUN_0044b710(); return;`, which VC9 correctly folds
 * into `jmp FUN_0044b710` - one instruction, five bytes. But the original moves ECX
 * into esi and restores it afterwards, and that is not incidental: the callee
 * is a __thiscall method that indexes through esi, having been compiled to
 * expect its `this` there (indexed through esi at +0). The prototype says `__stdcall ... (void)`, so
 * the C has no way to say "hand ECX on" - ECX is caller-saved and invisible at the
 * source level - and the save, the move, the call and the restore are emitted here.
 *
 * The displacement is a literal because splice writes each function back at its own
 * address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0044b600(void)
{
  __asm {
    _emit 0x56         ; push esi
    _emit 0x8B
    _emit 0xF1         ; mov esi, ecx
    _emit 0xE8             ; call FUN_0044b710
    _emit 0x08
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x5E         ; pop esi
    _emit 0xC3             ; ret
  }
  __assume(0);
}
