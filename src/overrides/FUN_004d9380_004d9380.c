/* Byte-for-byte override for FUN_004d9380.

 * Original bytes (16):
 *     0000: 64 a1 18 00 00 00 c3 cc
 *     0008: cc cc cc cc cc cc cc cc
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_004d9380(void)
{
  __asm {
    _emit 0x64
    _emit 0xA1
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC3
    _emit 0xCC
    _emit 0xCC
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
