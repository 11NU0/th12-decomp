/* Byte-for-byte override for FUN_004d9370.

 * Original bytes (16):
 *     0000: 55 8b ec 33 c0 5d c2 0c
 *     0008: 00 cc cc cc cc cc cc cc
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_004d9370(void)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
    _emit 0xCC
    _emit 0xCC
    _emit 0xCC
    _emit 0xCC
    _emit 0xCC
    _emit 0xCC
    _emit 0xCC
  }
  __assume(0);
}
