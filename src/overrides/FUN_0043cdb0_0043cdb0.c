/* Byte-for-byte override for FUN_0043cdb0.

 * Original bytes (79):
 *     0000: 51 53 56 57 8b 7c 24 14
 *     0008: 33 db 83 c7 f8 33 d2 33
 *     0010: f6 33 c0 83 ff 02 89 5c
 *     0018: 24 0c 7c 1e 8d 5f ff 55
 *     0020: 0f b6 6c 01 08 03 d5 0f
 *     0028: b6 6c 01 09 83 c0 02 03
 *     0030: f5 3b c3 7c eb 8b 5c 24
 *     0038: 10 5d 3b c7 7d 05 0f b6
 *     0040: 5c 08 08 5f 8d 04 16 5e
 *     0048: 03 c3 5b 59 c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __fastcall FUN_0043cdb0(void * a0, int a1)
{
  __asm {
    _emit 0x51
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x14
    _emit 0x33
    _emit 0xDB
    _emit 0x83
    _emit 0xC7
    _emit 0xF8
    _emit 0x33
    _emit 0xD2
    _emit 0x33
    _emit 0xF6
    _emit 0x33
    _emit 0xC0
    _emit 0x83
    _emit 0xFF
    _emit 0x02
    _emit 0x89
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x7C
    _emit 0x1E
    _emit 0x8D
    _emit 0x5F
    _emit 0xFF
    _emit 0x55
    _emit 0x0F
    _emit 0xB6
    _emit 0x6C
    _emit 0x01
    _emit 0x08
    _emit 0x03
    _emit 0xD5
    _emit 0x0F
    _emit 0xB6
    _emit 0x6C
    _emit 0x01
    _emit 0x09
    _emit 0x83
    _emit 0xC0
    _emit 0x02
    _emit 0x03
    _emit 0xF5
    _emit 0x3B
    _emit 0xC3
    _emit 0x7C
    _emit 0xEB
    _emit 0x8B
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0x5D
    _emit 0x3B
    _emit 0xC7
    _emit 0x7D
    _emit 0x05
    _emit 0x0F
    _emit 0xB6
    _emit 0x5C
    _emit 0x08
    _emit 0x08
    _emit 0x5F
    _emit 0x8D
    _emit 0x04
    _emit 0x16
    _emit 0x5E
    _emit 0x03
    _emit 0xC3
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
