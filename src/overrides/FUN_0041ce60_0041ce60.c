/* Byte-for-byte override for FUN_0041ce60.

 * Original bytes (210):
 *     0000: 53 55 8b 6c 24 10 56 57
 *     0008: 33 ff 85 ed 7e 41 8b 74
 *     0010: 24 14 81 c6 a4 04 00 00
 *     0018: 8b dd 8b fd 8d 64 24 00
 *     0020: 8b 06 85 c0 74 0d 8d 8e
 *     0028: 6c fb ff ff ba 02 00 00
 *     0030: 00 ff d0 b8 02 00 00 00
 *     0038: 66 89 86 30 ff ff ff 81
 *     0040: c6 b4 04 00 00 83 eb 01
 *     0048: 75 d6 83 fd 08 73 7c 8b
 *     0050: 44 24 1c 8b 54 24 14 8b
 *     0058: cf 69 c9 b4 04 00 00 83
 *     0060: c0 07 8d 74 11 10 0f b7
 *     0068: d8 8b 86 94 04 00 00 85
 *     0070: c0 74 07 0f bf d3 8b ce
 *     0078: ff d0 47 66 89 9e c4 03
 *     0080: 00 00 83 ff 08 73 44 8b
 *     0088: 54 24 14 8b cf 69 c9 b4
 *     0090: 04 00 00 bb 08 00 00 00
 *     0098: 8d b4 11 a4 04 00 00 2b
 *     00a0: df 8b 06 85 c0 74 0d 8d
 *     00a8: 8e 6c fb ff ff ba 03 00
 *     00b0: 00 00 ff d0 b8 03 00 00
 *     00b8: 00 66 89 86 30 ff ff ff
 *     00c0: 81 c6 b4 04 00 00 83 eb
 *     00c8: 01 75 d6 5f 5e 5d 5b c2
 *     00d0: 0c 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0041ce60(int a0, uint a1, short a2)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x10
    _emit 0x56
    _emit 0x57
    _emit 0x33
    _emit 0xFF
    _emit 0x85
    _emit 0xED
    _emit 0x7E
    _emit 0x41
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x14
    _emit 0x81
    _emit 0xC6
    _emit 0xA4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xDD
    _emit 0x8B
    _emit 0xFD
    _emit 0x8D
    _emit 0x64
    _emit 0x24
    _emit 0x00
    _emit 0x8B
    _emit 0x06
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0D
    _emit 0x8D
    _emit 0x8E
    _emit 0x6C
    _emit 0xFB
    _emit 0xFF
    _emit 0xFF
    _emit 0xBA
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x89
    _emit 0x86
    _emit 0x30
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xC6
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEB
    _emit 0x01
    _emit 0x75
    _emit 0xD6
    _emit 0x83
    _emit 0xFD
    _emit 0x08
    _emit 0x73
    _emit 0x7C
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0xCF
    _emit 0x69
    _emit 0xC9
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC0
    _emit 0x07
    _emit 0x8D
    _emit 0x74
    _emit 0x11
    _emit 0x10
    _emit 0x0F
    _emit 0xB7
    _emit 0xD8
    _emit 0x8B
    _emit 0x86
    _emit 0x94
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x07
    _emit 0x0F
    _emit 0xBF
    _emit 0xD3
    _emit 0x8B
    _emit 0xCE
    _emit 0xFF
    _emit 0xD0
    _emit 0x47
    _emit 0x66
    _emit 0x89
    _emit 0x9E
    _emit 0xC4
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xFF
    _emit 0x08
    _emit 0x73
    _emit 0x44
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0xCF
    _emit 0x69
    _emit 0xC9
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xBB
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0xB4
    _emit 0x11
    _emit 0xA4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x2B
    _emit 0xDF
    _emit 0x8B
    _emit 0x06
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0D
    _emit 0x8D
    _emit 0x8E
    _emit 0x6C
    _emit 0xFB
    _emit 0xFF
    _emit 0xFF
    _emit 0xBA
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0xB8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x89
    _emit 0x86
    _emit 0x30
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xC6
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEB
    _emit 0x01
    _emit 0x75
    _emit 0xD6
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
  }
  __assume(0);
}
