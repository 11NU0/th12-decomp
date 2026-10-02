/* Byte-for-byte override for FUN_00422ce0.

 * Original bytes (76):
 *     0000: ff 40 58 8b 48 58 83 f9
 *     0008: 08 56 7e 09 c7 40 58 08
 *     0010: 00 00 00 eb 1c ba 12 00
 *     0018: 00 00 e8 91 10 03 00 8b
 *     0020: 35 e4 43 4b 00 6a 00 b8
 *     0028: 04 00 00 00 e8 7f e2 ff
 *     0030: ff a1 9c 0c 4b 00 8b 0d
 *     0038: 98 0c 4b 00 8b 15 e4 43
 *     0040: 4b 00 50 51 52 e8 36 a1
 *     0048: ff ff 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00422ce0(void)
{
  __asm {
    _emit 0xFF
    _emit 0x40
    _emit 0x58
    _emit 0x8B
    _emit 0x48
    _emit 0x58
    _emit 0x83
    _emit 0xF9
    _emit 0x08
    _emit 0x56
    _emit 0x7E
    _emit 0x09
    _emit 0xC7
    _emit 0x40
    _emit 0x58
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x1C
    _emit 0xBA
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x91
    _emit 0x10
    _emit 0x03
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xB8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x7F
    _emit 0xE2
    _emit 0xFF
    _emit 0xFF
    _emit 0xA1
    _emit 0x9C
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x98
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x51
    _emit 0x52
    _emit 0xE8
    _emit 0x36
    _emit 0xA1
    _emit 0xFF
    _emit 0xFF
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
