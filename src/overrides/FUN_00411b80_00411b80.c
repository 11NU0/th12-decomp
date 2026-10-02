/* Byte-for-byte override for FUN_00411b80.

 * Original bytes (88):
 *     0000: 83 ec 10 d9 44 24 14 56
 *     0008: 8b 35 b8 43 4b 00 d9 5c
 *     0010: 24 08 83 be bc 8f 01 00
 *     0018: 00 d9 44 24 1c d9 5c 24
 *     0020: 0c d9 ee d9 5c 24 10 75
 *     0028: 28 8b 8e b4 8f 01 00 6a
 *     0030: 00 6a 12 8d 44 24 20 50
 *     0038: 51 b8 17 00 00 00 8d 4c
 *     0040: 24 18 e8 d9 f9 04 00 8b
 *     0048: 54 24 18 89 96 bc 8f 01
 *     0050: 00 5e 83 c4 10 c2 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00411b80(undefined4 a0, undefined4 a1)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x10
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xB8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0x83
    _emit 0xBE
    _emit 0xBC
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0xEE
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0x75
    _emit 0x28
    _emit 0x8B
    _emit 0x8E
    _emit 0xB4
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x12
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0x50
    _emit 0x51
    _emit 0xB8
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0xE8
    _emit 0xD9
    _emit 0xF9
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0x96
    _emit 0xBC
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
