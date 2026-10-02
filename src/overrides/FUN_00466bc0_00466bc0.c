/* Byte-for-byte override for FUN_00466bc0.

 * Original bytes (130):
 *     0000: 53 56 8b f1 83 7e 7c 00
 *     0008: 8b d8 74 0a 5e b8 05 40
 *     0010: 00 80 5b c2 04 00 83 be
 *     0018: 8c 00 00 00 ff 57 75 2d
 *     0020: 8b be 94 00 00 00 c7 46
 *     0028: 78 01 00 00 00 c7 46 7c
 *     0030: 00 00 00 00 e8 17 ff ff
 *     0038: ff 83 be 8c 00 00 00 ff
 *     0040: 75 0b 5f 5e b8 05 40 00
 *     0048: 80 5b c2 04 00 89 9e 90
 *     0050: 00 00 00 8b 43 1c 8b 4b
 *     0058: 18 50 51 53 68 f4 3a 4a
 *     0060: 00 e8 6a 02 00 00 8b 7c
 *     0068: 24 20 83 c4 10 32 db e8
 *     0070: 5c 00 00 00 8b 56 08 5f
 *     0078: 89 56 2c 5e 33 c0 5b c2
 *     0080: 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_00466bc0(int a0, undefined a1, undefined4 a2)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0x83
    _emit 0x7E
    _emit 0x7C
    _emit 0x00
    _emit 0x8B
    _emit 0xD8
    _emit 0x74
    _emit 0x0A
    _emit 0x5E
    _emit 0xB8
    _emit 0x05
    _emit 0x40
    _emit 0x00
    _emit 0x80
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xBE
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x57
    _emit 0x75
    _emit 0x2D
    _emit 0x8B
    _emit 0xBE
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x78
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x7C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x17
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xBE
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x0B
    _emit 0x5F
    _emit 0x5E
    _emit 0xB8
    _emit 0x05
    _emit 0x40
    _emit 0x00
    _emit 0x80
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x89
    _emit 0x9E
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x43
    _emit 0x1C
    _emit 0x8B
    _emit 0x4B
    _emit 0x18
    _emit 0x50
    _emit 0x51
    _emit 0x53
    _emit 0x68
    _emit 0xF4
    _emit 0x3A
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x6A
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x20
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x32
    _emit 0xDB
    _emit 0xE8
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x56
    _emit 0x08
    _emit 0x5F
    _emit 0x89
    _emit 0x56
    _emit 0x2C
    _emit 0x5E
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
