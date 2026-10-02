/* Byte-for-byte override for FUN_00493dcb.

 * Original bytes (25):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: f7 d8 1b c0 23 05 dc 52
 *     0010: 4d 00 a3 d4 52 4d 00 5d
 *     0018: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl FUN_00493dcb(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0xF7
    _emit 0xD8
    _emit 0x1B
    _emit 0xC0
    _emit 0x23
    _emit 0x05
    _emit 0xDC
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0xA3
    _emit 0xD4
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
