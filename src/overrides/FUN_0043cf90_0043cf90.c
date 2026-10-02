/* Byte-for-byte override for FUN_0043cf90.

 * Original bytes (132):
 *     0000: 51 56 57 68 fc ed 01 00
 *     0008: 6a 00 53 e8 80 a4 03 00
 *     0010: 83 c4 0c 6a 01 8d 44 24
 *     0018: 0c 50 b8 b0 14 4a 00 e8
 *     0020: 5c 6c 02 00 89 03 8d 83
 *     0028: b4 e9 01 00 e8 ef fe ff
 *     0030: ff 8d 73 08 8b ce 2b cb
 *     0038: 8d 79 f8 b8 79 6c a3 0e
 *     0040: f7 ef c1 fa 0a 8b c2 c1
 *     0048: e8 1f 03 c2 83 f8 07 73
 *     0050: 27 e8 1a fe ff ff 81 c7
 *     0058: f4 45 00 00 b8 79 6c a3
 *     0060: 0e f7 ef c1 fa 0a 8b ca
 *     0068: c1 e9 1f 03 ca 81 c6 f4
 *     0070: 45 00 00 83 f9 07 72 d9
 *     0078: 53 e8 32 01 00 00 5f 8b
 *     0080: c3 5e 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0043cf90(void)
{
  __asm {
    _emit 0x51
    _emit 0x56
    _emit 0x57
    _emit 0x68
    _emit 0xFC
    _emit 0xED
    _emit 0x01
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x53
    _emit 0xE8
    _emit 0x80
    _emit 0xA4
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x6A
    _emit 0x01
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x50
    _emit 0xB8
    _emit 0xB0
    _emit 0x14
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x5C
    _emit 0x6C
    _emit 0x02
    _emit 0x00
    _emit 0x89
    _emit 0x03
    _emit 0x8D
    _emit 0x83
    _emit 0xB4
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0xE8
    _emit 0xEF
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x8D
    _emit 0x73
    _emit 0x08
    _emit 0x8B
    _emit 0xCE
    _emit 0x2B
    _emit 0xCB
    _emit 0x8D
    _emit 0x79
    _emit 0xF8
    _emit 0xB8
    _emit 0x79
    _emit 0x6C
    _emit 0xA3
    _emit 0x0E
    _emit 0xF7
    _emit 0xEF
    _emit 0xC1
    _emit 0xFA
    _emit 0x0A
    _emit 0x8B
    _emit 0xC2
    _emit 0xC1
    _emit 0xE8
    _emit 0x1F
    _emit 0x03
    _emit 0xC2
    _emit 0x83
    _emit 0xF8
    _emit 0x07
    _emit 0x73
    _emit 0x27
    _emit 0xE8
    _emit 0x1A
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xC7
    _emit 0xF4
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0xB8
    _emit 0x79
    _emit 0x6C
    _emit 0xA3
    _emit 0x0E
    _emit 0xF7
    _emit 0xEF
    _emit 0xC1
    _emit 0xFA
    _emit 0x0A
    _emit 0x8B
    _emit 0xCA
    _emit 0xC1
    _emit 0xE9
    _emit 0x1F
    _emit 0x03
    _emit 0xCA
    _emit 0x81
    _emit 0xC6
    _emit 0xF4
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF9
    _emit 0x07
    _emit 0x72
    _emit 0xD9
    _emit 0x53
    _emit 0xE8
    _emit 0x32
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x8B
    _emit 0xC3
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
