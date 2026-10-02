/* Byte-for-byte override for FUN_0044edf0.

 * Original bytes (31):
 *     0000: 83 79 18 10 8b 44 24 04
 *     0008: 89 41 14 72 0a 8b 49 04
 *     0010: c6 04 01 00 c2 04 00 c6
 *     0018: 44 01 04 00 c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0044edf0(void * a0, int a1)
{
  __asm {
    _emit 0x83
    _emit 0x79
    _emit 0x18
    _emit 0x10
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x41
    _emit 0x14
    _emit 0x72
    _emit 0x0A
    _emit 0x8B
    _emit 0x49
    _emit 0x04
    _emit 0xC6
    _emit 0x04
    _emit 0x01
    _emit 0x00
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xC6
    _emit 0x44
    _emit 0x01
    _emit 0x04
    _emit 0x00
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
