/* Byte-for-byte override for __abstract_cw.

 * Original bytes (159):
 *     0000: 8b ff 55 8b ec 8b 4d 08
 *     0008: 33 c0 f6 c1 01 74 03 6a
 *     0010: 10 58 f6 c1 04 74 03 83
 *     0018: c8 08 f6 c1 08 74 03 83
 *     0020: c8 04 f6 c1 10 74 03 83
 *     0028: c8 02 f6 c1 20 74 03 83
 *     0030: c8 01 f6 c1 02 74 05 0d
 *     0038: 00 00 08 00 53 0f b7 d1
 *     0040: 56 8b ca be 00 0c 00 00
 *     0048: 23 ce 57 bf 00 03 00 00
 *     0050: bb 00 02 00 00 74 21 81
 *     0058: f9 00 04 00 00 74 14 81
 *     0060: f9 00 08 00 00 74 08 3b
 *     0068: ce 75 0d 0b c7 eb 09 0b
 *     0070: c3 eb 05 0d 00 01 00 00
 *     0078: 23 d7 74 0b 3b d3 75 0c
 *     0080: 0d 00 00 01 00 eb 05 0d
 *     0088: 00 00 02 00 f7 45 08 00
 *     0090: 10 00 00 5f 5e 5b 74 05
 *     0098: 0d 00 00 04 00 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __cdecl __abstract_cw(uint a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x33
    _emit 0xC0
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
    _emit 0x53
    _emit 0x0F
    _emit 0xB7
    _emit 0xD1
    _emit 0x56
    _emit 0x8B
    _emit 0xCA
    _emit 0xBE
    _emit 0x00
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x23
    _emit 0xCE
    _emit 0x57
    _emit 0xBF
    _emit 0x00
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xBB
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x21
    _emit 0x81
    _emit 0xF9
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x14
    _emit 0x81
    _emit 0xF9
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x08
    _emit 0x3B
    _emit 0xCE
    _emit 0x75
    _emit 0x0D
    _emit 0x0B
    _emit 0xC7
    _emit 0xEB
    _emit 0x09
    _emit 0x0B
    _emit 0xC3
    _emit 0xEB
    _emit 0x05
    _emit 0x0D
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x23
    _emit 0xD7
    _emit 0x74
    _emit 0x0B
    _emit 0x3B
    _emit 0xD3
    _emit 0x75
    _emit 0x0C
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0xEB
    _emit 0x05
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0xF7
    _emit 0x45
    _emit 0x08
    _emit 0x00
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0x74
    _emit 0x05
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
