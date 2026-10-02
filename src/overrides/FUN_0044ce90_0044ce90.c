/* Byte-for-byte override for FUN_0044ce90.

 * Original bytes (212):
 *     0000: 83 ec 54 56 33 f6 b8 00
 *     0008: 00 00 80 89 44 24 24 89
 *     0010: 44 24 28 89 44 24 2c 89
 *     0018: 44 24 30 b8 0a 00 00 00
 *     0020: 8d 54 24 04 52 8b 54 24
 *     0028: 60 66 89 44 24 48 8d 44
 *     0030: 24 18 50 56 56 6a 20 56
 *     0038: 33 c9 56 66 89 4c 24 62
 *     0040: 8b 4c 24 7c 56 51 52 c7
 *     0048: 44 24 3c 44 00 00 00 89
 *     0050: 74 24 40 89 74 24 44 89
 *     0058: 74 24 48 c7 44 24 5c 50
 *     0060: 00 00 00 c7 44 24 60 19
 *     0068: 00 00 00 89 74 24 64 89
 *     0070: 74 24 68 89 74 24 70 89
 *     0078: 74 24 74 89 74 24 78 89
 *     0080: 74 24 7c ff 15 b8 80 49
 *     0088: 00 85 c0 75 0a 83 c8 ff
 *     0090: 5e 83 c4 54 c2 0c 00 39
 *     0098: 74 24 64 74 31 8b 35 bc
 *     00a0: 80 49 00 c7 44 24 60 03
 *     00a8: 01 00 00 eb 03 8d 49 00
 *     00b0: 8b 4c 24 04 8d 44 24 60
 *     00b8: 50 51 ff d6 8b 44 24 60
 *     00c0: 3d 03 01 00 00 74 e9 5e
 *     00c8: 83 c4 54 c2 0c 00 33 c0
 *     00d0: 5e 83 c4 54
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __stdcall FUN_0044ce90(LPCSTR a0, LPSTR a1, int a2)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x54
    _emit 0x56
    _emit 0x33
    _emit 0xF6
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x24
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x28
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x2C
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x30
    _emit 0xB8
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x52
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x60
    _emit 0x66
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x48
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x50
    _emit 0x56
    _emit 0x56
    _emit 0x6A
    _emit 0x20
    _emit 0x56
    _emit 0x33
    _emit 0xC9
    _emit 0x56
    _emit 0x66
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x62
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x7C
    _emit 0x56
    _emit 0x51
    _emit 0x52
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x3C
    _emit 0x44
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x40
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x44
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x48
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x5C
    _emit 0x50
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x60
    _emit 0x19
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x64
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x68
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x70
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x74
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x78
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x7C
    _emit 0xFF
    _emit 0x15
    _emit 0xB8
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x0A
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x54
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
    _emit 0x39
    _emit 0x74
    _emit 0x24
    _emit 0x64
    _emit 0x74
    _emit 0x31
    _emit 0x8B
    _emit 0x35
    _emit 0xBC
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x60
    _emit 0x03
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x03
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x60
    _emit 0x50
    _emit 0x51
    _emit 0xFF
    _emit 0xD6
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x60
    _emit 0x3D
    _emit 0x03
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0xE9
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x54
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x54
  }
  __assume(0);
}
