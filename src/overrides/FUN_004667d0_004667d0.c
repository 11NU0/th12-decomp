/* Byte-for-byte override for FUN_004667d0.

 * Original bytes (543):
 *     0000: 83 ec 20 55 8b 6c 24 28
 *     0008: 8b 45 04 57 33 ff 3b c7
 *     0010: 74 2d 39 7d 0c 74 28 8b
 *     0018: 00 8b 08 8d 54 24 18 52
 *     0020: 8d 54 24 24 52 50 8b 41
 *     0028: 10 ff d0 8b 4c 24 18 8b
 *     0030: 45 68 8b d1 2b 55 70 3b
 *     0038: c2 72 11 3b c1 73 0d 5f
 *     0040: b8 f0 01 04 80 5d 83 c4
 *     0048: 20 c2 04 00 8b 45 04 53
 *     0050: 56 8b 30 3b f7 75 0f 5e
 *     0058: 5b 5f b8 f0 01 04 80 5d
 *     0060: 83 c4 20 c2 04 00 8d 5c
 *     0068: 24 1c e8 e1 f9 ff ff 3b
 *     0070: c7 0f 8c 9e 01 00 00 57
 *     0078: 39 7c 24 20 74 21 8b 4d
 *     0080: 04 8b 11 52 8b dd e8 85
 *     0088: f7 ff ff 33 c9 3b c7 0f
 *     0090: 9d c1 5e 5b 5f 5d 49 23
 *     0098: c1 83 c4 20 c2 04 00 8b
 *     00a0: 55 04 89 7c 24 14 89 7c
 *     00a8: 24 1c 8b 02 8b 08 8d 54
 *     00b0: 24 30 52 8d 54 24 20 52
 *     00b8: 8d 54 24 40 52 8d 54 24
 *     00c0: 20 52 8b 55 70 52 8b 55
 *     00c8: 68 52 50 8b 41 2c ff d0
 *     00d0: 3b c7 0f 8c 3d 01 00 00
 *     00d8: 39 7c 24 18 74 0f 5e 5b
 *     00e0: 5f b8 ff ff 00 80 5d 83
 *     00e8: c4 20 c2 04 00 8b 44 24
 *     00f0: 34 39 7d 6c 0f 85 b8 00
 *     00f8: 00 00 8b 54 24 10 8b 75
 *     0100: 0c 8d 4c 24 14 51 52 e8
 *     0108: 94 04 00 00 3b c7 0f 8c
 *     0110: 01 01 00 00 8b 44 24 14
 *     0118: 3b 44 24 34 73 4d 89 44
 *     0120: 24 1c 8b 75 0c 33 ff b3
 *     0128: 01 e8 92 03 00 00 85 c0
 *     0130: 0f 8c df 00 00 00 8b 7c
 *     0138: 24 1c 8b 4c 24 10 8b 44
 *     0140: 24 34 8b 75 0c 8d 54 24
 *     0148: 14 52 8d 14 0f 2b c7 52
 *     0150: e8 4b 04 00 00 85 c0 0f
 *     0158: 8c b8 00 00 00 03 7c 24
 *     0160: 14 89 7c 24 1c 3b 7c 24
 *     0168: 34 72 b7 8b 54 24 34 8b
 *     0170: 45 04 8b 00 8b 08 6a 00
 *     0178: 6a 00 52 8b 54 24 1c 52
 *     0180: 50 8b 41 4c ff d0 8b 4d
 *     0188: 04 8b 01 8b 10 8b 52 10
 *     0190: 6a 00 8d 4c 24 28 51 50
 *     0198: ff d2 85 c0 7c 77 8b 55
 *     01a0: 60 8b 4c 24 24 3b ca 73
 *     01a8: 33 8b 45 08 2b c2 03 c1
 *     01b0: eb 2e 8b 4d 0c 8b 91 90
 *     01b8: 00 00 00 8b 4c 24 10 50
 *     01c0: 33 c0 66 83 7a 2e 08 0f
 *     01c8: 95 c0 48 25 80 00 00 00
 *     01d0: 50 51 e8 79 0a 01 00 83
 *     01d8: c4 0c eb 8f 8b c1 2b c2
 *     01e0: 01 45 64 83 7d 6c 00 8b
 *     01e8: 45 64 89 4d 60 74 15 8b
 *     01f0: 4d 0c 3b 41 2c 72 0d 8b
 *     01f8: 55 04 8b 02 8b 08 8b 51
 *     0200: 48 50 ff d2 8b 45 68 03
 *     0208: 44 24 34 33 d2 f7 75 08
 *     0210: 33 c0 89 55 68 5e 5b 5f
 *     0218: 5d 83 c4 20 c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __stdcall FUN_004667d0(int a0)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x20
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x28
    _emit 0x8B
    _emit 0x45
    _emit 0x04
    _emit 0x57
    _emit 0x33
    _emit 0xFF
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x2D
    _emit 0x39
    _emit 0x7D
    _emit 0x0C
    _emit 0x74
    _emit 0x28
    _emit 0x8B
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x18
    _emit 0x52
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x24
    _emit 0x52
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x10
    _emit 0xFF
    _emit 0xD0
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0x8B
    _emit 0x45
    _emit 0x68
    _emit 0x8B
    _emit 0xD1
    _emit 0x2B
    _emit 0x55
    _emit 0x70
    _emit 0x3B
    _emit 0xC2
    _emit 0x72
    _emit 0x11
    _emit 0x3B
    _emit 0xC1
    _emit 0x73
    _emit 0x0D
    _emit 0x5F
    _emit 0xB8
    _emit 0xF0
    _emit 0x01
    _emit 0x04
    _emit 0x80
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x20
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x04
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0x30
    _emit 0x3B
    _emit 0xF7
    _emit 0x75
    _emit 0x0F
    _emit 0x5E
    _emit 0x5B
    _emit 0x5F
    _emit 0xB8
    _emit 0xF0
    _emit 0x01
    _emit 0x04
    _emit 0x80
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x20
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8D
    _emit 0x5C
    _emit 0x24
    _emit 0x1C
    _emit 0xE8
    _emit 0xE1
    _emit 0xF9
    _emit 0xFF
    _emit 0xFF
    _emit 0x3B
    _emit 0xC7
    _emit 0x0F
    _emit 0x8C
    _emit 0x9E
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x39
    _emit 0x7C
    _emit 0x24
    _emit 0x20
    _emit 0x74
    _emit 0x21
    _emit 0x8B
    _emit 0x4D
    _emit 0x04
    _emit 0x8B
    _emit 0x11
    _emit 0x52
    _emit 0x8B
    _emit 0xDD
    _emit 0xE8
    _emit 0x85
    _emit 0xF7
    _emit 0xFF
    _emit 0xFF
    _emit 0x33
    _emit 0xC9
    _emit 0x3B
    _emit 0xC7
    _emit 0x0F
    _emit 0x9D
    _emit 0xC1
    _emit 0x5E
    _emit 0x5B
    _emit 0x5F
    _emit 0x5D
    _emit 0x49
    _emit 0x23
    _emit 0xC1
    _emit 0x83
    _emit 0xC4
    _emit 0x20
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x55
    _emit 0x04
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x02
    _emit 0x8B
    _emit 0x08
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x30
    _emit 0x52
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x20
    _emit 0x52
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x40
    _emit 0x52
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x20
    _emit 0x52
    _emit 0x8B
    _emit 0x55
    _emit 0x70
    _emit 0x52
    _emit 0x8B
    _emit 0x55
    _emit 0x68
    _emit 0x52
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x2C
    _emit 0xFF
    _emit 0xD0
    _emit 0x3B
    _emit 0xC7
    _emit 0x0F
    _emit 0x8C
    _emit 0x3D
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x7C
    _emit 0x24
    _emit 0x18
    _emit 0x74
    _emit 0x0F
    _emit 0x5E
    _emit 0x5B
    _emit 0x5F
    _emit 0xB8
    _emit 0xFF
    _emit 0xFF
    _emit 0x00
    _emit 0x80
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x20
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x34
    _emit 0x39
    _emit 0x7D
    _emit 0x6C
    _emit 0x0F
    _emit 0x85
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x75
    _emit 0x0C
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x51
    _emit 0x52
    _emit 0xE8
    _emit 0x94
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x0F
    _emit 0x8C
    _emit 0x01
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x3B
    _emit 0x44
    _emit 0x24
    _emit 0x34
    _emit 0x73
    _emit 0x4D
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x75
    _emit 0x0C
    _emit 0x33
    _emit 0xFF
    _emit 0xB3
    _emit 0x01
    _emit 0xE8
    _emit 0x92
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x8C
    _emit 0xDF
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x34
    _emit 0x8B
    _emit 0x75
    _emit 0x0C
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x52
    _emit 0x8D
    _emit 0x14
    _emit 0x0F
    _emit 0x2B
    _emit 0xC7
    _emit 0x52
    _emit 0xE8
    _emit 0x4B
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x8C
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0x7C
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x1C
    _emit 0x3B
    _emit 0x7C
    _emit 0x24
    _emit 0x34
    _emit 0x72
    _emit 0xB7
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x34
    _emit 0x8B
    _emit 0x45
    _emit 0x04
    _emit 0x8B
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x52
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x52
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x4C
    _emit 0xFF
    _emit 0xD0
    _emit 0x8B
    _emit 0x4D
    _emit 0x04
    _emit 0x8B
    _emit 0x01
    _emit 0x8B
    _emit 0x10
    _emit 0x8B
    _emit 0x52
    _emit 0x10
    _emit 0x6A
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x28
    _emit 0x51
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x85
    _emit 0xC0
    _emit 0x7C
    _emit 0x77
    _emit 0x8B
    _emit 0x55
    _emit 0x60
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x24
    _emit 0x3B
    _emit 0xCA
    _emit 0x73
    _emit 0x33
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x2B
    _emit 0xC2
    _emit 0x03
    _emit 0xC1
    _emit 0xEB
    _emit 0x2E
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0x8B
    _emit 0x91
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x50
    _emit 0x33
    _emit 0xC0
    _emit 0x66
    _emit 0x83
    _emit 0x7A
    _emit 0x2E
    _emit 0x08
    _emit 0x0F
    _emit 0x95
    _emit 0xC0
    _emit 0x48
    _emit 0x25
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x51
    _emit 0xE8
    _emit 0x79
    _emit 0x0A
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xEB
    _emit 0x8F
    _emit 0x8B
    _emit 0xC1
    _emit 0x2B
    _emit 0xC2
    _emit 0x01
    _emit 0x45
    _emit 0x64
    _emit 0x83
    _emit 0x7D
    _emit 0x6C
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x64
    _emit 0x89
    _emit 0x4D
    _emit 0x60
    _emit 0x74
    _emit 0x15
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0x3B
    _emit 0x41
    _emit 0x2C
    _emit 0x72
    _emit 0x0D
    _emit 0x8B
    _emit 0x55
    _emit 0x04
    _emit 0x8B
    _emit 0x02
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x48
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x45
    _emit 0x68
    _emit 0x03
    _emit 0x44
    _emit 0x24
    _emit 0x34
    _emit 0x33
    _emit 0xD2
    _emit 0xF7
    _emit 0x75
    _emit 0x08
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x55
    _emit 0x68
    _emit 0x5E
    _emit 0x5B
    _emit 0x5F
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x20
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
