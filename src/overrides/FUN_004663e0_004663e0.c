/* Byte-for-byte override for FUN_004663e0.

 * Original bytes (125):
 *     0000: 51 83 3d 7c 47 4d 00 00
 *     0008: 8b 40 04 74 5f db 05 7c
 *     0010: 47 4d 00 81 c1 88 13 00
 *     0018: 00 56 8b 30 dc 35 e8 3c
 *     0020: 4a 00 57 8b 3e d9 5c 24
 *     0028: 08 d9 44 24 08 d9 e8 d9
 *     0030: c0 de e2 d9 c9 d9 5c 24
 *     0038: 08 d9 44 24 08 dc c8 d9
 *     0040: 5c 24 08 d8 64 24 08 d9
 *     0048: 5c 24 08 d9 44 24 08 89
 *     0050: 4c 24 08 da 4c 24 08 e8
 *     0058: a4 cd 02 00 8b 57 3c 2d
 *     0060: 88 13 00 00 50 56 ff d2
 *     0068: 5f 5e 59 c3 8b 00 8b 08
 *     0070: 8b 51 3c 68 f0 d8 ff ff
 *     0078: 50 ff d2 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_004663e0(int a0, undefined4 a1)
{
  __asm {
    _emit 0x51
    _emit 0x83
    _emit 0x3D
    _emit 0x7C
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x74
    _emit 0x5F
    _emit 0xDB
    _emit 0x05
    _emit 0x7C
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x81
    _emit 0xC1
    _emit 0x88
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0x8B
    _emit 0x30
    _emit 0xDC
    _emit 0x35
    _emit 0xE8
    _emit 0x3C
    _emit 0x4A
    _emit 0x00
    _emit 0x57
    _emit 0x8B
    _emit 0x3E
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0xE8
    _emit 0xD9
    _emit 0xC0
    _emit 0xDE
    _emit 0xE2
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0xDC
    _emit 0xC8
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD8
    _emit 0x64
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0xDA
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0xE8
    _emit 0xA4
    _emit 0xCD
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x57
    _emit 0x3C
    _emit 0x2D
    _emit 0x88
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x56
    _emit 0xFF
    _emit 0xD2
    _emit 0x5F
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
    _emit 0x8B
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x3C
    _emit 0x68
    _emit 0xF0
    _emit 0xD8
    _emit 0xFF
    _emit 0xFF
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
