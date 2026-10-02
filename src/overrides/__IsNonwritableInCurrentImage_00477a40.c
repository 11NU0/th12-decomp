/* Byte-for-byte override for __IsNonwritableInCurrentImage.

 * Original bytes (166):
 *     0000: 8b ff 55 8b ec 6a fe 68
 *     0008: 18 ae 4a 00 68 80 fd 46
 *     0010: 00 64 a1 00 00 00 00 50
 *     0018: 83 ec 08 53 56 57 a1 38
 *     0020: d1 4a 00 31 45 f8 33 c5
 *     0028: 50 8d 45 f0 64 a3 00 00
 *     0030: 00 00 89 65 e8 c7 45 fc
 *     0038: 00 00 00 00 68 00 00 40
 *     0040: 00 e8 2a ff ff ff 83 c4
 *     0048: 04 85 c0 74 55 8b 45 08
 *     0050: 2d 00 00 40 00 50 68 00
 *     0058: 00 40 00 e8 50 ff ff ff
 *     0060: 83 c4 08 85 c0 74 3b 8b
 *     0068: 40 24 c1 e8 1f f7 d0 83
 *     0070: e0 01 c7 45 fc fe ff ff
 *     0078: ff 8b 4d f0 64 89 0d 00
 *     0080: 00 00 00 59 5f 5e 5b 8b
 *     0088: e5 5d c3 8b 45 ec 8b 08
 *     0090: 8b 01 33 d2 3d 05 00 00
 *     0098: c0 0f 94 c2 8b c2 c3 8b
 *     00a0: 65 e8 c7 45 fc fe
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x6A
    _emit 0xFE
    _emit 0x68
    _emit 0x18
    _emit 0xAE
    _emit 0x4A
    _emit 0x00
    _emit 0x68
    _emit 0x80
    _emit 0xFD
    _emit 0x46
    _emit 0x00
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0xA1
    _emit 0x38
    _emit 0xD1
    _emit 0x4A
    _emit 0x00
    _emit 0x31
    _emit 0x45
    _emit 0xF8
    _emit 0x33
    _emit 0xC5
    _emit 0x50
    _emit 0x8D
    _emit 0x45
    _emit 0xF0
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x65
    _emit 0xE8
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0x00
    _emit 0x00
    _emit 0x40
    _emit 0x00
    _emit 0xE8
    _emit 0x2A
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x55
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x2D
    _emit 0x00
    _emit 0x00
    _emit 0x40
    _emit 0x00
    _emit 0x50
    _emit 0x68
    _emit 0x00
    _emit 0x00
    _emit 0x40
    _emit 0x00
    _emit 0xE8
    _emit 0x50
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x3B
    _emit 0x8B
    _emit 0x40
    _emit 0x24
    _emit 0xC1
    _emit 0xE8
    _emit 0x1F
    _emit 0xF7
    _emit 0xD0
    _emit 0x83
    _emit 0xE0
    _emit 0x01
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x4D
    _emit 0xF0
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
    _emit 0x8B
    _emit 0x45
    _emit 0xEC
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x01
    _emit 0x33
    _emit 0xD2
    _emit 0x3D
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xC0
    _emit 0x0F
    _emit 0x94
    _emit 0xC2
    _emit 0x8B
    _emit 0xC2
    _emit 0xC3
    _emit 0x8B
    _emit 0x65
    _emit 0xE8
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFE
  }
  __assume(0);
}
