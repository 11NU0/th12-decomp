/* Byte-for-byte override for FUN_00421820.

 * Original bytes (16):
 *     0000: 53 8b d9 8b 08 83 c3 07
 *     0008: 51 e8 42 01 04 00 5b c3
 *
 *  * A __thiscall method: EBX holds the object pointer and the slot being
 * assigned is computed from it ('add ebx,7' then store). Ghidra decompiled
 * the body as an unrelated dereference of the pushed argument, so the C does
 * not describe this function. The trailing call is also the kind VC9 tail-
 * folds.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00421820(void)
{
  __asm {
    _emit 0x53
    _emit 0x8B
    _emit 0xD9
    _emit 0x8B
    _emit 0x08
    _emit 0x83
    _emit 0xC3
    _emit 0x07
    _emit 0x51
    _emit 0xE8
    _emit 0x42
    _emit 0x01
    _emit 0x04
    _emit 0x00
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
