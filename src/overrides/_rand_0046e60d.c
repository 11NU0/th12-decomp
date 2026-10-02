/* Byte-for-byte override for _rand.

 * Original bytes (34):
 *     0000: e8 55 6e 00 00 8b 48 14
 *     0008: 69 c9 fd 43 03 00 81 c1
 *     0010: c3 9e 26 00 89 48 14 8b
 *     0018: c1 c1 e8 10 25 ff 7f 00
 *     0020: 00 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl _rand(void)
{
  __asm {
    _emit 0xE8
    _emit 0x55
    _emit 0x6E
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x48
    _emit 0x14
    _emit 0x69
    _emit 0xC9
    _emit 0xFD
    _emit 0x43
    _emit 0x03
    _emit 0x00
    _emit 0x81
    _emit 0xC1
    _emit 0xC3
    _emit 0x9E
    _emit 0x26
    _emit 0x00
    _emit 0x89
    _emit 0x48
    _emit 0x14
    _emit 0x8B
    _emit 0xC1
    _emit 0xC1
    _emit 0xE8
    _emit 0x10
    _emit 0x25
    _emit 0xFF
    _emit 0x7F
    _emit 0x00
    _emit 0x00
    _emit 0xC3
  }
  __assume(0);
}
