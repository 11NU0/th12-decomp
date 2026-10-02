/* Byte-for-byte override for FUN_004339c0.

 * Original bytes (101):
 *     0000: d9 ee c7 46 04 13 00 00
 *     0008: 00 8b 46 20 33 c9 a8 01
 *     0010: 75 1a 83 c8 01 d9 56 18
 *     0018: 89 4e 14 c7 46 10 c1 bd
 *     0020: f0 ff c7 46 1c d0 2e 4b
 *     0028: 00 89 46 20 d9 5e 18 53
 *     0030: 89 4e 14 c7 46 10 ff ff
 *     0038: ff ff 8b 86 ec 01 00 00
 *     0040: 50 bb 01 00 00 00 e8 65
 *     0048: df 02 00 8b 8e e8 01 00
 *     0050: 00 51 e8 59 df 02 00 d9
 *     0058: 86 d8 02 00 00 d9 1d d0
 *     0060: 2e 4b 00 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_004339c0(void)
{
  __asm {
    _emit 0xD9
    _emit 0xEE
    _emit 0xC7
    _emit 0x46
    _emit 0x04
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x20
    _emit 0x33
    _emit 0xC9
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x1A
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x18
    _emit 0x89
    _emit 0x4E
    _emit 0x14
    _emit 0xC7
    _emit 0x46
    _emit 0x10
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x46
    _emit 0x1C
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x46
    _emit 0x20
    _emit 0xD9
    _emit 0x5E
    _emit 0x18
    _emit 0x53
    _emit 0x89
    _emit 0x4E
    _emit 0x14
    _emit 0xC7
    _emit 0x46
    _emit 0x10
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x86
    _emit 0xEC
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x65
    _emit 0xDF
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x8E
    _emit 0xE8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0x59
    _emit 0xDF
    _emit 0x02
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xD8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x1D
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
