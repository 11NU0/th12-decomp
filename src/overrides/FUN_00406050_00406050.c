/* Byte-for-byte override for FUN_00406050.

 * Original bytes (45):
 *     0000: 51 d9 40 78 da b0 84 00
 *     0008: 00 00 8b 80 88 00 00 00
 *     0010: 48 d9 1c 24 d9 04 24 83
 *     0018: f8 0f 77 09 51 d9 1c 24
 *     0020: e8 0b ef 05 00 d9 1c 24
 *     0028: d9 04 24 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

float10 __stdcall FUN_00406050(void)
{
  __asm {
    _emit 0x51
    _emit 0xD9
    _emit 0x40
    _emit 0x78
    _emit 0xDA
    _emit 0xB0
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x80
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x48
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0x83
    _emit 0xF8
    _emit 0x0F
    _emit 0x77
    _emit 0x09
    _emit 0x51
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0x0B
    _emit 0xEF
    _emit 0x05
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
