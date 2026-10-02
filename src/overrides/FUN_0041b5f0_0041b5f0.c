/* Byte-for-byte override for FUN_0041b5f0.

 * Original bytes (325):
 *     0000: 83 ec 0c 53 55 56 8b 35
 *     0008: b8 43 4b 00 57 bf 01 00
 *     0010: 00 00 c7 86 98 8f 01 00
 *     0018: 05 00 00 00 33 ed 39 b9
 *     0020: 3c 02 00 00 75 6c a1 dc
 *     0028: 43 4b 00 8b 50 1c 8b 92
 *     0030: 88 12 00 00 89 91 40 02
 *     0038: 00 00 8b 50 1c 01 ba 88
 *     0040: 12 00 00 8b 50 1c 83 ba
 *     0048: 88 12 00 00 0f 7c 08 8b
 *     0050: c2 89 a8 88 12 00 00 8b
 *     0058: 91 40 02 00 00 8b 14 95
 *     0060: 48 2f 4b 00 b8 67 66 66
 *     0068: 66 f7 ea a1 44 0c 4b 00
 *     0070: c1 fa 02 8b da c1 eb 1f
 *     0078: 03 da 03 c3 3d 00 ca 9a
 *     0080: 3b a3 44 0c 4b 00 7c 0a
 *     0088: c7 05 44 0c 4b 00 ff c9
 *     0090: 9a 3b d9 41 34 8d 5c 24
 *     0098: 10 dc 05 70 3d 4a 00 dc
 *     00a0: 05 28 3d 4a 00 d9 5c 24
 *     00a8: 10 d9 41 38 dc 05 68 3d
 *     00b0: 4a 00 d9 5c 24 14 d9 41
 *     00b8: 3c c7 86 80 8f 01 00 ff
 *     00c0: ff ff d0 d9 5c 24 18 89
 *     00c8: ae a4 8f 01 00 d9 05 14
 *     00d0: 40 4a 00 89 ae a8 8f 01
 *     00d8: 00 d9 96 84 8f 01 00 89
 *     00e0: be 9c 8f 01 00 d9 9e 88
 *     00e8: 8f 01 00 8b 81 40 02 00
 *     00f0: 00 8b 0c 85 48 2f 4b 00
 *     00f8: 51 68 84 f4 49 00 e8 cd
 *     0100: 5e fe ff d9 e8 a1 b8 43
 *     0108: 4b 00 d9 90 84 8f 01 00
 *     0110: 83 c4 08 d9 98 88 8f 01
 *     0118: 00 89 b8 a4 8f 01 00 89
 *     0120: b8 a8 8f 01 00 5f 5e 89
 *     0128: a8 98 8f 01 00 89 a8 9c
 *     0130: 8f 01 00 5d c7 80 80 8f
 *     0138: 01 00 ff ff ff ff 33 c0
 *     0140: 5b 83 c4 0c c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_0041b5f0(int a0)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xB8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x57
    _emit 0xBF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x98
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xED
    _emit 0x39
    _emit 0xB9
    _emit 0x3C
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x6C
    _emit 0xA1
    _emit 0xDC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x50
    _emit 0x1C
    _emit 0x8B
    _emit 0x92
    _emit 0x88
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x91
    _emit 0x40
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x50
    _emit 0x1C
    _emit 0x01
    _emit 0xBA
    _emit 0x88
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x50
    _emit 0x1C
    _emit 0x83
    _emit 0xBA
    _emit 0x88
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x7C
    _emit 0x08
    _emit 0x8B
    _emit 0xC2
    _emit 0x89
    _emit 0xA8
    _emit 0x88
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x91
    _emit 0x40
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x14
    _emit 0x95
    _emit 0x48
    _emit 0x2F
    _emit 0x4B
    _emit 0x00
    _emit 0xB8
    _emit 0x67
    _emit 0x66
    _emit 0x66
    _emit 0x66
    _emit 0xF7
    _emit 0xEA
    _emit 0xA1
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xC1
    _emit 0xFA
    _emit 0x02
    _emit 0x8B
    _emit 0xDA
    _emit 0xC1
    _emit 0xEB
    _emit 0x1F
    _emit 0x03
    _emit 0xDA
    _emit 0x03
    _emit 0xC3
    _emit 0x3D
    _emit 0x00
    _emit 0xCA
    _emit 0x9A
    _emit 0x3B
    _emit 0xA3
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x7C
    _emit 0x0A
    _emit 0xC7
    _emit 0x05
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xFF
    _emit 0xC9
    _emit 0x9A
    _emit 0x3B
    _emit 0xD9
    _emit 0x41
    _emit 0x34
    _emit 0x8D
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0xDC
    _emit 0x05
    _emit 0x70
    _emit 0x3D
    _emit 0x4A
    _emit 0x00
    _emit 0xDC
    _emit 0x05
    _emit 0x28
    _emit 0x3D
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x41
    _emit 0x38
    _emit 0xDC
    _emit 0x05
    _emit 0x68
    _emit 0x3D
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0x41
    _emit 0x3C
    _emit 0xC7
    _emit 0x86
    _emit 0x80
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xD0
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0xAE
    _emit 0xA4
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0x14
    _emit 0x40
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0xA8
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0xD9
    _emit 0x96
    _emit 0x84
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x89
    _emit 0xBE
    _emit 0x9C
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0xD9
    _emit 0x9E
    _emit 0x88
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x81
    _emit 0x40
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0C
    _emit 0x85
    _emit 0x48
    _emit 0x2F
    _emit 0x4B
    _emit 0x00
    _emit 0x51
    _emit 0x68
    _emit 0x84
    _emit 0xF4
    _emit 0x49
    _emit 0x00
    _emit 0xE8
    _emit 0xCD
    _emit 0x5E
    _emit 0xFE
    _emit 0xFF
    _emit 0xD9
    _emit 0xE8
    _emit 0xA1
    _emit 0xB8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xD9
    _emit 0x90
    _emit 0x84
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0xD9
    _emit 0x98
    _emit 0x88
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x89
    _emit 0xB8
    _emit 0xA4
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x89
    _emit 0xB8
    _emit 0xA8
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x89
    _emit 0xA8
    _emit 0x98
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x89
    _emit 0xA8
    _emit 0x9C
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x5D
    _emit 0xC7
    _emit 0x80
    _emit 0x80
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC3
  }
  __assume(0);
}
