/* Byte-for-byte override for __clearfp.

 * Original bytes (217):
 *     0000: 8b ff 55 8b ec 51 51 dd
 *     0008: 7d fc db e2 83 3d dc 52
 *     0010: 4d 00 00 0f 84 82 00 00
 *     0018: 00 8a 45 fc 33 d2 56 be
 *     0020: 00 00 08 00 a8 3f 74 29
 *     0028: a8 01 74 03 6a 10 5a a8
 *     0030: 04 74 03 83 ca 08 a8 08
 *     0038: 74 03 83 ca 04 a8 10 74
 *     0040: 03 83 ca 02 a8 20 74 03
 *     0048: 83 ca 01 a8 02 74 02 0b
 *     0050: d6 0f ae 5d f8 83 65 f8
 *     0058: c0 0f ae 55 f8 8a 4d f8
 *     0060: 33 c0 f6 c1 3f 74 2f f6
 *     0068: c1 01 74 03 6a 10 58 f6
 *     0070: c1 04 74 03 83 c8 08 f6
 *     0078: c1 08 74 03 83 c8 04 f6
 *     0080: c1 10 74 03 83 c8 02 f6
 *     0088: c1 20 74 03 83 c8 01 f6
 *     0090: c1 02 74 02 0b c6 0b c2
 *     0098: 5e c9 c3 8a 4d fc 33 c0
 *     00a0: f6 c1 3f 74 32 f6 c1 01
 *     00a8: 74 03 6a 10 58 f6 c1 04
 *     00b0: 74 03 83 c8 08 f6 c1 08
 *     00b8: 74 03 83 c8 04 f6 c1 10
 *     00c0: 74 03 83 c8 02 f6 c1 20
 *     00c8: 74 03 83 c8 01 f6 c1 02
 *     00d0: 74 05 0d 00 00 08 00 c9
 *     00d8: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __cdecl __clearfp(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0x51
    _emit 0xDD
    _emit 0x7D
    _emit 0xFC
    _emit 0xDB
    _emit 0xE2
    _emit 0x83
    _emit 0x3D
    _emit 0xDC
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x82
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8A
    _emit 0x45
    _emit 0xFC
    _emit 0x33
    _emit 0xD2
    _emit 0x56
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
    _emit 0x0F
    _emit 0xAE
    _emit 0x5D
    _emit 0xF8
    _emit 0x83
    _emit 0x65
    _emit 0xF8
    _emit 0xC0
    _emit 0x0F
    _emit 0xAE
    _emit 0x55
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
    _emit 0x5E
    _emit 0xC9
    _emit 0xC3
    _emit 0x8A
    _emit 0x4D
    _emit 0xFC
    _emit 0x33
    _emit 0xC0
    _emit 0xF6
    _emit 0xC1
    _emit 0x3F
    _emit 0x74
    _emit 0x32
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
    _emit 0x05
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
