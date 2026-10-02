/* Byte-for-byte override for __SEH_epilog4.

 * Original bytes (20):
 *     0000: 8b 4d f0 64 89 0d 00 00
 *     0008: 00 00 59 5f 5f 5e 5b 8b
 *     0010: e5 5d 51 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall __SEH_epilog4(void)
{
  __asm {
    _emit 0x8B
    _emit 0x4D
    _emit 0xF0
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5F
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0x51
    _emit 0xC3
  }
  __assume(0);
}
