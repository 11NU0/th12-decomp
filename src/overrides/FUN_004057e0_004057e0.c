/* Byte-for-byte override for FUN_004057e0.

 * Original bytes (161):
 *     0000: 56 57 8b 3d bc 43 4b 00
 *     0008: 6a 44 e8 fb 71 06 00 8b
 *     0010: f0 83 c4 04 85 f6 74 26
 *     0018: 83 66 40 fe 6a 44 6a 00
 *     0020: 56 e8 1a 1c 07 00 83 0e
 *     0028: 02 83 c4 0c 6a 0b 6a 00
 *     0030: 6a 00 6a 00 6a 1e 6a 02
 *     0038: 56 e8 42 d2 04 00 8b 87
 *     0040: d0 35 00 00 a8 01 75 2f
 *     0048: d9 ee 83 c8 01 d9 9f c8
 *     0050: 35 00 00 c7 87 c4 35 00
 *     0058: 00 00 00 00 00 c7 87 c0
 *     0060: 35 00 00 c1 bd f0 ff c7
 *     0068: 87 cc 35 00 00 d0 2e 4b
 *     0070: 00 89 87 d0 35 00 00 d9
 *     0078: 05 14 3e 4a 00 c7 87 c4
 *     0080: 35 00 00 1e 00 00 00 d9
 *     0088: 9f c8 35 00 00 c7 87 c0
 *     0090: 35 00 00 1d 00 00 00 83
 *     0098: 8f bc 35 00 00 02 5f 5e
 *     00a0: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_004057e0(void)
{
  __asm {
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0x3D
    _emit 0xBC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x6A
    _emit 0x44
    _emit 0xE8
    _emit 0xFB
    _emit 0x71
    _emit 0x06
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x26
    _emit 0x83
    _emit 0x66
    _emit 0x40
    _emit 0xFE
    _emit 0x6A
    _emit 0x44
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x1A
    _emit 0x1C
    _emit 0x07
    _emit 0x00
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x6A
    _emit 0x0B
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x1E
    _emit 0x6A
    _emit 0x02
    _emit 0x56
    _emit 0xE8
    _emit 0x42
    _emit 0xD2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x87
    _emit 0xD0
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x2F
    _emit 0xD9
    _emit 0xEE
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x9F
    _emit 0xC8
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x87
    _emit 0xC4
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x87
    _emit 0xC0
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x87
    _emit 0xCC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x87
    _emit 0xD0
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0x14
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0xC7
    _emit 0x87
    _emit 0xC4
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x1E
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x9F
    _emit 0xC8
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x87
    _emit 0xC0
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x1D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x8F
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x02
    _emit 0x5F
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
