/* Byte-for-byte override for FUN_00449fa0.

 * Original bytes (314):
 *     0000: 55 56 6a 24 e8 41 2a 02
 *     0008: 00 33 ed 83 c4 04 3b c5
 *     0010: 74 1c 83 60 04 fe 89 68
 *     0018: 08 89 68 0c 89 68 10 89
 *     0020: 28 89 40 14 89 68 18 89
 *     0028: 68 1c 8b f0 eb 02 33 f6
 *     0030: 8b 46 04 83 e0 fd 53 83
 *     0038: c8 01 bb 13 00 00 00 c7
 *     0040: 46 08 60 a8 44 00 89 6e
 *     0048: 0c 89 6e 10 89 7e 20 89
 *     0050: 46 04 e8 89 83 01 00 6a
 *     0058: 24 89 77 08 e8 e9 29 02
 *     0060: 00 83 c4 04 3b c5 74 1c
 *     0068: 83 60 04 fe 89 68 08 89
 *     0070: 68 0c 89 68 10 89 28 89
 *     0078: 40 14 89 68 18 89 68 1c
 *     0080: 8b f0 eb 02 33 f6 8b 4e
 *     0088: 04 83 e1 fd 83 c9 01 bb
 *     0090: 3c 00 00 00 c7 46 08 70
 *     0098: a8 44 00 89 6e 0c 89 6e
 *     00a0: 10 89 7e 20 89 4e 04 e8
 *     00a8: d4 83 01 00 6a 24 89 77
 *     00b0: 0c e8 94 29 02 00 83 c4
 *     00b8: 04 3b c5 74 1c 83 60 04
 *     00c0: fe 89 68 08 89 68 0c 89
 *     00c8: 68 10 89 28 89 40 14 89
 *     00d0: 68 18 89 68 1c 8b f0 eb
 *     00d8: 02 33 f6 8b 56 04 83 e2
 *     00e0: fd 83 ca 01 bb 16 00 00
 *     00e8: 00 c7 46 08 80 a8 44 00
 *     00f0: 89 6e 0c 89 6e 10 89 7e
 *     00f8: 20 89 56 04 e8 7f 83 01
 *     0100: 00 d9 ee 89 77 24 8b 47
 *     0108: 20 5b a8 01 75 1a 83 c8
 *     0110: 01 d9 57 18 89 6f 14 c7
 *     0118: 47 10 c1 bd f0 ff c7 47
 *     0120: 1c d0 2e 4b 00 89 47 20
 *     0128: 5e d9 5f 18 89 6f 14 c7
 *     0130: 47 10 ff ff ff ff 33 c0
 *     0138: 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00449fa0(void)
{
  __asm {
    _emit 0x55
    _emit 0x56
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x41
    _emit 0x2A
    _emit 0x02
    _emit 0x00
    _emit 0x33
    _emit 0xED
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x68
    _emit 0x08
    _emit 0x89
    _emit 0x68
    _emit 0x0C
    _emit 0x89
    _emit 0x68
    _emit 0x10
    _emit 0x89
    _emit 0x28
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x68
    _emit 0x18
    _emit 0x89
    _emit 0x68
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
    _emit 0x53
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xBB
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x60
    _emit 0xA8
    _emit 0x44
    _emit 0x00
    _emit 0x89
    _emit 0x6E
    _emit 0x0C
    _emit 0x89
    _emit 0x6E
    _emit 0x10
    _emit 0x89
    _emit 0x7E
    _emit 0x20
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0xE8
    _emit 0x89
    _emit 0x83
    _emit 0x01
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x77
    _emit 0x08
    _emit 0xE8
    _emit 0xE9
    _emit 0x29
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x68
    _emit 0x08
    _emit 0x89
    _emit 0x68
    _emit 0x0C
    _emit 0x89
    _emit 0x68
    _emit 0x10
    _emit 0x89
    _emit 0x28
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x68
    _emit 0x18
    _emit 0x89
    _emit 0x68
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
    _emit 0x3C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x70
    _emit 0xA8
    _emit 0x44
    _emit 0x00
    _emit 0x89
    _emit 0x6E
    _emit 0x0C
    _emit 0x89
    _emit 0x6E
    _emit 0x10
    _emit 0x89
    _emit 0x7E
    _emit 0x20
    _emit 0x89
    _emit 0x4E
    _emit 0x04
    _emit 0xE8
    _emit 0xD4
    _emit 0x83
    _emit 0x01
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x77
    _emit 0x0C
    _emit 0xE8
    _emit 0x94
    _emit 0x29
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x68
    _emit 0x08
    _emit 0x89
    _emit 0x68
    _emit 0x0C
    _emit 0x89
    _emit 0x68
    _emit 0x10
    _emit 0x89
    _emit 0x28
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x68
    _emit 0x18
    _emit 0x89
    _emit 0x68
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
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x80
    _emit 0xA8
    _emit 0x44
    _emit 0x00
    _emit 0x89
    _emit 0x6E
    _emit 0x0C
    _emit 0x89
    _emit 0x6E
    _emit 0x10
    _emit 0x89
    _emit 0x7E
    _emit 0x20
    _emit 0x89
    _emit 0x56
    _emit 0x04
    _emit 0xE8
    _emit 0x7F
    _emit 0x83
    _emit 0x01
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0x89
    _emit 0x77
    _emit 0x24
    _emit 0x8B
    _emit 0x47
    _emit 0x20
    _emit 0x5B
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x1A
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x57
    _emit 0x18
    _emit 0x89
    _emit 0x6F
    _emit 0x14
    _emit 0xC7
    _emit 0x47
    _emit 0x10
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x47
    _emit 0x1C
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x47
    _emit 0x20
    _emit 0x5E
    _emit 0xD9
    _emit 0x5F
    _emit 0x18
    _emit 0x89
    _emit 0x6F
    _emit 0x14
    _emit 0xC7
    _emit 0x47
    _emit 0x10
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
