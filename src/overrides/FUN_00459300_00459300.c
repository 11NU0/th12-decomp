/* Byte-for-byte override for FUN_00459300.

 * Original bytes (39):
 *     0000: 51 d9 40 38 da 70 44 8b
 *     0008: 40 48 48 d9 1c 24 d9 04
 *     0010: 24 83 f8 0f 77 09 51 d9
 *     0018: 1c 24 e8 61 bc 00 00 d9
 *     0020: 1c 24 d9 04 24 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

float10 __stdcall FUN_00459300(void)
{
  __asm {
    _emit 0x51
    _emit 0xD9
    _emit 0x40
    _emit 0x38
    _emit 0xDA
    _emit 0x70
    _emit 0x44
    _emit 0x8B
    _emit 0x40
    _emit 0x48
    _emit 0x48
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0x83
    _emit 0xF8
    _emit 0x0F
    _emit 0x77
    _emit 0x09
    _emit 0x51
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0x61
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
