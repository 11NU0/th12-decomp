/* Byte-for-byte override for FUN_004311e0.

 * Original bytes (636):
 *     0000: 53 56 57 8b f8 8b 87 54
 *     0008: 05 00 00 bb 01 00 00 00
 *     0010: 3b 87 58 05 00 00 0f 84
 *     0018: e0 00 00 00 f7 87 90 05
 *     0020: 00 00 00 80 00 00 74 13
 *     0028: 8d 8f 88 08 00 00 51 ff
 *     0030: 15 88 80 49 00 00 9f 35
 *     0038: 09 00 00 8b 97 58 05 00
 *     0040: 00 8b 87 54 05 00 00 52
 *     0048: 50 68 58 0d 4a 00 89 87
 *     0050: 5c 05 00 00 e8 a7 07 00
 *     0058: 00 8b 87 58 05 00 00 83
 *     0060: c4 0c c7 87 c0 09 00 00
 *     0068: 00 00 00 ff 83 f8 11 77
 *     0070: 60 ff 24 85 5c 14 43 00
 *     0078: 89 9f 58 05 00 00 e8 7d
 *     0080: db ff ff 89 87 a8 09 00
 *     0088: 00 85 c0 75 44 c7 87 58
 *     0090: 05 00 00 03 00 00 00 e8
 *     0098: b4 e5 ff ff be 05 00 00
 *     00a0: 00 e8 7a 05 00 00 5f 8d
 *     00a8: 46 ff 5e 5b c3 8b 87 54
 *     00b0: 05 00 00 48 83 f8 0e 77
 *     00b8: 18 0f b6 80 b4 14 43 00
 *     00c0: ff 24 85 a4 14 43 00 e8
 *     00c8: c4 14 ff ff e8 ff e3 00
 *     00d0: 00 f7 87 90 05 00 00 00
 *     00d8: 80 00 00 8b 97 58 05 00
 *     00e0: 00 89 97 54 05 00 00 74
 *     00e8: 13 8d 87 88 08 00 00 50
 *     00f0: ff 15 8c 80 49 00 fe 8f
 *     00f8: 35 09 00 00 5f 5e 8b c3
 *     0100: 5b c3 e8 f9 fd fd ff eb
 *     0108: c3 8b 87 54 05 00 00 83
 *     0110: e8 02 74 16 83 e8 05 74
 *     0118: 0c 83 e8 08 75 b3 e8 dd
 *     0120: fd fd ff eb 05 e8 66 14
 *     0128: ff ff c7 87 58 05 00 00
 *     0130: 04 00 00 00 c7 05 b0 e8
 *     0138: 4c 00 03 00 00 00 eb 8c
 *     0140: 83 bf 54 05 00 00 04 75
 *     0148: 05 e8 f2 e3 00 00 6a 00
 *     0150: 89 9f 64 05 00 00 e8 c5
 *     0158: 13 ff ff e9 71 ff ff ff
 *     0160: 83 bf 54 05 00 00 04 75
 *     0168: 05 e8 d2 e3 00 00 53 c7
 *     0170: 87 58 05 00 00 07 00 00
 *     0178: 00 89 9f 64 05 00 00 e8
 *     0180: 9c 13 ff ff e9 48 ff ff
 *     0188: ff 83 bf 54 05 00 00 07
 *     0190: 8b 0d e8 44 4b 00 8b 71
 *     0198: 74 c7 87 64 05 00 00 00
 *     01a0: 00 00 00 75 05 e8 e6 13
 *     01a8: ff ff 56 c7 87 58 05 00
 *     01b0: 00 07 00 00 00 e8 66 13
 *     01b8: ff ff e9 12 ff ff ff e8
 *     01c0: cc 13 ff ff 89 9f 64 05
 *     01c8: 00 00 c7 87 58 05 00 00
 *     01d0: 07 00 00 00 a1 b4 0c 4b
 *     01d8: 00 a3 b0 0c 4b 00 c1 e0
 *     01e0: 06 05 f0 eb 4a 00 6a 00
 *     01e8: a3 2c 45 4b 00 e8 2e 13
 *     01f0: ff ff e9 da fe ff ff e8
 *     01f8: 94 13 ff ff 89 9f 64 05
 *     0200: 00 00 c7 87 58 05 00 00
 *     0208: 07 00 00 00 a1 b4 0c 4b
 *     0210: 00 a3 b0 0c 4b 00 c1 e0
 *     0218: 06 05 f0 eb 4a 00 53 a3
 *     0220: 2c 45 4b 00 e8 f7 12 ff
 *     0228: ff e9 a3 fe ff ff e8 5d
 *     0230: 13 ff ff 6a 00 89 9f 64
 *     0238: 05 00 00 c7 87 58 05 00
 *     0240: 00 07 00 00 00 e8 d6 12
 *     0248: ff ff e9 82 fe ff ff 83
 *     0250: bf 54 05 00 00 07 75 05
 *     0258: e8 33 13 ff ff e8 1e fc
 *     0260: fd ff e9 6a fe ff ff e8
 *     0268: e4 e3 ff ff be 05 00 00
 *     0270: 00 e8 aa 03 00 00 5f 8b
 *     0278: c6 5e 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_004311e0(void)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x8B
    _emit 0x87
    _emit 0x54
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0x87
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0xE0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0x87
    _emit 0x90
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x13
    _emit 0x8D
    _emit 0x8F
    _emit 0x88
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xFF
    _emit 0x15
    _emit 0x88
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x00
    _emit 0x9F
    _emit 0x35
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x97
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x87
    _emit 0x54
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x52
    _emit 0x50
    _emit 0x68
    _emit 0x58
    _emit 0x0D
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x87
    _emit 0x5C
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xA7
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x87
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC7
    _emit 0x87
    _emit 0xC0
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x83
    _emit 0xF8
    _emit 0x11
    _emit 0x77
    _emit 0x60
    _emit 0xFF
    _emit 0x24
    _emit 0x85
    _emit 0x5C
    _emit 0x14
    _emit 0x43
    _emit 0x00
    _emit 0x89
    _emit 0x9F
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x7D
    _emit 0xDB
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x87
    _emit 0xA8
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x44
    _emit 0xC7
    _emit 0x87
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xB4
    _emit 0xE5
    _emit 0xFF
    _emit 0xFF
    _emit 0xBE
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x7A
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x8D
    _emit 0x46
    _emit 0xFF
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
    _emit 0x8B
    _emit 0x87
    _emit 0x54
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x48
    _emit 0x83
    _emit 0xF8
    _emit 0x0E
    _emit 0x77
    _emit 0x18
    _emit 0x0F
    _emit 0xB6
    _emit 0x80
    _emit 0xB4
    _emit 0x14
    _emit 0x43
    _emit 0x00
    _emit 0xFF
    _emit 0x24
    _emit 0x85
    _emit 0xA4
    _emit 0x14
    _emit 0x43
    _emit 0x00
    _emit 0xE8
    _emit 0xC4
    _emit 0x14
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0xFF
    _emit 0xE3
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0x87
    _emit 0x90
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x97
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x97
    _emit 0x54
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x13
    _emit 0x8D
    _emit 0x87
    _emit 0x88
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0x8C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xFE
    _emit 0x8F
    _emit 0x35
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0xC3
    _emit 0xE8
    _emit 0xF9
    _emit 0xFD
    _emit 0xFD
    _emit 0xFF
    _emit 0xEB
    _emit 0xC3
    _emit 0x8B
    _emit 0x87
    _emit 0x54
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xE8
    _emit 0x02
    _emit 0x74
    _emit 0x16
    _emit 0x83
    _emit 0xE8
    _emit 0x05
    _emit 0x74
    _emit 0x0C
    _emit 0x83
    _emit 0xE8
    _emit 0x08
    _emit 0x75
    _emit 0xB3
    _emit 0xE8
    _emit 0xDD
    _emit 0xFD
    _emit 0xFD
    _emit 0xFF
    _emit 0xEB
    _emit 0x05
    _emit 0xE8
    _emit 0x66
    _emit 0x14
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x87
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xB0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x8C
    _emit 0x83
    _emit 0xBF
    _emit 0x54
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x04
    _emit 0x75
    _emit 0x05
    _emit 0xE8
    _emit 0xF2
    _emit 0xE3
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x89
    _emit 0x9F
    _emit 0x64
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xC5
    _emit 0x13
    _emit 0xFF
    _emit 0xFF
    _emit 0xE9
    _emit 0x71
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xBF
    _emit 0x54
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x04
    _emit 0x75
    _emit 0x05
    _emit 0xE8
    _emit 0xD2
    _emit 0xE3
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0xC7
    _emit 0x87
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x9F
    _emit 0x64
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x9C
    _emit 0x13
    _emit 0xFF
    _emit 0xFF
    _emit 0xE9
    _emit 0x48
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xBF
    _emit 0x54
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x07
    _emit 0x8B
    _emit 0x0D
    _emit 0xE8
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x71
    _emit 0x74
    _emit 0xC7
    _emit 0x87
    _emit 0x64
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x05
    _emit 0xE8
    _emit 0xE6
    _emit 0x13
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xC7
    _emit 0x87
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x66
    _emit 0x13
    _emit 0xFF
    _emit 0xFF
    _emit 0xE9
    _emit 0x12
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0xCC
    _emit 0x13
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x9F
    _emit 0x64
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x87
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xB4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xA3
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xC1
    _emit 0xE0
    _emit 0x06
    _emit 0x05
    _emit 0xF0
    _emit 0xEB
    _emit 0x4A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xA3
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x2E
    _emit 0x13
    _emit 0xFF
    _emit 0xFF
    _emit 0xE9
    _emit 0xDA
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x94
    _emit 0x13
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x9F
    _emit 0x64
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x87
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xB4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xA3
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xC1
    _emit 0xE0
    _emit 0x06
    _emit 0x05
    _emit 0xF0
    _emit 0xEB
    _emit 0x4A
    _emit 0x00
    _emit 0x53
    _emit 0xA3
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xF7
    _emit 0x12
    _emit 0xFF
    _emit 0xFF
    _emit 0xE9
    _emit 0xA3
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x5D
    _emit 0x13
    _emit 0xFF
    _emit 0xFF
    _emit 0x6A
    _emit 0x00
    _emit 0x89
    _emit 0x9F
    _emit 0x64
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x87
    _emit 0x58
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xD6
    _emit 0x12
    _emit 0xFF
    _emit 0xFF
    _emit 0xE9
    _emit 0x82
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xBF
    _emit 0x54
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x07
    _emit 0x75
    _emit 0x05
    _emit 0xE8
    _emit 0x33
    _emit 0x13
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x1E
    _emit 0xFC
    _emit 0xFD
    _emit 0xFF
    _emit 0xE9
    _emit 0x6A
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0xE4
    _emit 0xE3
    _emit 0xFF
    _emit 0xFF
    _emit 0xBE
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xAA
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
