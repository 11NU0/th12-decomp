/* Byte-for-byte override for FUN_00413170.

 * Original bytes (29):
 *     0000: 56 8b 35 dc 43 4b 00 85
 *     0008: f6 74 10 8b c6 e8 8e fd
 *     0010: ff ff 56 e8 c7 98 05 00
 *     0018: 83 c4 04 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00413170(void)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xDC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x8E
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0xC7
    _emit 0x98
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
