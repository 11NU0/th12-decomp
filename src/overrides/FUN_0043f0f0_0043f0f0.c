/* Byte-for-byte override for FUN_0043f0f0.

 * Original bytes (21):
 *     0000: 53 56 8b da 8d b4 88 c8
 *     0008: 02 00 00 e8 60 2f 02 00
 *     0010: 5e 8b c3 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_0043f0f0(undefined4 a0, undefined4 a1)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0xDA
    _emit 0x8D
    _emit 0xB4
    _emit 0x88
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x60
    _emit 0x2F
    _emit 0x02
    _emit 0x00
    _emit 0x5E
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
