/* Byte-for-byte override for FUN_0043db40.

 * Original bytes (230):
 *     0000: 53 55 56 57 8b f8 a1 b8
 *     0008: 43 4b 00 8b 88 b4 8f 01
 *     0010: 00 6a 24 89 4f 10 e8 8f
 *     0018: ee 02 00 33 ed 83 c4 04
 *     0020: 3b c5 74 1c 83 60 04 fe
 *     0028: 89 68 08 89 68 0c 89 68
 *     0030: 10 89 28 89 40 14 89 68
 *     0038: 18 89 68 1c 8b f0 eb 02
 *     0040: 33 f6 8b 56 04 83 e2 fd
 *     0048: 83 ca 01 bb 0f 00 00 00
 *     0050: c7 46 08 30 e2 43 00 89
 *     0058: 6e 0c 89 6e 10 89 7e 20
 *     0060: 89 56 04 e8 d8 47 02 00
 *     0068: 6a 24 89 77 08 e8 38 ee
 *     0070: 02 00 83 c4 04 3b c5 74
 *     0078: 1c 83 60 04 fe 89 68 08
 *     0080: 89 68 0c 89 68 10 89 28
 *     0088: 89 40 14 89 68 18 89 68
 *     0090: 1c 8b f0 eb 02 33 f6 8b
 *     0098: 46 04 83 e0 fd 83 c8 01
 *     00a0: bb 2b 00 00 00 c7 46 08
 *     00a8: 40 e2 43 00 89 6e 0c 89
 *     00b0: 6e 10 89 7e 20 89 46 04
 *     00b8: e8 23 48 02 00 89 77 0c
 *     00c0: 8d 77 18 8b 7f 10 e8 15
 *     00c8: 49 fc ff b9 c4 00 00 00
 *     00d0: 8b c6 8b d7 89 be f8 03
 *     00d8: 00 00 e8 61 6f 01 00 5f
 *     00e0: 5e 5d 33 c0 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0043db40(void)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0xA1
    _emit 0xB8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x88
    _emit 0xB4
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x4F
    _emit 0x10
    _emit 0xE8
    _emit 0x8F
    _emit 0xEE
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
    _emit 0x56
    _emit 0x04
    _emit 0x83
    _emit 0xE2
    _emit 0xFD
    _emit 0x83
    _emit 0xCA
    _emit 0x01
    _emit 0xBB
    _emit 0x0F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x30
    _emit 0xE2
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
    _emit 0x56
    _emit 0x04
    _emit 0xE8
    _emit 0xD8
    _emit 0x47
    _emit 0x02
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x77
    _emit 0x08
    _emit 0xE8
    _emit 0x38
    _emit 0xEE
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
    _emit 0x46
    _emit 0x04
    _emit 0x83
    _emit 0xE0
    _emit 0xFD
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xBB
    _emit 0x2B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x40
    _emit 0xE2
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
    _emit 0x23
    _emit 0x48
    _emit 0x02
    _emit 0x00
    _emit 0x89
    _emit 0x77
    _emit 0x0C
    _emit 0x8D
    _emit 0x77
    _emit 0x18
    _emit 0x8B
    _emit 0x7F
    _emit 0x10
    _emit 0xE8
    _emit 0x15
    _emit 0x49
    _emit 0xFC
    _emit 0xFF
    _emit 0xB9
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x8B
    _emit 0xD7
    _emit 0x89
    _emit 0xBE
    _emit 0xF8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x61
    _emit 0x6F
    _emit 0x01
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
