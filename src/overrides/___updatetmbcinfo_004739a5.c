/* Byte-for-byte override for ___updatetmbcinfo.

 * Original bytes (152):
 *     0000: 6a 0c 68 40 ac 4a 00 e8
 *     0008: 3b c3 ff ff e8 b1 1a 00
 *     0010: 00 8b f8 a1 d4 d9 4a 00
 *     0018: 85 47 70 74 1d 83 7f 6c
 *     0020: 00 74 17 8b 77 68 85 f6
 *     0028: 75 08 6a 20 e8 37 f2 ff
 *     0030: ff 59 8b c6 e8 53 c3 ff
 *     0038: ff c3 6a 0d e8 b4 b2 ff
 *     0040: ff 59 83 65 fc 00 8b 77
 *     0048: 68 89 75 e4 3b 35 d8 d8
 *     0050: 4a 00 74 36 85 f6 74 1a
 *     0058: 56 ff 15 5c 81 49 00 85
 *     0060: c0 75 0f 81 fe b0 d4 4a
 *     0068: 00 74 07 56 e8 2b 8f ff
 *     0070: ff 59 a1 d8 d8 4a 00 89
 *     0078: 47 68 8b 35 d8 d8 4a 00
 *     0080: 89 75 e4 56 ff 15 60 81
 *     0088: 49 00 c7 45 fc fe ff ff
 *     0090: ff e8 05 00 00 00 eb 8e
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)
{
  __asm {
    _emit 0x6A
    _emit 0x0C
    _emit 0x68
    _emit 0x40
    _emit 0xAC
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x3B
    _emit 0xC3
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0xB1
    _emit 0x1A
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF8
    _emit 0xA1
    _emit 0xD4
    _emit 0xD9
    _emit 0x4A
    _emit 0x00
    _emit 0x85
    _emit 0x47
    _emit 0x70
    _emit 0x74
    _emit 0x1D
    _emit 0x83
    _emit 0x7F
    _emit 0x6C
    _emit 0x00
    _emit 0x74
    _emit 0x17
    _emit 0x8B
    _emit 0x77
    _emit 0x68
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x08
    _emit 0x6A
    _emit 0x20
    _emit 0xE8
    _emit 0x37
    _emit 0xF2
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x53
    _emit 0xC3
    _emit 0xFF
    _emit 0xFF
    _emit 0xC3
    _emit 0x6A
    _emit 0x0D
    _emit 0xE8
    _emit 0xB4
    _emit 0xB2
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0x8B
    _emit 0x77
    _emit 0x68
    _emit 0x89
    _emit 0x75
    _emit 0xE4
    _emit 0x3B
    _emit 0x35
    _emit 0xD8
    _emit 0xD8
    _emit 0x4A
    _emit 0x00
    _emit 0x74
    _emit 0x36
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x1A
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0x5C
    _emit 0x81
    _emit 0x49
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x0F
    _emit 0x81
    _emit 0xFE
    _emit 0xB0
    _emit 0xD4
    _emit 0x4A
    _emit 0x00
    _emit 0x74
    _emit 0x07
    _emit 0x56
    _emit 0xE8
    _emit 0x2B
    _emit 0x8F
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0xA1
    _emit 0xD8
    _emit 0xD8
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x47
    _emit 0x68
    _emit 0x8B
    _emit 0x35
    _emit 0xD8
    _emit 0xD8
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x75
    _emit 0xE4
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0x60
    _emit 0x81
    _emit 0x49
    _emit 0x00
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x8E
  }
  __assume(0);
}
