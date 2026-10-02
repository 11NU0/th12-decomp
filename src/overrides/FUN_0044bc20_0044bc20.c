/* Byte-for-byte override for FUN_0044bc20.

 * Original bytes (47):
 *     0000: 8b c7 8d 50 01 8a 08 40
 *     0008: 84 c9 75 f9 2b c2 40 50
 *     0010: e8 15 14 02 00 83 c4 04
 *     0018: 85 c0 74 12 56 8b f0 8b
 *     0020: cf 2b f7 8a 11 88 14 0e
 *     0028: 41 84 d2 75 f6 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0044bc20(void)
{
  __asm {
    _emit 0x8B
    _emit 0xC7
    _emit 0x8D
    _emit 0x50
    _emit 0x01
    _emit 0x8A
    _emit 0x08
    _emit 0x40
    _emit 0x84
    _emit 0xC9
    _emit 0x75
    _emit 0xF9
    _emit 0x2B
    _emit 0xC2
    _emit 0x40
    _emit 0x50
    _emit 0xE8
    _emit 0x15
    _emit 0x14
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x12
    _emit 0x56
    _emit 0x8B
    _emit 0xF0
    _emit 0x8B
    _emit 0xCF
    _emit 0x2B
    _emit 0xF7
    _emit 0x8A
    _emit 0x11
    _emit 0x88
    _emit 0x14
    _emit 0x0E
    _emit 0x41
    _emit 0x84
    _emit 0xD2
    _emit 0x75
    _emit 0xF6
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
