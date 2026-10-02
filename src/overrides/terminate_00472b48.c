/* Byte-for-byte override for terminate.

 * Original bytes (44):
 *     0000: 6a 08 68 e0 ab 4a 00 e8
 *     0008: 98 d1 ff ff e8 0e 29 00
 *     0010: 00 8b 40 78 85 c0 74 16
 *     0018: 83 65 fc 00 ff d0 eb 07
 *     0020: 33 c0 40 c3 8b 65 e8 c7
 *     0028: 45 fc fe ff
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl terminate(void)
{
  __asm {
    _emit 0x6A
    _emit 0x08
    _emit 0x68
    _emit 0xE0
    _emit 0xAB
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x98
    _emit 0xD1
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x0E
    _emit 0x29
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x40
    _emit 0x78
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x16
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0xEB
    _emit 0x07
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0xC3
    _emit 0x8B
    _emit 0x65
    _emit 0xE8
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFE
    _emit 0xFF
  }
  __assume(0);
}
