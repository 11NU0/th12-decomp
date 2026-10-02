/* Byte-for-byte override for FUN_00402a40.

 * Original bytes (630):
 *     0000: a1 b0 0c 4b 00 83 ec 0c
 *     0008: 55 8b 6c 24 14 57 89 85
 *     0010: d4 35 00 00 8b 44 24 1c
 *     0018: 55 89 2d c0 43 4b 00 e8
 *     0020: 8c 1a 00 00 85 c0 74 1d
 *     0028: 68 d8 f4 49 00 bf c8 0e
 *     0030: 4b 00 e8 89 18 06 00 83
 *     0038: c4 04 5f 83 c8 ff 5d 83
 *     0040: c4 0c c2 08 00 d9 ee 8d
 *     0048: 85 0c 36 00 00 d9 54 24
 *     0050: 08 53 d9 54 24 10 8b f8
 *     0058: d9 05 b8 43 4a 00 8b 54
 *     0060: 24 10 d9 5c 24 14 56 b9
 *     0068: 46 00 00 00 be 1c ed 4c
 *     0070: 00 f3 a5 8b 4c 24 10 89
 *     0078: 08 8b 4c 24 18 d9 54 24
 *     0080: 10 d9 05 b4 43 4a 00 89
 *     0088: 50 04 8b 54 24 10 d9 5c
 *     0090: 24 14 d9 05 b0 43 4a 00
 *     0098: 89 48 08 8b 44 24 14 d9
 *     00a0: 5c 24 18 8b 4c 24 18 d9
 *     00a8: 54 24 10 89 95 18 36 00
 *     00b0: 00 d9 e8 8b 54 24 10 d9
 *     00b8: 5c 24 14 89 85 1c 36 00
 *     00c0: 00 8b 44 24 14 89 8d 20
 *     00c8: 36 00 00 d9 54 24 18 8b
 *     00d0: 4c 24 18 d9 54 24 10 89
 *     00d8: 95 24 36 00 00 8b 54 24
 *     00e0: 10 d9 54 24 14 89 85 28
 *     00e8: 36 00 00 d9 5c 24 18 8b
 *     00f0: 44 24 14 d9 05 ac 43 4a
 *     00f8: 00 89 8d 2c 36 00 00 d9
 *     0100: 9d 6c 27 00 00 8b 4c 24
 *     0108: 18 89 95 48 36 00 00 89
 *     0110: 85 4c 36 00 00 6a 24 89
 *     0118: 8d 50 36 00 00 e8 88 9e
 *     0120: 06 00 33 ff 83 c4 04 3b
 *     0128: c7 74 1c 83 60 04 fe 89
 *     0130: 78 08 89 78 0c 89 78 10
 *     0138: 89 38 89 40 14 89 78 18
 *     0140: 89 78 1c 8b f0 eb 02 33
 *     0148: f6 8b 56 04 83 e2 fd 83
 *     0150: ca 01 bb 0c 00 00 00 c7
 *     0158: 46 08 c0 3e 40 00 89 7e
 *     0160: 0c 89 7e 10 89 6e 20 89
 *     0168: 56 04 e8 d1 f7 05 00 6a
 *     0170: 24 89 75 08 e8 31 9e 06
 *     0178: 00 83 c4 04 3b c7 74 1c
 *     0180: 83 60 04 fe 89 78 08 89
 *     0188: 78 0c 89 78 10 89 38 89
 *     0190: 40 14 89 78 18 89 78 1c
 *     0198: 8b f0 eb 02 33 f6 8b 46
 *     01a0: 04 83 e0 fd 83 c8 01 bb
 *     01a8: 02 00 00 00 c7 46 08 d0
 *     01b0: 3e 40 00 89 7e 0c 89 7e
 *     01b8: 10 89 6e 20 89 46 04 e8
 *     01c0: 1c f8 05 00 6a 24 89 75
 *     01c8: 0c e8 dc 9d 06 00 83 c4
 *     01d0: 04 3b c7 74 1c 83 60 04
 *     01d8: fe 89 78 08 89 78 0c 89
 *     01e0: 78 10 89 38 89 40 14 89
 *     01e8: 78 18 89 78 1c 8b f0 eb
 *     01f0: 02 33 f6 8b 4e 04 83 e1
 *     01f8: fd 83 c9 01 bb 05 00 00
 *     0200: 00 c7 46 08 e0 3e 40 00
 *     0208: 89 7e 0c 89 7e 10 89 6e
 *     0210: 20 89 4e 04 e8 c7 f7 05
 *     0218: 00 89 b5 00 36 00 00 89
 *     0220: bd d8 35 00 00 8b 45 48
 *     0228: 5e 5b a8 01 75 1c d9 ee
 *     0230: 83 c8 01 d9 5d 40 89 7d
 *     0238: 3c c7 45 38 c1 bd f0 ff
 *     0240: c7 45 44 d0 2e 4b 00 89
 *     0248: 45 48 d9 ee 89 7d 3c d9
 *     0250: 5d 40 c7 45 38 ff ff ff
 *     0258: ff 83 8d bc 35 00 00 01
 *     0260: 89 bd 94 00 00 00 89 bd
 *     0268: e0 00 00 00 5f 33 c0 5d
 *     0270: 83 c4 0c c2 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00402a40(int a0)
{
  __asm {
    _emit 0xA1
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x14
    _emit 0x57
    _emit 0x89
    _emit 0x85
    _emit 0xD4
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x55
    _emit 0x89
    _emit 0x2D
    _emit 0xC0
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x8C
    _emit 0x1A
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x1D
    _emit 0x68
    _emit 0xD8
    _emit 0xF4
    _emit 0x49
    _emit 0x00
    _emit 0xBF
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x89
    _emit 0x18
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5F
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0x8D
    _emit 0x85
    _emit 0x0C
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x53
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0xF8
    _emit 0xD9
    _emit 0x05
    _emit 0xB8
    _emit 0x43
    _emit 0x4A
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0x56
    _emit 0xB9
    _emit 0x46
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBE
    _emit 0x1C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xF3
    _emit 0xA5
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x89
    _emit 0x08
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x05
    _emit 0xB4
    _emit 0x43
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x50
    _emit 0x04
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0x05
    _emit 0xB0
    _emit 0x43
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x48
    _emit 0x08
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x18
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x89
    _emit 0x95
    _emit 0x18
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0xE8
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x85
    _emit 0x1C
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x8D
    _emit 0x20
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x18
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x89
    _emit 0x95
    _emit 0x24
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x85
    _emit 0x28
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x18
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0x05
    _emit 0xAC
    _emit 0x43
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x8D
    _emit 0x2C
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x9D
    _emit 0x6C
    _emit 0x27
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0x95
    _emit 0x48
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x85
    _emit 0x4C
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x8D
    _emit 0x50
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x88
    _emit 0x9E
    _emit 0x06
    _emit 0x00
    _emit 0x33
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x56
    _emit 0x04
    _emit 0x83
    _emit 0xE2
    _emit 0xFD
    _emit 0x83
    _emit 0xCA
    _emit 0x01
    _emit 0xBB
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xC0
    _emit 0x3E
    _emit 0x40
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0x89
    _emit 0x56
    _emit 0x04
    _emit 0xE8
    _emit 0xD1
    _emit 0xF7
    _emit 0x05
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x31
    _emit 0x9E
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x46
    _emit 0x04
    _emit 0x83
    _emit 0xE0
    _emit 0xFD
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xBB
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xD0
    _emit 0x3E
    _emit 0x40
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0xE8
    _emit 0x1C
    _emit 0xF8
    _emit 0x05
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x0C
    _emit 0xE8
    _emit 0xDC
    _emit 0x9D
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x4E
    _emit 0x04
    _emit 0x83
    _emit 0xE1
    _emit 0xFD
    _emit 0x83
    _emit 0xC9
    _emit 0x01
    _emit 0xBB
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xE0
    _emit 0x3E
    _emit 0x40
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0x89
    _emit 0x4E
    _emit 0x04
    _emit 0xE8
    _emit 0xC7
    _emit 0xF7
    _emit 0x05
    _emit 0x00
    _emit 0x89
    _emit 0xB5
    _emit 0x00
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xBD
    _emit 0xD8
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x48
    _emit 0x5E
    _emit 0x5B
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x1C
    _emit 0xD9
    _emit 0xEE
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x5D
    _emit 0x40
    _emit 0x89
    _emit 0x7D
    _emit 0x3C
    _emit 0xC7
    _emit 0x45
    _emit 0x38
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x45
    _emit 0x44
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0x48
    _emit 0xD9
    _emit 0xEE
    _emit 0x89
    _emit 0x7D
    _emit 0x3C
    _emit 0xD9
    _emit 0x5D
    _emit 0x40
    _emit 0xC7
    _emit 0x45
    _emit 0x38
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0x8D
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x89
    _emit 0xBD
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xBD
    _emit 0xE0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x33
    _emit 0xC0
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
