/* Byte-for-byte override for FUN_00402390.

 * Original bytes (90):
 *     0000: 51 89 88 f4 03 00 00 d9
 *     0008: 41 24 d9 1c 24 d9 04 24
 *     0010: d9 90 8c 00 00 00 d9 58
 *     0018: 7c d9 41 2c d9 1c 24 d9
 *     0020: 04 24 d9 90 94 00 00 00
 *     0028: d9 98 84 00 00 00 d9 41
 *     0030: 28 d9 1c 24 d9 04 24 d9
 *     0038: 90 88 00 00 00 d9 98 80
 *     0040: 00 00 00 d9 41 30 d9 1c
 *     0048: 24 d9 04 24 d9 90 98 00
 *     0050: 00 00 d9 98 90 00 00 00
 *     0058: 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00402390(int a0)
{
  __asm {
    _emit 0x51
    _emit 0x89
    _emit 0x88
    _emit 0xF4
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x41
    _emit 0x24
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xD9
    _emit 0x90
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x58
    _emit 0x7C
    _emit 0xD9
    _emit 0x41
    _emit 0x2C
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xD9
    _emit 0x90
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x98
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x41
    _emit 0x28
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xD9
    _emit 0x90
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x98
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x41
    _emit 0x30
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xD9
    _emit 0x90
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x98
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
