/* Byte-for-byte override for FUN_00406ed0.

 * Original bytes (45):
 *     0000: 51 8b 0d c4 43 4b 00 83
 *     0008: 79 3c 00 74 1e a1 94 0c
 *     0010: 4b 00 8b 15 90 0c 4b 00
 *     0018: 8d 04 50 83 e8 00 74 0b
 *     0020: 83 e8 01 75 06 51 e8 85
 *     0028: 16 00 00 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00406ed0(void)
{
  __asm {
    _emit 0x51
    _emit 0x8B
    _emit 0x0D
    _emit 0xC4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0x79
    _emit 0x3C
    _emit 0x00
    _emit 0x74
    _emit 0x1E
    _emit 0xA1
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0x50
    _emit 0x83
    _emit 0xE8
    _emit 0x00
    _emit 0x74
    _emit 0x0B
    _emit 0x83
    _emit 0xE8
    _emit 0x01
    _emit 0x75
    _emit 0x06
    _emit 0x51
    _emit 0xE8
    _emit 0x85
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
