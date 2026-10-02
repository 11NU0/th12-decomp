/* Byte-for-byte override for FUN_0045f740.

 * Original bytes (319):
 *     0000: 83 ec 38 55 33 ed f6 05
 *     0008: e8 ea 4c 00 01 89 44 24
 *     0010: 08 74 27 8b 04 85 38 23
 *     0018: 4a 00 83 f8 15 74 13 3b
 *     0020: c5 74 0f 83 f8 14 75 12
 *     0028: c7 44 24 08 03 00 00 00
 *     0030: eb 08 c7 44 24 08 05 00
 *     0038: 00 00 8b 44 24 40 83 66
 *     0040: 10 fe 89 46 08 8b 06 8d
 *     0048: 54 24 04 52 89 6c 24 08
 *     0050: 8b 08 55 50 8b 41 48 ff
 *     0058: d0 39 6c 24 44 75 46 8b
 *     0060: 44 24 04 8b 08 8d 54 24
 *     0068: 1c 52 50 8b 41 30 ff d0
 *     0070: 8b 4c 24 34 8b 44 24 40
 *     0078: 8b 54 24 38 55 55 6a 01
 *     0080: 55 50 53 89 4c 24 2c 8d
 *     0088: 4c 24 24 51 89 54 24 34
 *     0090: 8b 54 24 20 55 52 89 6c
 *     0098: 24 30 89 7c 24 34 e8 33
 *     00a0: cf 00 00 eb 70 8b 43 1c
 *     00a8: 03 c3 89 6c 24 0c 89 6c
 *     00b0: 24 10 0f bf 48 08 89 4c
 *     00b8: 24 14 0f bf 50 0a 89 54
 *     00c0: 24 18 89 6c 24 1c 89 7c
 *     00c8: 24 20 0f bf 48 08 89 4c
 *     00d0: 24 24 0f bf 50 0a 55 03
 *     00d8: d7 6a 01 89 54 24 30 0f
 *     00e0: bf 48 06 8d 54 24 14 52
 *     00e8: 0f bf 50 08 03 c9 0f af
 *     00f0: 94 09 5c 23 4a 00 03 c9
 *     00f8: 8b 89 38 23 4a 00 55 52
 *     0100: 51 83 c0 10 50 8b 44 24
 *     0108: 20 8d 54 24 38 52 55 50
 *     0110: e8 97 ce 00 00 8b 44 24
 *     0118: 04 8b 08 8b 51 08 50 ff
 *     0120: d2 8b c6 e8 98 f5 ff ff
 *     0128: 8b 44 24 08 8b 0c 85 5c
 *     0130: 23 4a 00 89 4e 0c 33 c0
 *     0138: 5d 83 c4 38 c2 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0045f740(undefined4 a0)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x38
    _emit 0x55
    _emit 0x33
    _emit 0xED
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
    _emit 0x08
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
    _emit 0x3B
    _emit 0xC5
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
    _emit 0x08
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x08
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x40
    _emit 0x83
    _emit 0x66
    _emit 0x10
    _emit 0xFE
    _emit 0x89
    _emit 0x46
    _emit 0x08
    _emit 0x8B
    _emit 0x06
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x52
    _emit 0x89
    _emit 0x6C
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x08
    _emit 0x55
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x48
    _emit 0xFF
    _emit 0xD0
    _emit 0x39
    _emit 0x6C
    _emit 0x24
    _emit 0x44
    _emit 0x75
    _emit 0x46
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x08
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x52
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x30
    _emit 0xFF
    _emit 0xD0
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x34
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x40
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x38
    _emit 0x55
    _emit 0x55
    _emit 0x6A
    _emit 0x01
    _emit 0x55
    _emit 0x50
    _emit 0x53
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x2C
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x24
    _emit 0x51
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x34
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x20
    _emit 0x55
    _emit 0x52
    _emit 0x89
    _emit 0x6C
    _emit 0x24
    _emit 0x30
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x34
    _emit 0xE8
    _emit 0x33
    _emit 0xCF
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x70
    _emit 0x8B
    _emit 0x43
    _emit 0x1C
    _emit 0x03
    _emit 0xC3
    _emit 0x89
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x6C
    _emit 0x24
    _emit 0x10
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
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0x6C
    _emit 0x24
    _emit 0x1C
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x20
    _emit 0x0F
    _emit 0xBF
    _emit 0x48
    _emit 0x08
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x24
    _emit 0x0F
    _emit 0xBF
    _emit 0x50
    _emit 0x0A
    _emit 0x55
    _emit 0x03
    _emit 0xD7
    _emit 0x6A
    _emit 0x01
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x30
    _emit 0x0F
    _emit 0xBF
    _emit 0x48
    _emit 0x06
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x14
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
    _emit 0x55
    _emit 0x52
    _emit 0x51
    _emit 0x83
    _emit 0xC0
    _emit 0x10
    _emit 0x50
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x38
    _emit 0x52
    _emit 0x55
    _emit 0x50
    _emit 0xE8
    _emit 0x97
    _emit 0xCE
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
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
    _emit 0x98
    _emit 0xF5
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x08
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
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x38
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
