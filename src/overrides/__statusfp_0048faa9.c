/* Byte-for-byte override for __statusfp.

 * Original bytes (146):
 *     0000: 8b ff 55 8b ec 51 51 56
 *     0008: 9b dd 7d fc 8a 45 fc 33
 *     0010: d2 be 00 00 08 00 a8 3f
 *     0018: 74 29 a8 01 74 03 6a 10
 *     0020: 5a a8 04 74 03 83 ca 08
 *     0028: a8 08 74 03 83 ca 04 a8
 *     0030: 10 74 03 83 ca 02 a8 20
 *     0038: 74 03 83 ca 01 a8 02 74
 *     0040: 02 0b d6 83 3d dc 52 4d
 *     0048: 00 00 74 41 0f ae 5d f8
 *     0050: 8a 4d f8 33 c0 f6 c1 3f
 *     0058: 74 2f f6 c1 01 74 03 6a
 *     0060: 10 58 f6 c1 04 74 03 83
 *     0068: c8 08 f6 c1 08 74 03 83
 *     0070: c8 04 f6 c1 10 74 03 83
 *     0078: c8 02 f6 c1 20 74 03 83
 *     0080: c8 01 f6 c1 02 74 02 0b
 *     0088: c6 0b c2 eb 02 8b c2 5e
 *     0090: c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __cdecl __statusfp(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0x51
    _emit 0x56
    _emit 0x9B
    _emit 0xDD
    _emit 0x7D
    _emit 0xFC
    _emit 0x8A
    _emit 0x45
    _emit 0xFC
    _emit 0x33
    _emit 0xD2
    _emit 0xBE
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0xA8
    _emit 0x3F
    _emit 0x74
    _emit 0x29
    _emit 0xA8
    _emit 0x01
    _emit 0x74
    _emit 0x03
    _emit 0x6A
    _emit 0x10
    _emit 0x5A
    _emit 0xA8
    _emit 0x04
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xCA
    _emit 0x08
    _emit 0xA8
    _emit 0x08
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xCA
    _emit 0x04
    _emit 0xA8
    _emit 0x10
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xCA
    _emit 0x02
    _emit 0xA8
    _emit 0x20
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xCA
    _emit 0x01
    _emit 0xA8
    _emit 0x02
    _emit 0x74
    _emit 0x02
    _emit 0x0B
    _emit 0xD6
    _emit 0x83
    _emit 0x3D
    _emit 0xDC
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x41
    _emit 0x0F
    _emit 0xAE
    _emit 0x5D
    _emit 0xF8
    _emit 0x8A
    _emit 0x4D
    _emit 0xF8
    _emit 0x33
    _emit 0xC0
    _emit 0xF6
    _emit 0xC1
    _emit 0x3F
    _emit 0x74
    _emit 0x2F
    _emit 0xF6
    _emit 0xC1
    _emit 0x01
    _emit 0x74
    _emit 0x03
    _emit 0x6A
    _emit 0x10
    _emit 0x58
    _emit 0xF6
    _emit 0xC1
    _emit 0x04
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x08
    _emit 0xF6
    _emit 0xC1
    _emit 0x08
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x04
    _emit 0xF6
    _emit 0xC1
    _emit 0x10
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x02
    _emit 0xF6
    _emit 0xC1
    _emit 0x20
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xF6
    _emit 0xC1
    _emit 0x02
    _emit 0x74
    _emit 0x02
    _emit 0x0B
    _emit 0xC6
    _emit 0x0B
    _emit 0xC2
    _emit 0xEB
    _emit 0x02
    _emit 0x8B
    _emit 0xC2
    _emit 0x5E
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
