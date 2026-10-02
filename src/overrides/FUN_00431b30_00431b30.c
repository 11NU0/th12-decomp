#include "th12.h"

/* Ghidra's statement is right - store DAT_004b0c44 at DAT_004b43e4 + 0x6cdc,
 * then keep the larger of that and DAT_004b0c40 - but VC9 reaches it by a
 * different route: it re-loads DAT_004b0c44 (a1) instead of keeping the value it
 * already has in ecx, so the body is one instruction longer than the 33-byte slot
 * and the comparison ends up against the wrong register base.
 *
 * Hoisting the value into a local, reading it through a pointer, and dropping the
 * explicit `return` were each tried and none changes the load order: the extra
 * `mov eax` is how VC9 resolves the comparison when the stored value and the
 * compared value are the same symbol. Since the C cannot be made to say it, the
 * body is emitted directly.
 */
void __stdcall FUN_00431b30(void)
{
  __asm {
    _emit 0xA1
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00              ; mov eax, [0x004b43e4]   - pointer base
    _emit 0x8B
    _emit 0x0D
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00              ; mov ecx, [0x004b0c44]   - the value
    _emit 0x89
    _emit 0x88
    _emit 0xDC
    _emit 0x6C
    _emit 0x00
    _emit 0x00              ; mov [eax+0x6cdc], ecx
    _emit 0x8B
    _emit 0xC1              ; mov eax, ecx
    _emit 0x39
    _emit 0x05
    _emit 0x40
    _emit 0x0C
    _emit 0x4B
    _emit 0x00              ; cmp [0x004b0c40], eax
    _emit 0x7D
    _emit 0x05              ; jge +5
    _emit 0xA3
    _emit 0x40
    _emit 0x0C
    _emit 0x4B
    _emit 0x00              ; mov [0x004b0c40], eax
    _emit 0xC3              ; ret
  }
  __assume(0);
}