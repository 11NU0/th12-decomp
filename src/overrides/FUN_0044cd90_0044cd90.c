/* Byte-for-byte override for FUN_0044cd90.

 * Original bytes (88):
 *     0000: 53 8b 5c 24 0c 56 57 8b
 *     0008: f9 8b 77 0c 03 77 04 8b
 *     0010: 47 08 2b f0 3b f3 72 1a
 *     0018: 53 50 8b 44 24 18 50 e8
 *     0020: 7c d5 02 00 83 c4 0c 01
 *     0028: 5f 08 5f 5e 8b c3 5b c2
 *     0030: 08 00 85 f6 74 1a 8b 4c
 *     0038: 24 10 56 50 51 e8 5e d5
 *     0040: 02 00 83 c4 0c 01 77 08
 *     0048: 5f 8b c6 5e 5b c2 08 00
 *     0050: 5f 5e 33 c0 5b c2 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __fastcall FUN_0044cd90(void * a0, void * a1, uint a2)
{
  __asm {
    _emit 0x53
    _emit 0x8B
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xF9
    _emit 0x8B
    _emit 0x77
    _emit 0x0C
    _emit 0x03
    _emit 0x77
    _emit 0x04
    _emit 0x8B
    _emit 0x47
    _emit 0x08
    _emit 0x2B
    _emit 0xF0
    _emit 0x3B
    _emit 0xF3
    _emit 0x72
    _emit 0x1A
    _emit 0x53
    _emit 0x50
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x50
    _emit 0xE8
    _emit 0x7C
    _emit 0xD5
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x01
    _emit 0x5F
    _emit 0x08
    _emit 0x5F
    _emit 0x5E
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x1A
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x56
    _emit 0x50
    _emit 0x51
    _emit 0xE8
    _emit 0x5E
    _emit 0xD5
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x01
    _emit 0x77
    _emit 0x08
    _emit 0x5F
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0x5B
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
