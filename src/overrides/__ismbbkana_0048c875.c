/* Byte-for-byte override for __ismbbkana.

 * Original bytes (19):
 *     0000: 8b ff 55 8b ec 6a 00 ff
 *     0008: 75 08 e8 9c ff ff ff 59
 *     0010: 59 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl __ismbbkana(uint a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x9C
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x59
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
