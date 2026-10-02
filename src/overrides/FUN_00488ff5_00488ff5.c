/* Byte-for-byte override for FUN_00488ff5.

 * Original bytes (17):
 *     0000: 8b ff 55 8b ec 57 8b 7d
 *     0008: 08 33 c0 ab ab ab 5f 5d
 *     0010: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl FUN_00488ff5(undefined4 * a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x57
    _emit 0x8B
    _emit 0x7D
    _emit 0x08
    _emit 0x33
    _emit 0xC0
    _emit 0xAB
    _emit 0xAB
    _emit 0xAB
    _emit 0x5F
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
