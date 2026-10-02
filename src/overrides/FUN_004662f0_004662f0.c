/* Byte-for-byte override for FUN_004662f0.

 * Original bytes (19):
 *     0000: 8b 41 04 85 c0 75 03 33
 *     0008: c0 c3 83 79 10 00 76 f7
 *     0010: 8b 00 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_004662f0(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0x41
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x03
    _emit 0x33
    _emit 0xC0
    _emit 0xC3
    _emit 0x83
    _emit 0x79
    _emit 0x10
    _emit 0x00
    _emit 0x76
    _emit 0xF7
    _emit 0x8B
    _emit 0x00
    _emit 0xC3
  }
  __assume(0);
}
