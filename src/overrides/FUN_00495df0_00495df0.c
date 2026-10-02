/* Byte-for-byte override for FUN_00495df0.

 * Original bytes (24):
 *     0000: 55 8b ec 83 ec 08 83 e4
 *     0008: f0 dd 1c 24 f3 0f 7e 04
 *     0010: 24 e8 08 00 00 00 c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00495df0(undefined4 a0)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0x83
    _emit 0xE4
    _emit 0xF0
    _emit 0xDD
    _emit 0x1C
    _emit 0x24
    _emit 0xF3
    _emit 0x0F
    _emit 0x7E
    _emit 0x04
    _emit 0x24
    _emit 0xE8
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
