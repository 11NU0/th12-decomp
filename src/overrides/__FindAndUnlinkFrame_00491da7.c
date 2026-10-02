/* Byte-for-byte override for __FindAndUnlinkFrame.

 * Original bytes (82):
 *     0000: 8b ff 55 8b ec 56 e8 b5
 *     0008: 36 fe ff 8b 75 08 3b b0
 *     0010: 98 00 00 00 75 11 e8 a5
 *     0018: 36 fe ff 8b 4e 04 89 88
 *     0020: 98 00 00 00 5e 5d c3 e8
 *     0028: 94 36 fe ff 8b 80 98 00
 *     0030: 00 00 eb 09 8b 48 04 3b
 *     0038: f1 74 0f 8b c1 83 78 04
 *     0040: 00 75 f1 5e 5d e9 a3 0d
 *     0048: fe ff 8b 4e 04 89 48 04
 *     0050: eb d2
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __FindAndUnlinkFrame(void * a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x56
    _emit 0xE8
    _emit 0xB5
    _emit 0x36
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x75
    _emit 0x08
    _emit 0x3B
    _emit 0xB0
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x11
    _emit 0xE8
    _emit 0xA5
    _emit 0x36
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x4E
    _emit 0x04
    _emit 0x89
    _emit 0x88
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
    _emit 0xE8
    _emit 0x94
    _emit 0x36
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x80
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x09
    _emit 0x8B
    _emit 0x48
    _emit 0x04
    _emit 0x3B
    _emit 0xF1
    _emit 0x74
    _emit 0x0F
    _emit 0x8B
    _emit 0xC1
    _emit 0x83
    _emit 0x78
    _emit 0x04
    _emit 0x00
    _emit 0x75
    _emit 0xF1
    _emit 0x5E
    _emit 0x5D
    _emit 0xE9
    _emit 0xA3
    _emit 0x0D
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x4E
    _emit 0x04
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0xEB
    _emit 0xD2
  }
  __assume(0);
}
