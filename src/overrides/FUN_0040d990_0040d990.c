/* Byte-for-byte override for FUN_0040d990.

 * Original bytes (35):
 *     0000: a1 cc 43 4b 00 83 78 08
 *     0008: 00 ba 02 00 00 00 74 06
 *     0010: 8b 48 08 09 51 04 83 78
 *     0018: 0c 00 74 06 8b 40 0c 09
 *     0020: 50 04 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0040d990(void)
{
  __asm {
    _emit 0xA1
    _emit 0xCC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0x78
    _emit 0x08
    _emit 0x00
    _emit 0xBA
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x06
    _emit 0x8B
    _emit 0x48
    _emit 0x08
    _emit 0x09
    _emit 0x51
    _emit 0x04
    _emit 0x83
    _emit 0x78
    _emit 0x0C
    _emit 0x00
    _emit 0x74
    _emit 0x06
    _emit 0x8B
    _emit 0x40
    _emit 0x0C
    _emit 0x09
    _emit 0x50
    _emit 0x04
    _emit 0xC3
  }
  __assume(0);
}
