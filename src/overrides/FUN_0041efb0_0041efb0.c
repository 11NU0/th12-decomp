/* Byte-for-byte override for FUN_0041efb0.

 * Original bytes (142):
 *     0000: 56 57 8d 73 10 bf 08 00
 *     0008: 00 00 8d 9b 00 00 00 00
 *     0010: a1 cc e8 4c 00 50 8b c6
 *     0018: e8 33 d9 03 00 81 c6 b4
 *     0020: 04 00 00 83 ef 01 75 e8
 *     0028: 8d b3 b0 25 00 00 bf 08
 *     0030: 00 00 00 8b 0d cc e8 4c
 *     0038: 00 51 8b c6 e8 0f d9 03
 *     0040: 00 81 c6 b4 04 00 00 83
 *     0048: ef 01 75 e7 a1 dc 43 4b
 *     0050: 00 5f 5e 85 c0 74 31 8b
 *     0058: 40 1c 85 c0 74 2a 8b 80
 *     0060: f8 26 00 00 8b d0 c1 ea
 *     0068: 05 f7 d2 f6 c2 01 74 18
 *     0070: f7 d0 a8 01 74 12 8b 0d
 *     0078: cc e8 4c 00 8d 83 8c 67
 *     0080: 00 00 51 e8 c8 d8 03 00
 *     0088: b8 01 00 00 00 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_0041efb0(void * a0)
{
  __asm {
    _emit 0x56
    _emit 0x57
    _emit 0x8D
    _emit 0x73
    _emit 0x10
    _emit 0xBF
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x9B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x50
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x33
    _emit 0xD9
    _emit 0x03
    _emit 0x00
    _emit 0x81
    _emit 0xC6
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x75
    _emit 0xE8
    _emit 0x8D
    _emit 0xB3
    _emit 0xB0
    _emit 0x25
    _emit 0x00
    _emit 0x00
    _emit 0xBF
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x51
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x0F
    _emit 0xD9
    _emit 0x03
    _emit 0x00
    _emit 0x81
    _emit 0xC6
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x75
    _emit 0xE7
    _emit 0xA1
    _emit 0xDC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x31
    _emit 0x8B
    _emit 0x40
    _emit 0x1C
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x2A
    _emit 0x8B
    _emit 0x80
    _emit 0xF8
    _emit 0x26
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xD0
    _emit 0xC1
    _emit 0xEA
    _emit 0x05
    _emit 0xF7
    _emit 0xD2
    _emit 0xF6
    _emit 0xC2
    _emit 0x01
    _emit 0x74
    _emit 0x18
    _emit 0xF7
    _emit 0xD0
    _emit 0xA8
    _emit 0x01
    _emit 0x74
    _emit 0x12
    _emit 0x8B
    _emit 0x0D
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8D
    _emit 0x83
    _emit 0x8C
    _emit 0x67
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0xC8
    _emit 0xD8
    _emit 0x03
    _emit 0x00
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC3
  }
  __assume(0);
}
