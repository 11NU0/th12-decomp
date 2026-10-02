/* Byte-for-byte override for FUN_004548a0.

 * Original bytes (177):
 *     0000: 83 ec 20 53 8b 1d 54 82
 *     0008: 49 00 55 8b 2d 1c 82 49
 *     0010: 00 56 c7 44 24 0c 00 00
 *     0018: 00 00 be 01 00 00 00 90
 *     0020: 68 bf 04 00 00 6a ff 6a
 *     0028: 00 68 58 47 4d 00 56 ff
 *     0030: d5 8b 0d 54 47 4d 00 85
 *     0038: c9 75 04 89 74 24 0c 83
 *     0040: e8 00 74 32 2b c6 75 53
 *     0048: 56 50 50 50 8d 44 24 20
 *     0050: 50 ff d3 85 c0 74 44 83
 *     0058: 7c 24 14 12 75 04 89 74
 *     0060: 24 0c 56 6a 00 6a 00 6a
 *     0068: 00 8d 4c 24 20 51 ff d3
 *     0070: 85 c0 75 e3 eb 25 85 c9
 *     0078: 74 21 83 79 30 00 74 1b
 *     0080: 89 71 78 8b 15 54 47 4d
 *     0088: 00 52 e8 a1 1e 01 00 a1
 *     0090: 54 47 4d 00 c7 40 78 00
 *     0098: 00 00 00 83 7c 24 0c 00
 *     00a0: 0f 84 7a ff ff ff 5e 5d
 *     00a8: 33 c0 5b 83 c4 20 c2 04
 *     00b0: 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_004548a0(void)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x20
    _emit 0x53
    _emit 0x8B
    _emit 0x1D
    _emit 0x54
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x55
    _emit 0x8B
    _emit 0x2D
    _emit 0x1C
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x56
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBE
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x90
    _emit 0x68
    _emit 0xBF
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0xFF
    _emit 0x6A
    _emit 0x00
    _emit 0x68
    _emit 0x58
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x56
    _emit 0xFF
    _emit 0xD5
    _emit 0x8B
    _emit 0x0D
    _emit 0x54
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x85
    _emit 0xC9
    _emit 0x75
    _emit 0x04
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0x83
    _emit 0xE8
    _emit 0x00
    _emit 0x74
    _emit 0x32
    _emit 0x2B
    _emit 0xC6
    _emit 0x75
    _emit 0x53
    _emit 0x56
    _emit 0x50
    _emit 0x50
    _emit 0x50
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0x50
    _emit 0xFF
    _emit 0xD3
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x44
    _emit 0x83
    _emit 0x7C
    _emit 0x24
    _emit 0x14
    _emit 0x12
    _emit 0x75
    _emit 0x04
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0x56
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x20
    _emit 0x51
    _emit 0xFF
    _emit 0xD3
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xE3
    _emit 0xEB
    _emit 0x25
    _emit 0x85
    _emit 0xC9
    _emit 0x74
    _emit 0x21
    _emit 0x83
    _emit 0x79
    _emit 0x30
    _emit 0x00
    _emit 0x74
    _emit 0x1B
    _emit 0x89
    _emit 0x71
    _emit 0x78
    _emit 0x8B
    _emit 0x15
    _emit 0x54
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x52
    _emit 0xE8
    _emit 0xA1
    _emit 0x1E
    _emit 0x01
    _emit 0x00
    _emit 0xA1
    _emit 0x54
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0xC7
    _emit 0x40
    _emit 0x78
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x7C
    _emit 0x24
    _emit 0x0C
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x7A
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x5E
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x20
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
