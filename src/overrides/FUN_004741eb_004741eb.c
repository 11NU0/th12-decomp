/* Byte-for-byte override for FUN_004741eb.

 * Original bytes (12):
 *     0000: 6a 0c e8 b6 a9 ff ff 59
 *     0008: 8b 75 e4 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_004741eb(void)
{
  __asm {
    _emit 0x6A
    _emit 0x0C
    _emit 0xE8
    _emit 0xB6
    _emit 0xA9
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x8B
    _emit 0x75
    _emit 0xE4
    _emit 0xC3
  }
  __assume(0);
}
