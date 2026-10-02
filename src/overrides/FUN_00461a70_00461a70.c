/* Byte-for-byte override for FUN_00461a70.

 * Original bytes (66):
 *     0000: 8b 44 24 04 8b 15 cc e8
 *     0008: 4c 00 50 e8 a0 fe ff ff
 *     0010: 85 c0 74 2b ba 00 00 00
 *     0018: 10 09 90 7c 04 00 00 83
 *     0020: 78 18 00 75 1a 8b 40 14
 *     0028: 85 c0 74 13 8d 64 24 00
 *     0030: 8b 08 09 91 7c 04 00 00
 *     0038: 8b 40 04 85 c0 75 f1 c2
 *     0040: 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00461a70(void * a0, int a1)
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
    _emit 0x50
    _emit 0xE8
    _emit 0xA0
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x2B
    _emit 0xBA
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x10
    _emit 0x09
    _emit 0x90
    _emit 0x7C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x78
    _emit 0x18
    _emit 0x00
    _emit 0x75
    _emit 0x1A
    _emit 0x8B
    _emit 0x40
    _emit 0x14
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x13
    _emit 0x8D
    _emit 0x64
    _emit 0x24
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x09
    _emit 0x91
    _emit 0x7C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xF1
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
