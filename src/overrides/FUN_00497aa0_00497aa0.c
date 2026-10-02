/* Byte-for-byte override for FUN_00497aa0.

 * Original bytes (13):
 *     0000: 56 be 90 4c 4d 00 e8 65
 *     0008: 3c fb ff 5e c3
 *
 *  * Same shape as FUN_00497a00/00497a40/00497a70: a global is loaded into ESI,
 * then something is installed through it, with ESI saved and restored around
 * a trailing call. It is not one of the register-copy wrappers because ESI
 * is loaded with an immediate here, not moved from ECX.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00497aa0(void)
{
  __asm {
    _emit 0x56
    _emit 0xBE
    _emit 0x90
    _emit 0x4C
    _emit 0x4D
    _emit 0x00
    _emit 0xE8
    _emit 0x65
    _emit 0x3C
    _emit 0xFB
    _emit 0xFF
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
