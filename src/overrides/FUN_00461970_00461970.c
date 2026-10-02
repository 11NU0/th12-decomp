/* Byte-for-byte override for FUN_00461970.

 * Original bytes (102):
 *     0000: 8b 44 24 04 8b 15 cc e8
 *     0008: 4c 00 56 50 e8 9f ff ff
 *     0010: ff 8b f0 85 f6 74 4b 8b
 *     0018: 86 94 04 00 00 85 c0 74
 *     0020: 07 0f bf d3 8b ce ff d0
 *     0028: 83 7e 18 00 66 89 9e c4
 *     0030: 03 00 00 75 2d 8b 76 14
 *     0038: 85 f6 74 26 57 8d 49 00
 *     0040: 8b 3e 8b 87 94 04 00 00
 *     0048: 85 c0 74 07 0f bf d3 8b
 *     0050: cf ff d0 66 89 9f c4 03
 *     0058: 00 00 8b 76 04 85 f6 75
 *     0060: df 5f 5e c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00461970(void * a0, int a1)
{
  __asm {
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x15
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x56
    _emit 0x50
    _emit 0xE8
    _emit 0x9F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xF0
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x4B
    _emit 0x8B
    _emit 0x86
    _emit 0x94
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x07
    _emit 0x0F
    _emit 0xBF
    _emit 0xD3
    _emit 0x8B
    _emit 0xCE
    _emit 0xFF
    _emit 0xD0
    _emit 0x83
    _emit 0x7E
    _emit 0x18
    _emit 0x00
    _emit 0x66
    _emit 0x89
    _emit 0x9E
    _emit 0xC4
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x2D
    _emit 0x8B
    _emit 0x76
    _emit 0x14
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x26
    _emit 0x57
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x3E
    _emit 0x8B
    _emit 0x87
    _emit 0x94
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x07
    _emit 0x0F
    _emit 0xBF
    _emit 0xD3
    _emit 0x8B
    _emit 0xCF
    _emit 0xFF
    _emit 0xD0
    _emit 0x66
    _emit 0x89
    _emit 0x9F
    _emit 0xC4
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x76
    _emit 0x04
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0xDF
    _emit 0x5F
    _emit 0x5E
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
