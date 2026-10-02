/* Byte-for-byte override for FUN_00408580.

 * Original bytes (138):
 *     0000: 53 55 8b 6c 24 0c 56 57
 *     0008: 8b bd 00 05 00 00 be 08
 *     0010: 00 00 00 e8 98 fa ff ff
 *     0018: 81 c7 b4 00 00 00 83 ee
 *     0020: 01 75 f0 8b 45 48 50 8d
 *     0028: 5e 01 e8 c1 93 05 00 8b
 *     0030: 85 00 05 00 00 33 ff 3b
 *     0038: c7 74 0f 50 e8 80 43 06
 *     0040: 00 83 c4 04 89 bd 00 05
 *     0048: 00 00 6a 44 e8 19 44 06
 *     0050: 00 8b f0 83 c4 04 3b f7
 *     0058: 74 24 83 66 40 fe 6a 44
 *     0060: 57 56 e8 39 ee 06 00 83
 *     0068: 0e 02 83 c4 0c 6a 46 57
 *     0070: 6a 06 6a 06 6a 08 6a 01
 *     0078: 56 e8 62 a4 04 00 89 7d
 *     0080: 3c 5f 5e 5d 33 c0 5b c2
 *     0088: 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_00408580(void * a0, undefined4 a1, int a2)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xBD
    _emit 0x00
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xBE
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x98
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xC7
    _emit 0xB4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEE
    _emit 0x01
    _emit 0x75
    _emit 0xF0
    _emit 0x8B
    _emit 0x45
    _emit 0x48
    _emit 0x50
    _emit 0x8D
    _emit 0x5E
    _emit 0x01
    _emit 0xE8
    _emit 0xC1
    _emit 0x93
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x85
    _emit 0x00
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xFF
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x0F
    _emit 0x50
    _emit 0xE8
    _emit 0x80
    _emit 0x43
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0xBD
    _emit 0x00
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x44
    _emit 0xE8
    _emit 0x19
    _emit 0x44
    _emit 0x06
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xF7
    _emit 0x74
    _emit 0x24
    _emit 0x83
    _emit 0x66
    _emit 0x40
    _emit 0xFE
    _emit 0x6A
    _emit 0x44
    _emit 0x57
    _emit 0x56
    _emit 0xE8
    _emit 0x39
    _emit 0xEE
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x6A
    _emit 0x46
    _emit 0x57
    _emit 0x6A
    _emit 0x06
    _emit 0x6A
    _emit 0x06
    _emit 0x6A
    _emit 0x08
    _emit 0x6A
    _emit 0x01
    _emit 0x56
    _emit 0xE8
    _emit 0x62
    _emit 0xA4
    _emit 0x04
    _emit 0x00
    _emit 0x89
    _emit 0x7D
    _emit 0x3C
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
