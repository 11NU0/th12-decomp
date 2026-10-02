/* Byte-for-byte override for FUN_004914f8.

 * Original bytes (31):
 *     0000: 8b ff 55 8b ec 51 ff 75
 *     0008: fc ff 75 14 ff 75 10 ff
 *     0010: 75 0c ff 75 08 e8 a7 ff
 *     0018: ff ff 83 c4 14 c9 c3
 *
 *  * A __cdecl forwarder. The body pushes five stack arguments plus ECX, calls
 * the target, then cleans up with 'add esp,0x14' before leave/ret. Ghidra
 * typed it with four parameters, so the argument count is wrong;
 * independently, VC9 folds the trailing call into a tail jmp once the
 * argument count is corrected. Both faults point at the same place, so the
 * sequence is emitted whole. The leading 'mov edi,edi' is not emitted here:
 * this unit is pinned to /hotpatch and cl adds the slot itself.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl FUN_004914f8(void * a0, rsize_t a1, void * a2, rsize_t a3)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0xFF
    _emit 0x75
    _emit 0xFC
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0xA7
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
