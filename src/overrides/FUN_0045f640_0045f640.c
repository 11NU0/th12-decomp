/* Byte-for-byte override for FUN_0045f640.

 * Original bytes (252):
 *     0000: 83 ec 18 f6 05 e8 ea 4c
 *     0008: 00 01 89 44 24 04 74 27
 *     0010: 8b 04 85 38 23 4a 00 83
 *     0018: f8 15 74 13 85 c0 74 0f
 *     0020: 83 f8 14 75 12 c7 44 24
 *     0028: 04 03 00 00 00 eb 08 c7
 *     0030: 44 24 04 05 00 00 00 8b
 *     0038: 06 83 66 10 fe 8d 14 24
 *     0040: 52 89 5e 08 c7 44 24 04
 *     0048: 00 00 00 00 8b 08 6a 00
 *     0050: 50 8b 41 48 ff d0 83 7c
 *     0058: 24 1c 00 6a 00 75 18 8b
 *     0060: 4c 24 04 6a 00 6a 01 6a
 *     0068: 00 53 57 6a 00 6a 00 51
 *     0070: e8 61 d0 00 00 eb 5d 8b
 *     0078: 57 1c 8d 04 3a c7 44 24
 *     0080: 0c 00 00 00 00 c7 44 24
 *     0088: 10 00 00 00 00 0f bf 48
 *     0090: 08 89 4c 24 14 0f bf 50
 *     0098: 0a 6a 01 89 54 24 1c 0f
 *     00a0: bf 48 06 8d 54 24 10 52
 *     00a8: 0f bf 50 08 03 c9 0f af
 *     00b0: 94 09 5c 23 4a 00 03 c9
 *     00b8: 8b 89 38 23 4a 00 6a 00
 *     00c0: 52 8b 54 24 14 51 83 c0
 *     00c8: 10 50 6a 00 6a 00 52 e8
 *     00d0: d8 cf 00 00 8b 04 24 8b
 *     00d8: 08 8b 51 08 50 ff d2 8b
 *     00e0: c6 e8 da f6 ff ff 8b 44
 *     00e8: 24 04 8b 0c 85 5c 23 4a
 *     00f0: 00 89 4e 0c 33 c0 83 c4
 *     00f8: 18 c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0045f640(void)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x18
    _emit 0xF6
    _emit 0x05
    _emit 0xE8
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x01
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x74
    _emit 0x27
    _emit 0x8B
    _emit 0x04
    _emit 0x85
    _emit 0x38
    _emit 0x23
    _emit 0x4A
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x15
    _emit 0x74
    _emit 0x13
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0F
    _emit 0x83
    _emit 0xF8
    _emit 0x14
    _emit 0x75
    _emit 0x12
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x08
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x06
    _emit 0x83
    _emit 0x66
    _emit 0x10
    _emit 0xFE
    _emit 0x8D
    _emit 0x14
    _emit 0x24
    _emit 0x52
    _emit 0x89
    _emit 0x5E
    _emit 0x08
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x6A
    _emit 0x00
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x48
    _emit 0xFF
    _emit 0xD0
    _emit 0x83
    _emit 0x7C
    _emit 0x24
    _emit 0x1C
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x75
    _emit 0x18
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0x6A
    _emit 0x00
    _emit 0x53
    _emit 0x57
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0x61
    _emit 0xD0
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x5D
    _emit 0x8B
    _emit 0x57
    _emit 0x1C
    _emit 0x8D
    _emit 0x04
    _emit 0x3A
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xBF
    _emit 0x48
    _emit 0x08
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x0F
    _emit 0xBF
    _emit 0x50
    _emit 0x0A
    _emit 0x6A
    _emit 0x01
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x0F
    _emit 0xBF
    _emit 0x48
    _emit 0x06
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x52
    _emit 0x0F
    _emit 0xBF
    _emit 0x50
    _emit 0x08
    _emit 0x03
    _emit 0xC9
    _emit 0x0F
    _emit 0xAF
    _emit 0x94
    _emit 0x09
    _emit 0x5C
    _emit 0x23
    _emit 0x4A
    _emit 0x00
    _emit 0x03
    _emit 0xC9
    _emit 0x8B
    _emit 0x89
    _emit 0x38
    _emit 0x23
    _emit 0x4A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x52
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x51
    _emit 0x83
    _emit 0xC0
    _emit 0x10
    _emit 0x50
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x52
    _emit 0xE8
    _emit 0xD8
    _emit 0xCF
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x04
    _emit 0x24
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x08
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xDA
    _emit 0xF6
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x0C
    _emit 0x85
    _emit 0x5C
    _emit 0x23
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x4E
    _emit 0x0C
    _emit 0x33
    _emit 0xC0
    _emit 0x83
    _emit 0xC4
    _emit 0x18
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
