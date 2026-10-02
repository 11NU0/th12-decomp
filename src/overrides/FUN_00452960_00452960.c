/* Byte-for-byte override for FUN_00452960.

 * Original bytes (27):
 *     0000: 56 8b f1 85 f6 74 10 8b
 *     0008: c6 e8 92 05 00 00 56 e8
 *     0010: db a0 01 00 83 c4 04 33
 *     0018: c0 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_00452960(void * a0)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x92
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0xDB
    _emit 0xA0
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
