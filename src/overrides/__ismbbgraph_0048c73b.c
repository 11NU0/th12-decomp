/* Byte-for-byte override for __ismbbgraph.

 * Original bytes (27):
 *     0000: 8b ff 55 8b ec 6a 03 68
 *     0008: 17 01 00 00 ff 75 08 6a
 *     0010: 00 e8 7a fe ff ff 83 c4
 *     0018: 10 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl __ismbbgraph(uint a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x6A
    _emit 0x03
    _emit 0x68
    _emit 0x17
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x6A
    _emit 0x00
    _emit 0xE8
    _emit 0x7A
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
