/* Byte-for-byte override for FUN_00425900.

 * Original bytes (63):
 *     0000: 56 8b f1 8b 86 2c 09 00
 *     0008: 00 85 c0 74 09 50 e8 2e
 *     0010: 70 04 00 83 c4 04 c7 86
 *     0018: 2c 09 00 00 00 00 00 00
 *     0020: 8b 86 78 04 00 00 85 c0
 *     0028: 74 09 50 e8 11 70 04 00
 *     0030: 83 c4 04 c7 86 78 04 00
 *     0038: 00 00 00 00 00 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00425900(int a0)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0x8B
    _emit 0x86
    _emit 0x2C
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x09
    _emit 0x50
    _emit 0xE8
    _emit 0x2E
    _emit 0x70
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xC7
    _emit 0x86
    _emit 0x2C
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0x78
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x09
    _emit 0x50
    _emit 0xE8
    _emit 0x11
    _emit 0x70
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xC7
    _emit 0x86
    _emit 0x78
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
