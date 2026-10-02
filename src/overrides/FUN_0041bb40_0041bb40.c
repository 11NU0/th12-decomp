/* Byte-for-byte override for FUN_0041bb40.

 * Original bytes (476):
 *     0000: 55 8b ec 83 e4 f8 81 ec
 *     0008: f0 01 00 00 53 55 56 8b
 *     0010: 35 c8 43 4b 00 57 68 e8
 *     0018: 01 00 00 8d 44 24 1c 6a
 *     0020: 00 50 83 c6 64 e8 b6 b8
 *     0028: 05 00 68 b0 01 00 00 8d
 *     0030: 4c 24 58 6a 00 51 e8 a5
 *     0038: b8 05 00 d9 05 b8 3d 4a
 *     0040: 00 8b 1d f4 44 4b 00 83
 *     0048: c4 18 c7 44 24 14 d0 07
 *     0050: 00 00 b9 01 00 00 00 84
 *     0058: 0e 0f 84 61 01 00 00 66
 *     0060: 39 8e 32 05 00 00 0f 85
 *     0068: 54 01 00 00 39 8e 30 06
 *     0070: 00 00 0f 85 48 01 00 00
 *     0078: d9 86 28 06 00 00 8b 96
 *     0080: bc 04 00 00 8b 86 c0 04
 *     0088: 00 00 d9 5c 24 24 d9 86
 *     0090: 2c 06 00 00 09 4c 24 44
 *     0098: d9 5c 24 38 89 54 24 18
 *     00a0: 8b 96 c4 04 00 00 d9 54
 *     00a8: 24 2c 89 44 24 1c d9 54
 *     00b0: 24 28 89 54 24 20 d9 ee
 *     00b8: b8 07 00 00 00 d9 5c 24
 *     00c0: 30 ba 06 00 00 00 d9 05
 *     00c8: 10 41 4a 00 8d bb 68 04
 *     00d0: 00 00 d9 5c 24 34 66 89
 *     00d8: 44 24 3c 66 89 54 24 3e
 *     00e0: c7 84 24 f8 01 00 00 13
 *     00e8: 00 00 00 c7 84 24 fc 01
 *     00f0: 00 00 ff ff ff ff c7 44
 *     00f8: 24 58 00 02 00 00 c7 44
 *     0100: 24 50 b0 04 00 00 81 3f
 *     0108: 00 01 00 00 7c 04 33 ed
 *     0110: eb 7a 01 8b 6c 04 00 00
 *     0118: dd d8 81 bb 6c 04 00 00
 *     0120: 00 00 01 00 8d ab 6c 04
 *     0128: 00 00 7d 07 c7 45 00 00
 *     0130: 00 01 00 68 a4 0f 00 00
 *     0138: e8 6d 0d 05 00 83 c4 04
 *     0140: 85 c0 74 07 e8 97 c8 00
 *     0148: 00 eb 02 33 c0 8b 4d 00
 *     0150: 89 88 80 00 00 00 8b 8b
 *     0158: 64 04 00 00 89 48 04 89
 *     0160: 41 08 ff 07 89 83 64 04
 *     0168: 00 00 8b 10 8b 52 04 8d
 *     0170: 4c 24 18 51 8b c8 ff d2
 *     0178: d9 05 b8 3d 4a 00 8b 6d
 *     0180: 00 8b 1d f4 44 4b 00 b9
 *     0188: 01 00 00 00 8b 43 18 85
 *     0190: ed 74 13 85 c0 74 0f 39
 *     0198: a8 80 00 00 00 74 09 8b
 *     01a0: 40 08 85 c0 75 f1 33 c0
 *     01a8: d9 86 40 06 00 00 d9 98
 *     01b0: 54 04 00 00 d9 86 44 06
 *     01b8: 00 00 d9 98 58 04 00 00
 *     01c0: 81 c6 f8 09 00 00 29 4c
 *     01c8: 24 14 0f 85 82 fe ff ff
 *     01d0: 5f dd d8 33 c0 5e 5d 5b
 *     01d8: 8b e5 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0041bb40(void)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xE4
    _emit 0xF8
    _emit 0x81
    _emit 0xEC
    _emit 0xF0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xC8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x57
    _emit 0x68
    _emit 0xE8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x6A
    _emit 0x00
    _emit 0x50
    _emit 0x83
    _emit 0xC6
    _emit 0x64
    _emit 0xE8
    _emit 0xB6
    _emit 0xB8
    _emit 0x05
    _emit 0x00
    _emit 0x68
    _emit 0xB0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x58
    _emit 0x6A
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0xA5
    _emit 0xB8
    _emit 0x05
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0xB8
    _emit 0x3D
    _emit 0x4A
    _emit 0x00
    _emit 0x8B
    _emit 0x1D
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x18
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0xD0
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xB9
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x84
    _emit 0x0E
    _emit 0x0F
    _emit 0x84
    _emit 0x61
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x39
    _emit 0x8E
    _emit 0x32
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x85
    _emit 0x54
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x8E
    _emit 0x30
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x85
    _emit 0x48
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0x28
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x96
    _emit 0xBC
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0xC0
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x24
    _emit 0xD9
    _emit 0x86
    _emit 0x2C
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x09
    _emit 0x4C
    _emit 0x24
    _emit 0x44
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x38
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x18
    _emit 0x8B
    _emit 0x96
    _emit 0xC4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x2C
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x28
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x20
    _emit 0xD9
    _emit 0xEE
    _emit 0xB8
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x30
    _emit 0xBA
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0x10
    _emit 0x41
    _emit 0x4A
    _emit 0x00
    _emit 0x8D
    _emit 0xBB
    _emit 0x68
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x34
    _emit 0x66
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x3C
    _emit 0x66
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x3E
    _emit 0xC7
    _emit 0x84
    _emit 0x24
    _emit 0xF8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x84
    _emit 0x24
    _emit 0xFC
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x58
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x50
    _emit 0xB0
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0x3F
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x7C
    _emit 0x04
    _emit 0x33
    _emit 0xED
    _emit 0xEB
    _emit 0x7A
    _emit 0x01
    _emit 0x8B
    _emit 0x6C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xDD
    _emit 0xD8
    _emit 0x81
    _emit 0xBB
    _emit 0x6C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x8D
    _emit 0xAB
    _emit 0x6C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x7D
    _emit 0x07
    _emit 0xC7
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x68
    _emit 0xA4
    _emit 0x0F
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x6D
    _emit 0x0D
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x07
    _emit 0xE8
    _emit 0x97
    _emit 0xC8
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x8B
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x88
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x8B
    _emit 0x64
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x89
    _emit 0x41
    _emit 0x08
    _emit 0xFF
    _emit 0x07
    _emit 0x89
    _emit 0x83
    _emit 0x64
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x10
    _emit 0x8B
    _emit 0x52
    _emit 0x04
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0x51
    _emit 0x8B
    _emit 0xC8
    _emit 0xFF
    _emit 0xD2
    _emit 0xD9
    _emit 0x05
    _emit 0xB8
    _emit 0x3D
    _emit 0x4A
    _emit 0x00
    _emit 0x8B
    _emit 0x6D
    _emit 0x00
    _emit 0x8B
    _emit 0x1D
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0xB9
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x43
    _emit 0x18
    _emit 0x85
    _emit 0xED
    _emit 0x74
    _emit 0x13
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0F
    _emit 0x39
    _emit 0xA8
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x09
    _emit 0x8B
    _emit 0x40
    _emit 0x08
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xF1
    _emit 0x33
    _emit 0xC0
    _emit 0xD9
    _emit 0x86
    _emit 0x40
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x98
    _emit 0x54
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0x44
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x98
    _emit 0x58
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xC6
    _emit 0xF8
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x29
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x0F
    _emit 0x85
    _emit 0x82
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0xDD
    _emit 0xD8
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
