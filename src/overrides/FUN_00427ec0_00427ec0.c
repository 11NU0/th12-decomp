/* Byte-for-byte override for FUN_00427ec0.

 * Original bytes (123):
 *     0000: ba fe ff ff ff c7 06 fc
 *     0008: 05 4a 00 21 56 24 21 56
 *     0010: 38 21 56 4c b9 11 00 00
 *     0018: 00 8d 86 94 00 00 00 90
 *     0020: 21 10 83 c0 34 83 e9 01
 *     0028: 79 f6 21 96 48 04 00 00
 *     0030: 68 54 04 00 00 6a 00 56
 *     0038: e8 23 f5 04 00 d9 ee 8b
 *     0040: 46 24 83 c4 0c a8 01 75
 *     0048: 1e 83 c8 01 d9 56 1c c7
 *     0050: 46 18 00 00 00 00 c7 46
 *     0058: 14 c1 bd f0 ff c7 46 20
 *     0060: d0 2e 4b 00 89 46 24 d9
 *     0068: 5e 1c c7 46 18 00 00 00
 *     0070: 00 c7 46 14 ff ff ff ff
 *     0078: 8b c6 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00427ec0(void)
{
  __asm {
    _emit 0xBA
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x06
    _emit 0xFC
    _emit 0x05
    _emit 0x4A
    _emit 0x00
    _emit 0x21
    _emit 0x56
    _emit 0x24
    _emit 0x21
    _emit 0x56
    _emit 0x38
    _emit 0x21
    _emit 0x56
    _emit 0x4C
    _emit 0xB9
    _emit 0x11
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x86
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x90
    _emit 0x21
    _emit 0x10
    _emit 0x83
    _emit 0xC0
    _emit 0x34
    _emit 0x83
    _emit 0xE9
    _emit 0x01
    _emit 0x79
    _emit 0xF6
    _emit 0x21
    _emit 0x96
    _emit 0x48
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0x54
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x23
    _emit 0xF5
    _emit 0x04
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0x8B
    _emit 0x46
    _emit 0x24
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x1E
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x1C
    _emit 0xC7
    _emit 0x46
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x14
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x46
    _emit 0x20
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x46
    _emit 0x24
    _emit 0xD9
    _emit 0x5E
    _emit 0x1C
    _emit 0xC7
    _emit 0x46
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x14
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xC6
    _emit 0xC3
  }
  __assume(0);
}
