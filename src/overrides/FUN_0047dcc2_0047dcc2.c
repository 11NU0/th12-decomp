/* Byte-for-byte override for FUN_0047dcc2.

 * Original bytes (24):
 *     0000: 8b ff 55 8b ec 8b c1 8b
 *     0008: 4d 08 8b 11 89 10 8b 49
 *     0010: 04 89 48 04 5d c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0047dcc2(void * a0, undefined4 * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0xC1
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x8B
    _emit 0x11
    _emit 0x89
    _emit 0x10
    _emit 0x8B
    _emit 0x49
    _emit 0x04
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
