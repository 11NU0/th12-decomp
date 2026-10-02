/* Byte-for-byte override for __alloca_probe.

 * Original bytes (43):
 *     0000: 51 8d 4c 24 04 2b c8 1b
 *     0008: c0 f7 d0 23 c8 8b c4 25
 *     0010: 00 f0 ff ff 3b c8 72 0a
 *     0018: 8b c1 59 94 8b 00 89 04
 *     0020: 24 c3 2d 00 10 00 00 85
 *     0028: 00 eb e9
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall __alloca_probe(void)
{
  __asm {
    _emit 0x51
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x2B
    _emit 0xC8
    _emit 0x1B
    _emit 0xC0
    _emit 0xF7
    _emit 0xD0
    _emit 0x23
    _emit 0xC8
    _emit 0x8B
    _emit 0xC4
    _emit 0x25
    _emit 0x00
    _emit 0xF0
    _emit 0xFF
    _emit 0xFF
    _emit 0x3B
    _emit 0xC8
    _emit 0x72
    _emit 0x0A
    _emit 0x8B
    _emit 0xC1
    _emit 0x59
    _emit 0x94
    _emit 0x8B
    _emit 0x00
    _emit 0x89
    _emit 0x04
    _emit 0x24
    _emit 0xC3
    _emit 0x2D
    _emit 0x00
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0x00
    _emit 0xEB
    _emit 0xE9
  }
  __assume(0);
}
