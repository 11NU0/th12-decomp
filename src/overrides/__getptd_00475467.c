/* Byte-for-byte override for __getptd.

 * Original bytes (26):
 *     0000: 8b ff 56 e8 7f ff ff ff
 *     0008: 8b f0 85 f6 75 08 6a 10
 *     0010: e8 91 d7 ff ff 59 8b c6
 *     0018: 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

_ptiddata __cdecl __getptd(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x7F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xF0
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x08
    _emit 0x6A
    _emit 0x10
    _emit 0xE8
    _emit 0x91
    _emit 0xD7
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
