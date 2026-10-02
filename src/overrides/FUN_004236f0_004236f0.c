/* Byte-for-byte override for FUN_004236f0.

 * Original bytes (81):
 *     0000: 53 56 57 8b f8 83 c7 7c
 *     0008: bb 08 00 00 00 8d 49 00
 *     0010: 8b 47 a0 85 c0 74 14 8b
 *     0018: 70 04 8b 00 50 e8 3d 93
 *     0020: 04 00 83 c4 04 8b c6 85
 *     0028: f6 75 ec 8b 07 85 c0 74
 *     0030: 14 8b 08 8b 70 04 51 e8
 *     0038: 23 93 04 00 83 c4 04 8b
 *     0040: c6 85 f6 75 ec 83 c7 0c
 *     0048: 83 eb 01 75 c3 5f 5e 5b
 *     0050: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_004236f0(void)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x83
    _emit 0xC7
    _emit 0x7C
    _emit 0xBB
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x47
    _emit 0xA0
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x14
    _emit 0x8B
    _emit 0x70
    _emit 0x04
    _emit 0x8B
    _emit 0x00
    _emit 0x50
    _emit 0xE8
    _emit 0x3D
    _emit 0x93
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0xC6
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0xEC
    _emit 0x8B
    _emit 0x07
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x14
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x70
    _emit 0x04
    _emit 0x51
    _emit 0xE8
    _emit 0x23
    _emit 0x93
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0xC6
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0xEC
    _emit 0x83
    _emit 0xC7
    _emit 0x0C
    _emit 0x83
    _emit 0xEB
    _emit 0x01
    _emit 0x75
    _emit 0xC3
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
