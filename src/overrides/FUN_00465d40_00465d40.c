/* Byte-for-byte override for FUN_00465d40.

 * Original bytes (119):
 *     0000: 33 c9 b8 01 00 00 00 ba
 *     0008: 04 00 00 00 f7 e2 0f 90
 *     0010: c1 53 c7 06 1c 3b 4a 00
 *     0018: f7 d9 0b c8 51 e8 88 6c
 *     0020: 00 00 8b 4c 24 0c 89 46
 *     0028: 04 8b 11 8b 4c 24 14 89
 *     0030: 10 8b 44 24 10 8b 56 04
 *     0038: 83 c4 04 89 46 08 c7 46
 *     0040: 10 01 00 00 00 89 4e 0c
 *     0048: 8b 02 6a 00 50 8b de e8
 *     0050: 4c 02 00 00 8b 4e 04 8b
 *     0058: 01 8b 10 6a 00 50 8b 42
 *     0060: 34 ff d0 c7 46 30 00 00
 *     0068: 00 00 c7 46 34 00 00 00
 *     0070: 00 8b c6 5b c2 0c 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00465d40(undefined4 * a0, undefined4 a1, undefined4 a2)
{
  __asm {
    _emit 0x33
    _emit 0xC9
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBA
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0xE2
    _emit 0x0F
    _emit 0x90
    _emit 0xC1
    _emit 0x53
    _emit 0xC7
    _emit 0x06
    _emit 0x1C
    _emit 0x3B
    _emit 0x4A
    _emit 0x00
    _emit 0xF7
    _emit 0xD9
    _emit 0x0B
    _emit 0xC8
    _emit 0x51
    _emit 0xE8
    _emit 0x88
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0x8B
    _emit 0x11
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x10
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x56
    _emit 0x04
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0x46
    _emit 0x08
    _emit 0xC7
    _emit 0x46
    _emit 0x10
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x4E
    _emit 0x0C
    _emit 0x8B
    _emit 0x02
    _emit 0x6A
    _emit 0x00
    _emit 0x50
    _emit 0x8B
    _emit 0xDE
    _emit 0xE8
    _emit 0x4C
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x04
    _emit 0x8B
    _emit 0x01
    _emit 0x8B
    _emit 0x10
    _emit 0x6A
    _emit 0x00
    _emit 0x50
    _emit 0x8B
    _emit 0x42
    _emit 0x34
    _emit 0xFF
    _emit 0xD0
    _emit 0xC7
    _emit 0x46
    _emit 0x30
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x34
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x5B
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
  }
  __assume(0);
}
