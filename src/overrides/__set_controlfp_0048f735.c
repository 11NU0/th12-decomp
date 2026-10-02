/* Byte-for-byte override for __set_controlfp.

 * Original bytes (114):
 *     0000: 8b ff 55 8b ec 51 51 8b
 *     0008: 45 0c 56 33 f6 81 7d 08
 *     0010: 1f 00 09 00 75 39 83 f8
 *     0018: ff 75 34 9b d9 7d fc 8b
 *     0020: 4d fc 81 e1 3d 1f 00 00
 *     0028: ba 3d 02 00 00 66 3b ca
 *     0030: 75 1d 39 35 dc 52 4d 00
 *     0038: 74 38 0f ae 5d f8 8b 4d
 *     0040: f8 81 e1 c0 fe 00 00 81
 *     0048: f9 80 1e 00 00 74 23 25
 *     0050: ff ff f7 ff 50 ff 75 08
 *     0058: 56 e8 3c ea ff ff 83 c4
 *     0060: 0c 85 c0 74 0d 56 56 56
 *     0068: 56 56 e8 22 16 fe ff 83
 *     0070: c4 14
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __set_controlfp(uint a0, uint a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0x51
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x56
    _emit 0x33
    _emit 0xF6
    _emit 0x81
    _emit 0x7D
    _emit 0x08
    _emit 0x1F
    _emit 0x00
    _emit 0x09
    _emit 0x00
    _emit 0x75
    _emit 0x39
    _emit 0x83
    _emit 0xF8
    _emit 0xFF
    _emit 0x75
    _emit 0x34
    _emit 0x9B
    _emit 0xD9
    _emit 0x7D
    _emit 0xFC
    _emit 0x8B
    _emit 0x4D
    _emit 0xFC
    _emit 0x81
    _emit 0xE1
    _emit 0x3D
    _emit 0x1F
    _emit 0x00
    _emit 0x00
    _emit 0xBA
    _emit 0x3D
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x3B
    _emit 0xCA
    _emit 0x75
    _emit 0x1D
    _emit 0x39
    _emit 0x35
    _emit 0xDC
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x74
    _emit 0x38
    _emit 0x0F
    _emit 0xAE
    _emit 0x5D
    _emit 0xF8
    _emit 0x8B
    _emit 0x4D
    _emit 0xF8
    _emit 0x81
    _emit 0xE1
    _emit 0xC0
    _emit 0xFE
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xF9
    _emit 0x80
    _emit 0x1E
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x23
    _emit 0x25
    _emit 0xFF
    _emit 0xFF
    _emit 0xF7
    _emit 0xFF
    _emit 0x50
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x56
    _emit 0xE8
    _emit 0x3C
    _emit 0xEA
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0D
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0xE8
    _emit 0x22
    _emit 0x16
    _emit 0xFE
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
  }
  __assume(0);
}
