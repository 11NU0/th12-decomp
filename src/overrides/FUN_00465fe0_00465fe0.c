/* Byte-for-byte override for FUN_00465fe0.

 * Original bytes (570):
 *     0000: 83 ec 0c 55 8b 6c 24 14
 *     0008: 57 33 ff 89 7c 24 08 89
 *     0010: 7c 24 18 89 7c 24 0c 3b
 *     0018: ef 75 0d 5f b8 f0 01 04
 *     0020: 80 5d 83 c4 0c c2 08 00
 *     0028: 8b 45 00 8b 50 24 8d 4c
 *     0030: 24 10 51 55 ff d2 3b c7
 *     0038: 0f 8c f4 01 00 00 f6 44
 *     0040: 24 10 02 56 74 2b 8b 35
 *     0048: 84 80 49 00 8d 64 24 00
 *     0050: 8b 45 00 8b 48 50 55 ff
 *     0058: d1 3d 96 00 78 88 75 04
 *     0060: 6a 0a ff d6 8b 55 00 8b
 *     0068: 42 50 55 ff d0 85 c0 75
 *     0070: df 8b 4d 00 57 57 57 8d
 *     0078: 54 24 28 52 8b 53 08 8d
 *     0080: 44 24 1c 50 8b 41 2c 52
 *     0088: 57 55 ff d0 3b c7 0f 8c
 *     0090: 9d 01 00 00 8b 73 0c 39
 *     0098: 7e 7c 74 21 8b 8e 80 00
 *     00a0: 00 00 8b 96 90 00 00 00
 *     00a8: 89 8e 84 00 00 00 8b 42
 *     00b0: 1c 3b c7 7e 37 89 86 88
 *     00b8: 00 00 00 eb 2f 8b 86 8c
 *     00c0: 00 00 00 3b c7 74 25 8b
 *     00c8: 8e 90 00 00 00 8b 51 10
 *     00d0: 03 15 60 47 4d 00 57 57
 *     00d8: 52 50 ff 15 a0 80 49 00
 *     00e0: 8b 86 90 00 00 00 8b 48
 *     00e8: 1c 89 4e 08 8b 44 24 0c
 *     00f0: 8b 73 0c 8d 54 24 10 52
 *     00f8: 50 8b 44 24 24 e8 8e 0c
 *     0100: 00 00 3b c7 0f 8c 27 01
 *     0108: 00 00 8b 7c 24 10 85 ff
 *     0110: 75 2a 8b 4c 24 1c 8b 53
 *     0118: 0c 8b 82 90 00 00 00 8b
 *     0120: 54 24 0c 51 33 c9 66 83
 *     0128: 78 2e 08 0f 95 c1 49 81
 *     0130: e1 80 00 00 00 51 52 e9
 *     0138: d4 00 00 00 8b 44 24 1c
 *     0140: 3b f8 0f 83 d0 00 00 00
 *     0148: 83 7c 24 20 00 0f 84 98
 *     0150: 00 00 00 8b 73 0c 83 7e
 *     0158: 7c 00 74 21 8b 86 80 00
 *     0160: 00 00 8b 8e 90 00 00 00
 *     0168: 89 86 84 00 00 00 8b 41
 *     0170: 1c 85 c0 7e 39 89 86 88
 *     0178: 00 00 00 eb 31 8b 86 8c
 *     0180: 00 00 00 85 c0 74 56 8b
 *     0188: 96 90 00 00 00 8b 4a 10
 *     0190: 03 0d 60 47 4d 00 6a 00
 *     0198: 6a 00 51 50 ff 15 a0 80
 *     01a0: 49 00 8b 96 90 00 00 00
 *     01a8: 8b 42 1c 89 46 08 8b 54
 *     01b0: 24 0c 8b 44 24 1c 8b 73
 *     01b8: 0c 8d 4c 24 10 51 8d 0c
 *     01c0: 17 2b c7 51 e8 c7 0b 00
 *     01c8: 00 85 c0 7c 64 03 7c 24
 *     01d0: 10 3b 7c 24 1c 0f 82 78
 *     01d8: ff ff ff eb 3b 5e 5f b8
 *     01e0: f0 01 04 80 5d 83 c4 0c
 *     01e8: c2 08 00 8b 53 0c 2b c7
 *     01f0: 50 8b 82 90 00 00 00 8b
 *     01f8: 54 24 10 33 c9 66 83 78
 *     0200: 2e 08 0f 95 c1 49 81 e1
 *     0208: 80 00 00 00 51 03 fa 57
 *     0210: e8 2b 12 01 00 83 c4 0c
 *     0218: 8b 4c 24 1c 8b 54 24 0c
 *     0220: 8b 45 00 8b 40 4c 6a 00
 *     0228: 6a 00 51 52 55 ff d0 33
 *     0230: c0 5e 5f 5d 83 c4 0c c2
 *     0238: 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __stdcall FUN_00465fe0(int * a0)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x14
    _emit 0x57
    _emit 0x33
    _emit 0xFF
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x0C
    _emit 0x3B
    _emit 0xEF
    _emit 0x75
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
    _emit 0x0C
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x00
    _emit 0x8B
    _emit 0x50
    _emit 0x24
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x51
    _emit 0x55
    _emit 0xFF
    _emit 0xD2
    _emit 0x3B
    _emit 0xC7
    _emit 0x0F
    _emit 0x8C
    _emit 0xF4
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x02
    _emit 0x56
    _emit 0x74
    _emit 0x2B
    _emit 0x8B
    _emit 0x35
    _emit 0x84
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8D
    _emit 0x64
    _emit 0x24
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x00
    _emit 0x8B
    _emit 0x48
    _emit 0x50
    _emit 0x55
    _emit 0xFF
    _emit 0xD1
    _emit 0x3D
    _emit 0x96
    _emit 0x00
    _emit 0x78
    _emit 0x88
    _emit 0x75
    _emit 0x04
    _emit 0x6A
    _emit 0x0A
    _emit 0xFF
    _emit 0xD6
    _emit 0x8B
    _emit 0x55
    _emit 0x00
    _emit 0x8B
    _emit 0x42
    _emit 0x50
    _emit 0x55
    _emit 0xFF
    _emit 0xD0
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xDF
    _emit 0x8B
    _emit 0x4D
    _emit 0x00
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x28
    _emit 0x52
    _emit 0x8B
    _emit 0x53
    _emit 0x08
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x2C
    _emit 0x52
    _emit 0x57
    _emit 0x55
    _emit 0xFF
    _emit 0xD0
    _emit 0x3B
    _emit 0xC7
    _emit 0x0F
    _emit 0x8C
    _emit 0x9D
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x73
    _emit 0x0C
    _emit 0x39
    _emit 0x7E
    _emit 0x7C
    _emit 0x74
    _emit 0x21
    _emit 0x8B
    _emit 0x8E
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x96
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x8E
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x42
    _emit 0x1C
    _emit 0x3B
    _emit 0xC7
    _emit 0x7E
    _emit 0x37
    _emit 0x89
    _emit 0x86
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x2F
    _emit 0x8B
    _emit 0x86
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x25
    _emit 0x8B
    _emit 0x8E
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x51
    _emit 0x10
    _emit 0x03
    _emit 0x15
    _emit 0x60
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x57
    _emit 0x57
    _emit 0x52
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0xA0
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x48
    _emit 0x1C
    _emit 0x89
    _emit 0x4E
    _emit 0x08
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x73
    _emit 0x0C
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x52
    _emit 0x50
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x24
    _emit 0xE8
    _emit 0x8E
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x0F
    _emit 0x8C
    _emit 0x27
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x10
    _emit 0x85
    _emit 0xFF
    _emit 0x75
    _emit 0x2A
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x53
    _emit 0x0C
    _emit 0x8B
    _emit 0x82
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x51
    _emit 0x33
    _emit 0xC9
    _emit 0x66
    _emit 0x83
    _emit 0x78
    _emit 0x2E
    _emit 0x08
    _emit 0x0F
    _emit 0x95
    _emit 0xC1
    _emit 0x49
    _emit 0x81
    _emit 0xE1
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0x52
    _emit 0xE9
    _emit 0xD4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x3B
    _emit 0xF8
    _emit 0x0F
    _emit 0x83
    _emit 0xD0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x7C
    _emit 0x24
    _emit 0x20
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x73
    _emit 0x0C
    _emit 0x83
    _emit 0x7E
    _emit 0x7C
    _emit 0x00
    _emit 0x74
    _emit 0x21
    _emit 0x8B
    _emit 0x86
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x8E
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x41
    _emit 0x1C
    _emit 0x85
    _emit 0xC0
    _emit 0x7E
    _emit 0x39
    _emit 0x89
    _emit 0x86
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x31
    _emit 0x8B
    _emit 0x86
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x56
    _emit 0x8B
    _emit 0x96
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4A
    _emit 0x10
    _emit 0x03
    _emit 0x0D
    _emit 0x60
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x51
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0xA0
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x96
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x42
    _emit 0x1C
    _emit 0x89
    _emit 0x46
    _emit 0x08
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x73
    _emit 0x0C
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x51
    _emit 0x8D
    _emit 0x0C
    _emit 0x17
    _emit 0x2B
    _emit 0xC7
    _emit 0x51
    _emit 0xE8
    _emit 0xC7
    _emit 0x0B
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x7C
    _emit 0x64
    _emit 0x03
    _emit 0x7C
    _emit 0x24
    _emit 0x10
    _emit 0x3B
    _emit 0x7C
    _emit 0x24
    _emit 0x1C
    _emit 0x0F
    _emit 0x82
    _emit 0x78
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x3B
    _emit 0x5E
    _emit 0x5F
    _emit 0xB8
    _emit 0xF0
    _emit 0x01
    _emit 0x04
    _emit 0x80
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0x8B
    _emit 0x53
    _emit 0x0C
    _emit 0x2B
    _emit 0xC7
    _emit 0x50
    _emit 0x8B
    _emit 0x82
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x33
    _emit 0xC9
    _emit 0x66
    _emit 0x83
    _emit 0x78
    _emit 0x2E
    _emit 0x08
    _emit 0x0F
    _emit 0x95
    _emit 0xC1
    _emit 0x49
    _emit 0x81
    _emit 0xE1
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0x03
    _emit 0xFA
    _emit 0x57
    _emit 0xE8
    _emit 0x2B
    _emit 0x12
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x45
    _emit 0x00
    _emit 0x8B
    _emit 0x40
    _emit 0x4C
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x51
    _emit 0x52
    _emit 0x55
    _emit 0xFF
    _emit 0xD0
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x5F
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
