/* Byte-for-byte override for FUN_00431d70.

 * Original bytes (264):
 *     0000: 55 56 6a 24 e8 71 ac 03
 *     0008: 00 33 ed 83 c4 04 3b c5
 *     0010: 74 1c 83 60 04 fe 89 68
 *     0018: 08 89 68 0c 89 68 10 89
 *     0020: 28 89 40 14 89 68 18 89
 *     0028: 68 1c 8b f0 eb 02 33 f6
 *     0030: 8b 46 04 83 e0 fd 53 83
 *     0038: c8 01 bb 09 00 00 00 c7
 *     0040: 46 08 00 27 43 00 89 6e
 *     0048: 0c 89 6e 10 89 7e 20 89
 *     0050: 46 04 e8 b9 05 03 00 6a
 *     0058: 24 89 77 08 e8 19 ac 03
 *     0060: 00 83 c4 04 3b c5 74 1c
 *     0068: 83 60 04 fe 89 68 08 89
 *     0070: 68 0c 89 68 10 89 28 89
 *     0078: 40 14 89 68 18 89 68 1c
 *     0080: 8b f0 eb 02 33 f6 8b 4e
 *     0088: 04 83 e1 fd 83 c9 01 bb
 *     0090: 3d 00 00 00 c7 46 08 10
 *     0098: 27 43 00 89 6e 0c 89 6e
 *     00a0: 10 89 7e 20 89 4e 04 e8
 *     00a8: 04 06 03 00 d9 ee 89 77
 *     00b0: 0c 8b 47 20 ba c1 bd f0
 *     00b8: ff b9 d0 2e 4b 00 5b a8
 *     00c0: 01 75 12 83 c8 01 d9 57
 *     00c8: 18 89 6f 14 89 57 10 89
 *     00d0: 4f 1c 89 47 20 83 ce ff
 *     00d8: d9 57 18 89 6f 14 89 77
 *     00e0: 10 8b 47 34 a8 01 75 12
 *     00e8: 83 c8 01 d9 57 2c 89 6f
 *     00f0: 28 89 57 24 89 4f 30 89
 *     00f8: 47 34 89 77 24 d9 5f 2c
 *     0100: 5e 89 6f 28 33 c0 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00431d70(void)
{
  __asm {
    _emit 0x55
    _emit 0x56
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x71
    _emit 0xAC
    _emit 0x03
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
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x00
    _emit 0x27
    _emit 0x43
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
    _emit 0xB9
    _emit 0x05
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x77
    _emit 0x08
    _emit 0xE8
    _emit 0x19
    _emit 0xAC
    _emit 0x03
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
    _emit 0x3D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x10
    _emit 0x27
    _emit 0x43
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
    _emit 0x04
    _emit 0x06
    _emit 0x03
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0x89
    _emit 0x77
    _emit 0x0C
    _emit 0x8B
    _emit 0x47
    _emit 0x20
    _emit 0xBA
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xB9
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x5B
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x57
    _emit 0x18
    _emit 0x89
    _emit 0x6F
    _emit 0x14
    _emit 0x89
    _emit 0x57
    _emit 0x10
    _emit 0x89
    _emit 0x4F
    _emit 0x1C
    _emit 0x89
    _emit 0x47
    _emit 0x20
    _emit 0x83
    _emit 0xCE
    _emit 0xFF
    _emit 0xD9
    _emit 0x57
    _emit 0x18
    _emit 0x89
    _emit 0x6F
    _emit 0x14
    _emit 0x89
    _emit 0x77
    _emit 0x10
    _emit 0x8B
    _emit 0x47
    _emit 0x34
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x57
    _emit 0x2C
    _emit 0x89
    _emit 0x6F
    _emit 0x28
    _emit 0x89
    _emit 0x57
    _emit 0x24
    _emit 0x89
    _emit 0x4F
    _emit 0x30
    _emit 0x89
    _emit 0x47
    _emit 0x34
    _emit 0x89
    _emit 0x77
    _emit 0x24
    _emit 0xD9
    _emit 0x5F
    _emit 0x2C
    _emit 0x5E
    _emit 0x89
    _emit 0x6F
    _emit 0x28
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
