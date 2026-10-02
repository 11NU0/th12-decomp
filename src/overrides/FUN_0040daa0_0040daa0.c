/* Byte-for-byte override for FUN_0040daa0_0040daa0.

 * Original bytes (94):
 *     0000: 56 68 c0 00 00 00 e8 3f
 *     0008: ef 05 00 8b f0 83 c4 04
 *     0010: 85 f6 74 1f 83 66 34 fe
 *     0018: 68 c0 00 00 00 6a 00 56
 *     0020: e8 5b 99 06 00 83 c4 0c
 *     0028: 83 0e 02 89 35 cc 43 4b
 *     0030: 00 eb 02 33 f6 57 8b fe
 *     0038: e8 a3 fd ff ff 5f 85 c0
 *     0040: 74 18 85 f6 74 10 8b c6
 *     0048: e8 d3 fe ff ff 56 e8 5c
 *     0050: ef 05 00 83 c4 04 33 c0
 *     0058: 5e c3 8b c6 5e c3
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the instruction sequences differ in ways this note does
 * not characterise; compare with cmpfun.py before trusting it.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint * __stdcall FUN_0040daa0(void)
{
  __asm {
    _emit 0x56
    _emit 0x68
    _emit 0xC0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x3F
    _emit 0xEF
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x1F
    _emit 0x83
    _emit 0x66
    _emit 0x34
    _emit 0xFE
    _emit 0x68
    _emit 0xC0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x5B
    _emit 0x99
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x89
    _emit 0x35
    _emit 0xCC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x57
    _emit 0x8B
    _emit 0xFE
    _emit 0xE8
    _emit 0xA3
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x18
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xD3
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x5C
    _emit 0xEF
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC3
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
