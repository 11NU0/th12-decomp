/* Byte-for-byte override for FUN_0040f790.

 * Original bytes (33):
 *     0000: 8b 42 08 85 c0 74 15 3b
 *     0008: c8 7c 04 48 89 02 c3 33
 *     0010: c0 85 c9 0f 9c c0 48 23
 *     0018: c1 89 02 c3 89 0a 8b c1
 *     0020: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __fastcall FUN_0040f790(uint a0, uint * a1)
{
  __asm {
    _emit 0x8B
    _emit 0x42
    _emit 0x08
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x15
    _emit 0x3B
    _emit 0xC8
    _emit 0x7C
    _emit 0x04
    _emit 0x48
    _emit 0x89
    _emit 0x02
    _emit 0xC3
    _emit 0x33
    _emit 0xC0
    _emit 0x85
    _emit 0xC9
    _emit 0x0F
    _emit 0x9C
    _emit 0xC0
    _emit 0x48
    _emit 0x23
    _emit 0xC1
    _emit 0x89
    _emit 0x02
    _emit 0xC3
    _emit 0x89
    _emit 0x0A
    _emit 0x8B
    _emit 0xC1
    _emit 0xC3
  }
  __assume(0);
}
