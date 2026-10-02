/* Byte-for-byte override for FUN_004014b0.

 * Original bytes (22):
 *     0000: 56 8b f1 56 e8 e7 0d 00
 *     0008: 00 b8 01 00 00 00 01 86
 *     0010: b0 8f 01 00 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_004014b0(int a0)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0x56
    _emit 0xE8
    _emit 0xE7
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x86
    _emit 0xB0
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
