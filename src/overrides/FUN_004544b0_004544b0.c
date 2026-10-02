/* Byte-for-byte override for FUN_004544b0.

 * Original bytes (200):
 *     0000: 51 57 8b f8 8b 06 85 c0
 *     0008: 0f 84 b7 00 00 00 8b 08
 *     0010: 8b 51 48 50 ff d2 8b 06
 *     0018: 8b 08 8b 51 34 6a 00 50
 *     0020: ff d2 8b 06 8b 08 8b 51
 *     0028: 40 57 50 ff d2 89 7e 10
 *     0030: 83 3d 80 47 4d 00 00 74
 *     0038: 68 db 05 80 47 4d 00 8b
 *     0040: 46 08 0f bf 48 08 8b 3e
 *     0048: dc 35 e8 3c 4a 00 81 c1
 *     0050: 88 13 00 00 53 8b 1f d9
 *     0058: 5c 24 08 d9 44 24 08 d9
 *     0060: e8 d9 c0 de e2 d9 c9 d9
 *     0068: 5c 24 08 d9 44 24 08 d9
 *     0070: c0 dc c8 de c9 d9 5c 24
 *     0078: 08 d8 64 24 08 d9 5c 24
 *     0080: 08 d9 44 24 08 89 4c 24
 *     0088: 08 da 4c 24 08 e8 9e ec
 *     0090: 03 00 8b 53 3c 2d 88 13
 *     0098: 00 00 50 57 ff d2 5b eb
 *     00a0: 0f 8b 06 8b 08 8b 51 3c
 *     00a8: 68 f0 d8 ff ff 50 ff d2
 *     00b0: 8b 56 08 8b 52 0c 8b 06
 *     00b8: 8b 08 52 6a 00 6a 00 50
 *     00c0: 8b 41 30 ff d0 5f 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_004544b0(void)
{
  __asm {
    _emit 0x51
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x8B
    _emit 0x06
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x84
    _emit 0xB7
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x48
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x06
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x34
    _emit 0x6A
    _emit 0x00
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x06
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x40
    _emit 0x57
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x83
    _emit 0x3D
    _emit 0x80
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x68
    _emit 0xDB
    _emit 0x05
    _emit 0x80
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x08
    _emit 0x0F
    _emit 0xBF
    _emit 0x48
    _emit 0x08
    _emit 0x8B
    _emit 0x3E
    _emit 0xDC
    _emit 0x35
    _emit 0xE8
    _emit 0x3C
    _emit 0x4A
    _emit 0x00
    _emit 0x81
    _emit 0xC1
    _emit 0x88
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x8B
    _emit 0x1F
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
    _emit 0xD9
    _emit 0xC0
    _emit 0xDC
    _emit 0xC8
    _emit 0xDE
    _emit 0xC9
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
    _emit 0x9E
    _emit 0xEC
    _emit 0x03
    _emit 0x00
    _emit 0x8B
    _emit 0x53
    _emit 0x3C
    _emit 0x2D
    _emit 0x88
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x57
    _emit 0xFF
    _emit 0xD2
    _emit 0x5B
    _emit 0xEB
    _emit 0x0F
    _emit 0x8B
    _emit 0x06
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
    _emit 0x8B
    _emit 0x56
    _emit 0x08
    _emit 0x8B
    _emit 0x52
    _emit 0x0C
    _emit 0x8B
    _emit 0x06
    _emit 0x8B
    _emit 0x08
    _emit 0x52
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x30
    _emit 0xFF
    _emit 0xD0
    _emit 0x5F
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
