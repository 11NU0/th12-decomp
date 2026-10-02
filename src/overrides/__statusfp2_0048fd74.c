/* Byte-for-byte override for __statusfp2.

 * Original bytes (90):
 *     0000: 8b ff 55 8b ec 8b 55 08
 *     0008: 85 d2 74 3c 9b dd 7d 08
 *     0010: 8a 45 08 33 c9 a8 3f 74
 *     0018: 2d a8 01 74 03 6a 10 59
 *     0020: a8 04 74 03 83 c9 08 a8
 *     0028: 08 74 03 83 c9 04 a8 10
 *     0030: 74 03 83 c9 02 a8 20 74
 *     0038: 03 83 c9 01 a8 02 74 06
 *     0040: 81 c9 00 00 08 00 89 0a
 *     0048: 56 8b 75 0c 85 f6 74 07
 *     0050: e8 aa fd ff ff 89 06 5e
 *     0058: 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __statusfp2(uint * a0, uint * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x55
    _emit 0x08
    _emit 0x85
    _emit 0xD2
    _emit 0x74
    _emit 0x3C
    _emit 0x9B
    _emit 0xDD
    _emit 0x7D
    _emit 0x08
    _emit 0x8A
    _emit 0x45
    _emit 0x08
    _emit 0x33
    _emit 0xC9
    _emit 0xA8
    _emit 0x3F
    _emit 0x74
    _emit 0x2D
    _emit 0xA8
    _emit 0x01
    _emit 0x74
    _emit 0x03
    _emit 0x6A
    _emit 0x10
    _emit 0x59
    _emit 0xA8
    _emit 0x04
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC9
    _emit 0x08
    _emit 0xA8
    _emit 0x08
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC9
    _emit 0x04
    _emit 0xA8
    _emit 0x10
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC9
    _emit 0x02
    _emit 0xA8
    _emit 0x20
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC9
    _emit 0x01
    _emit 0xA8
    _emit 0x02
    _emit 0x74
    _emit 0x06
    _emit 0x81
    _emit 0xC9
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x89
    _emit 0x0A
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x0C
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x07
    _emit 0xE8
    _emit 0xAA
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x06
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
