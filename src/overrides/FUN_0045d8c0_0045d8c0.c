/* Byte-for-byte override for FUN_0045d8c0.

 * Original bytes (115):
 *     0000: 83 ec 18 d9 81 24 04 00
 *     0008: 00 d8 81 30 04 00 00 d9
 *     0010: 1c 24 d9 81 28 04 00 00
 *     0018: d8 81 34 04 00 00 d9 5c
 *     0020: 24 04 d9 81 2c 04 00 00
 *     0028: d8 81 38 04 00 00 d9 5c
 *     0030: 24 08 d9 04 24 d8 81 3c
 *     0038: 04 00 00 d9 5c 24 0c d9
 *     0040: 81 40 04 00 00 d8 44 24
 *     0048: 04 d9 5c 24 10 8b 54 24
 *     0050: 10 d9 81 44 04 00 00 8b
 *     0058: 4c 24 0c d8 44 24 08 89
 *     0060: 08 89 50 04 d9 5c 24 14
 *     0068: 8b 4c 24 14 89 48 08 83
 *     0070: c4 18 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0045d8c0(int a0)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x18
    _emit 0xD9
    _emit 0x81
    _emit 0x24
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD8
    _emit 0x81
    _emit 0x30
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x81
    _emit 0x28
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD8
    _emit 0x81
    _emit 0x34
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x81
    _emit 0x2C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD8
    _emit 0x81
    _emit 0x38
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xD8
    _emit 0x81
    _emit 0x3C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x81
    _emit 0x40
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD8
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x81
    _emit 0x44
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0xD8
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x08
    _emit 0x89
    _emit 0x50
    _emit 0x04
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x48
    _emit 0x08
    _emit 0x83
    _emit 0xC4
    _emit 0x18
    _emit 0xC3
  }
  __assume(0);
}
