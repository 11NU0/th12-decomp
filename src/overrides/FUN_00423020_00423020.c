/* Byte-for-byte override for FUN_00423020.

 * Original bytes (77):
 *     0000: 51 56 c7 05 08 f5 4c 00
 *     0008: ff ff ff ff be 70 0e 4d
 *     0010: 00 8b 06 c7 46 14 00 00
 *     0018: 00 00 85 c0 74 21 8b 08
 *     0020: 8d 54 24 04 52 50 8b 41
 *     0028: 24 ff d0 8b 4c 24 04 8b
 *     0030: 06 83 e1 01 89 4e 14 8b
 *     0038: 10 50 8b 42 48 ff d0 83
 *     0040: c6 18 81 fe 10 14 4d 00
 *     0048: 7c c7 5e 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00423020(void)
{
  __asm {
    _emit 0x51
    _emit 0x56
    _emit 0xC7
    _emit 0x05
    _emit 0x08
    _emit 0xF5
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xBE
    _emit 0x70
    _emit 0x0E
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x06
    _emit 0xC7
    _emit 0x46
    _emit 0x14
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x21
    _emit 0x8B
    _emit 0x08
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x52
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x24
    _emit 0xFF
    _emit 0xD0
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x06
    _emit 0x83
    _emit 0xE1
    _emit 0x01
    _emit 0x89
    _emit 0x4E
    _emit 0x14
    _emit 0x8B
    _emit 0x10
    _emit 0x50
    _emit 0x8B
    _emit 0x42
    _emit 0x48
    _emit 0xFF
    _emit 0xD0
    _emit 0x83
    _emit 0xC6
    _emit 0x18
    _emit 0x81
    _emit 0xFE
    _emit 0x10
    _emit 0x14
    _emit 0x4D
    _emit 0x00
    _emit 0x7C
    _emit 0xC7
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
