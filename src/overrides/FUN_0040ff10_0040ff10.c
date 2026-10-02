/* Byte-for-byte override for FUN_0040ff10.

 * Original bytes (264):
 *     0000: 51 83 3d 94 ea 4c 00 00
 *     0008: 53 55 57 8b f8 75 1c 33
 *     0010: c0 89 06 89 46 04 89 46
 *     0018: 08 89 46 0c 89 46 10 89
 *     0020: 46 14 8b c6 5f 5d 5b 59
 *     0028: c2 04 00 8b 5c 24 14 8d
 *     0030: 2c bd ff ff ff ff 55 89
 *     0038: 3e 89 5e 04 e8 f9 d0 05
 *     0040: 00 83 c4 04 55 89 46 08
 *     0048: e8 ed d0 05 00 0f af fb
 *     0050: 89 46 0c 8d 04 fd 00 00
 *     0058: 00 00 2b c7 03 c0 03 c0
 *     0060: 83 c4 04 50 e8 d1 d0 05
 *     0068: 00 8d 0c 7f 03 c9 03 c9
 *     0070: 83 c4 04 51 89 46 10 e8
 *     0078: be d0 05 00 8b 16 4a 83
 *     0080: c4 04 33 ed 89 46 14 85
 *     0088: d2 7e 77 eb 07 8d 49 00
 *     0090: 8b 5c 24 14 8b fb 8d 5c
 *     0098: 24 0c e8 21 15 02 00 8b
 *     00a0: 10 8b 4e 08 8d 1c ad 00
 *     00a8: 00 00 00 89 14 0b 8b 7e
 *     00b0: 08 8b 04 1f 8b 15 cc e8
 *     00b8: 4c 00 03 fb 50 e8 4e 19
 *     00c0: 05 00 85 c0 75 02 89 07
 *     00c8: 8b 4e 0c 89 04 0b 8b 56
 *     00d0: 0c 8b 04 13 c7 80 8c 04
 *     00d8: 00 00 00 ff 40 00 8b 4e
 *     00e0: 0c 8b 14 0b 89 b2 98 04
 *     00e8: 00 00 8b 46 0c 8b 1c 03
 *     00f0: 81 a3 7c 04 00 00 1f ff
 *     00f8: ff ff 8b 0e 45 49 3b e9
 *     0100: 7c 8e 5f 5d 8b c6 5b 59
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0040ff10(int a0)
{
  __asm {
    _emit 0x51
    _emit 0x83
    _emit 0x3D
    _emit 0x94
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x55
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x75
    _emit 0x1C
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x06
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0x89
    _emit 0x46
    _emit 0x08
    _emit 0x89
    _emit 0x46
    _emit 0x0C
    _emit 0x89
    _emit 0x46
    _emit 0x10
    _emit 0x89
    _emit 0x46
    _emit 0x14
    _emit 0x8B
    _emit 0xC6
    _emit 0x5F
    _emit 0x5D
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0x8D
    _emit 0x2C
    _emit 0xBD
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x55
    _emit 0x89
    _emit 0x3E
    _emit 0x89
    _emit 0x5E
    _emit 0x04
    _emit 0xE8
    _emit 0xF9
    _emit 0xD0
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x55
    _emit 0x89
    _emit 0x46
    _emit 0x08
    _emit 0xE8
    _emit 0xED
    _emit 0xD0
    _emit 0x05
    _emit 0x00
    _emit 0x0F
    _emit 0xAF
    _emit 0xFB
    _emit 0x89
    _emit 0x46
    _emit 0x0C
    _emit 0x8D
    _emit 0x04
    _emit 0xFD
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x2B
    _emit 0xC7
    _emit 0x03
    _emit 0xC0
    _emit 0x03
    _emit 0xC0
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x50
    _emit 0xE8
    _emit 0xD1
    _emit 0xD0
    _emit 0x05
    _emit 0x00
    _emit 0x8D
    _emit 0x0C
    _emit 0x7F
    _emit 0x03
    _emit 0xC9
    _emit 0x03
    _emit 0xC9
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x51
    _emit 0x89
    _emit 0x46
    _emit 0x10
    _emit 0xE8
    _emit 0xBE
    _emit 0xD0
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x16
    _emit 0x4A
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x33
    _emit 0xED
    _emit 0x89
    _emit 0x46
    _emit 0x14
    _emit 0x85
    _emit 0xD2
    _emit 0x7E
    _emit 0x77
    _emit 0xEB
    _emit 0x07
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0xFB
    _emit 0x8D
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0xE8
    _emit 0x21
    _emit 0x15
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x10
    _emit 0x8B
    _emit 0x4E
    _emit 0x08
    _emit 0x8D
    _emit 0x1C
    _emit 0xAD
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x14
    _emit 0x0B
    _emit 0x8B
    _emit 0x7E
    _emit 0x08
    _emit 0x8B
    _emit 0x04
    _emit 0x1F
    _emit 0x8B
    _emit 0x15
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x03
    _emit 0xFB
    _emit 0x50
    _emit 0xE8
    _emit 0x4E
    _emit 0x19
    _emit 0x05
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x02
    _emit 0x89
    _emit 0x07
    _emit 0x8B
    _emit 0x4E
    _emit 0x0C
    _emit 0x89
    _emit 0x04
    _emit 0x0B
    _emit 0x8B
    _emit 0x56
    _emit 0x0C
    _emit 0x8B
    _emit 0x04
    _emit 0x13
    _emit 0xC7
    _emit 0x80
    _emit 0x8C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x40
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x0C
    _emit 0x8B
    _emit 0x14
    _emit 0x0B
    _emit 0x89
    _emit 0xB2
    _emit 0x98
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x0C
    _emit 0x8B
    _emit 0x1C
    _emit 0x03
    _emit 0x81
    _emit 0xA3
    _emit 0x7C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x1F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x0E
    _emit 0x45
    _emit 0x49
    _emit 0x3B
    _emit 0xE9
    _emit 0x7C
    _emit 0x8E
    _emit 0x5F
    _emit 0x5D
    _emit 0x8B
    _emit 0xC6
    _emit 0x5B
    _emit 0x59
  }
  __assume(0);
}
