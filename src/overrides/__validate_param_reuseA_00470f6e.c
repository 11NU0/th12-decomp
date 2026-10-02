/* Byte-for-byte override for __validate_param_reuseA.

 * Original bytes (299):
 *     0000: 8b ff 55 8b ec 53 8a 5d
 *     0008: 10 56 8b 75 08 8a 46 08
 *     0010: 3c 70 0f 84 06 01 00 00
 *     0018: 80 fb 70 0f 84 fd 00 00
 *     0020: 00 3c 73 74 08 3c 53 74
 *     0028: 04 33 d2 eb 03 33 d2 42
 *     0030: 80 fb 73 74 09 80 fb 53
 *     0038: 74 04 33 c9 eb 03 33 c9
 *     0040: 41 85 d2 0f 85 a9 00 00
 *     0048: 00 85 c9 0f 85 c9 00 00
 *     0050: 00 b2 64 3a c2 74 4d 3c
 *     0058: 69 74 2d 3c 6f 74 29 3c
 *     0060: 75 74 25 3c 78 74 21 3c
 *     0068: 58 74 1d 3a da 74 19 80
 *     0070: fb 69 74 14 80 fb 6f 74
 *     0078: 0f 80 fb 75 74 0a 80 fb
 *     0080: 78 74 05 80 fb 58 75 5e
 *     0088: 3a c2 74 18 3c 69 74 14
 *     0090: 3c 6f 74 10 3c 75 74 0c
 *     0098: 3c 78 74 08 3c 58 74 04
 *     00a0: 33 c9 eb 03 33 c9 41 3a
 *     00a8: da 74 1d 80 fb 69 74 18
 *     00b0: 80 fb 6f 74 13 80 fb 75
 *     00b8: 74 0e 80 fb 78 74 09 80
 *     00c0: fb 58 74 04 33 c0 eb 03
 *     00c8: 33 c0 40 3b c8 75 4b 8b
 *     00d0: 46 0c 8b c8 33 4d 14 f7
 *     00d8: c1 00 00 01 00 75 3b 33
 *     00e0: 45 14 a8 20 75 34 8b 0e
 *     00e8: 33 c0 3b 4d 0c 0f 94 c0
 *     00f0: eb 35 3b d1 75 24 8b 4e
 *     00f8: 0c 8b 55 14 b8 10 08 00
 *     0100: 00 23 c8 f7 d9 1b c9 23
 *     0108: d0 f7 d9 f7 da 1b d2 f7
 *     0110: da 3b ca 75 05 33 c0 40
 *     0118: eb 0d 33 c0 eb 09 33 c9
 *     0120: 3a c3 0f 94 c1 8b c1 5e
 *     0128: 5b 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

bool __cdecl __validate_param_reuseA(int * a0, int a1, char a2, uint a3)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x53
    _emit 0x8A
    _emit 0x5D
    _emit 0x10
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x08
    _emit 0x8A
    _emit 0x46
    _emit 0x08
    _emit 0x3C
    _emit 0x70
    _emit 0x0F
    _emit 0x84
    _emit 0x06
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0xFB
    _emit 0x70
    _emit 0x0F
    _emit 0x84
    _emit 0xFD
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3C
    _emit 0x73
    _emit 0x74
    _emit 0x08
    _emit 0x3C
    _emit 0x53
    _emit 0x74
    _emit 0x04
    _emit 0x33
    _emit 0xD2
    _emit 0xEB
    _emit 0x03
    _emit 0x33
    _emit 0xD2
    _emit 0x42
    _emit 0x80
    _emit 0xFB
    _emit 0x73
    _emit 0x74
    _emit 0x09
    _emit 0x80
    _emit 0xFB
    _emit 0x53
    _emit 0x74
    _emit 0x04
    _emit 0x33
    _emit 0xC9
    _emit 0xEB
    _emit 0x03
    _emit 0x33
    _emit 0xC9
    _emit 0x41
    _emit 0x85
    _emit 0xD2
    _emit 0x0F
    _emit 0x85
    _emit 0xA9
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC9
    _emit 0x0F
    _emit 0x85
    _emit 0xC9
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xB2
    _emit 0x64
    _emit 0x3A
    _emit 0xC2
    _emit 0x74
    _emit 0x4D
    _emit 0x3C
    _emit 0x69
    _emit 0x74
    _emit 0x2D
    _emit 0x3C
    _emit 0x6F
    _emit 0x74
    _emit 0x29
    _emit 0x3C
    _emit 0x75
    _emit 0x74
    _emit 0x25
    _emit 0x3C
    _emit 0x78
    _emit 0x74
    _emit 0x21
    _emit 0x3C
    _emit 0x58
    _emit 0x74
    _emit 0x1D
    _emit 0x3A
    _emit 0xDA
    _emit 0x74
    _emit 0x19
    _emit 0x80
    _emit 0xFB
    _emit 0x69
    _emit 0x74
    _emit 0x14
    _emit 0x80
    _emit 0xFB
    _emit 0x6F
    _emit 0x74
    _emit 0x0F
    _emit 0x80
    _emit 0xFB
    _emit 0x75
    _emit 0x74
    _emit 0x0A
    _emit 0x80
    _emit 0xFB
    _emit 0x78
    _emit 0x74
    _emit 0x05
    _emit 0x80
    _emit 0xFB
    _emit 0x58
    _emit 0x75
    _emit 0x5E
    _emit 0x3A
    _emit 0xC2
    _emit 0x74
    _emit 0x18
    _emit 0x3C
    _emit 0x69
    _emit 0x74
    _emit 0x14
    _emit 0x3C
    _emit 0x6F
    _emit 0x74
    _emit 0x10
    _emit 0x3C
    _emit 0x75
    _emit 0x74
    _emit 0x0C
    _emit 0x3C
    _emit 0x78
    _emit 0x74
    _emit 0x08
    _emit 0x3C
    _emit 0x58
    _emit 0x74
    _emit 0x04
    _emit 0x33
    _emit 0xC9
    _emit 0xEB
    _emit 0x03
    _emit 0x33
    _emit 0xC9
    _emit 0x41
    _emit 0x3A
    _emit 0xDA
    _emit 0x74
    _emit 0x1D
    _emit 0x80
    _emit 0xFB
    _emit 0x69
    _emit 0x74
    _emit 0x18
    _emit 0x80
    _emit 0xFB
    _emit 0x6F
    _emit 0x74
    _emit 0x13
    _emit 0x80
    _emit 0xFB
    _emit 0x75
    _emit 0x74
    _emit 0x0E
    _emit 0x80
    _emit 0xFB
    _emit 0x78
    _emit 0x74
    _emit 0x09
    _emit 0x80
    _emit 0xFB
    _emit 0x58
    _emit 0x74
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x03
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0x3B
    _emit 0xC8
    _emit 0x75
    _emit 0x4B
    _emit 0x8B
    _emit 0x46
    _emit 0x0C
    _emit 0x8B
    _emit 0xC8
    _emit 0x33
    _emit 0x4D
    _emit 0x14
    _emit 0xF7
    _emit 0xC1
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x75
    _emit 0x3B
    _emit 0x33
    _emit 0x45
    _emit 0x14
    _emit 0xA8
    _emit 0x20
    _emit 0x75
    _emit 0x34
    _emit 0x8B
    _emit 0x0E
    _emit 0x33
    _emit 0xC0
    _emit 0x3B
    _emit 0x4D
    _emit 0x0C
    _emit 0x0F
    _emit 0x94
    _emit 0xC0
    _emit 0xEB
    _emit 0x35
    _emit 0x3B
    _emit 0xD1
    _emit 0x75
    _emit 0x24
    _emit 0x8B
    _emit 0x4E
    _emit 0x0C
    _emit 0x8B
    _emit 0x55
    _emit 0x14
    _emit 0xB8
    _emit 0x10
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x23
    _emit 0xC8
    _emit 0xF7
    _emit 0xD9
    _emit 0x1B
    _emit 0xC9
    _emit 0x23
    _emit 0xD0
    _emit 0xF7
    _emit 0xD9
    _emit 0xF7
    _emit 0xDA
    _emit 0x1B
    _emit 0xD2
    _emit 0xF7
    _emit 0xDA
    _emit 0x3B
    _emit 0xCA
    _emit 0x75
    _emit 0x05
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0xEB
    _emit 0x0D
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x09
    _emit 0x33
    _emit 0xC9
    _emit 0x3A
    _emit 0xC3
    _emit 0x0F
    _emit 0x94
    _emit 0xC1
    _emit 0x8B
    _emit 0xC1
    _emit 0x5E
    _emit 0x5B
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
