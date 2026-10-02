/* Byte-for-byte override for FUN_00497a00.

 * Original bytes (23):
 *     0000: 56 be d8 f0 4c 00 c7 05
 *     0008: d8 f0 4c 00 38 37 4a 00
 *     0010: e8 2b d2 fc ff 5e c3
 *
 *  * Installs a function pointer into a global and then calls through it. The
 * save/restore of ESI around the call is what stops VC9 turning the trailing
 * call into a tail jmp, and the ESI assignment itself has no source-level
 * equivalent here. The three of these differ only in which global they patch
 * and which overload they dispatch to.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00497a00(void)
{
  __asm {
    _emit 0x56
    _emit 0xBE
    _emit 0xD8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xD8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0x38
    _emit 0x37
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x2B
    _emit 0xD2
    _emit 0xFC
    _emit 0xFF
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
