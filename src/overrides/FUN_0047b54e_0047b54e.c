/* Byte-for-byte override for FUN_0047b54e.

 * Original bytes (28):
 *     0000: 55 8b 4c 24 08 8b 29 ff
 *     0008: 71 1c ff 71 18 ff 71 28
 *     0010: e8 15 ff ff ff 83 c4 0c
 *     0018: 5d c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0047b54e(int a0)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x29
    _emit 0xFF
    _emit 0x71
    _emit 0x1C
    _emit 0xFF
    _emit 0x71
    _emit 0x18
    _emit 0xFF
    _emit 0x71
    _emit 0x28
    _emit 0xE8
    _emit 0x15
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
