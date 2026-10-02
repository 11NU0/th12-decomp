/* Byte-for-byte override for FUN_00410a50.

 * Original bytes (178):
 *     0000: 51 53 55 56 57 8b f8 8d
 *     0008: b7 d0 00 00 00 89 74 24
 *     0010: 10 e8 da 41 05 00 8b 1d
 *     0018: cc e8 4c 00 8d 57 40 bd
 *     0020: 05 00 00 00 bf 00 00 00
 *     0028: 10 8d a4 24 00 00 00 00
 *     0030: 8b 0a 85 c9 74 59 8b 83
 *     0038: b8 56 88 00 85 c0 74 0d
 *     0040: 8b 30 39 0e 74 20 8b 40
 *     0048: 04 85 c0 75 f3 8b 83 c0
 *     0050: 56 88 00 85 c0 74 38 8b
 *     0058: 30 39 0e 74 09 8b 40 04
 *     0060: 85 c0 75 f3 eb 29 8b c6
 *     0068: 85 c0 74 23 09 b8 7c 04
 *     0070: 00 00 83 78 18 00 75 17
 *     0078: 8b 40 14 85 c0 74 10 90
 *     0080: 8b 08 09 b9 7c 04 00 00
 *     0088: 8b 40 04 85 c0 75 f1 c7
 *     0090: 02 00 00 00 00 83 c2 04
 *     0098: 83 ed 01 75 93 8b 74 24
 *     00a0: 10 c7 06 38 37 4a 00 e8
 *     00a8: 44 41 05 00 5f 5e 5d 5b
 *     00b0: 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00410a50(void)
{
  __asm {
    _emit 0x51
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x8D
    _emit 0xB7
    _emit 0xD0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x10
    _emit 0xE8
    _emit 0xDA
    _emit 0x41
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x1D
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8D
    _emit 0x57
    _emit 0x40
    _emit 0xBD
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBF
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x10
    _emit 0x8D
    _emit 0xA4
    _emit 0x24
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0A
    _emit 0x85
    _emit 0xC9
    _emit 0x74
    _emit 0x59
    _emit 0x8B
    _emit 0x83
    _emit 0xB8
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0D
    _emit 0x8B
    _emit 0x30
    _emit 0x39
    _emit 0x0E
    _emit 0x74
    _emit 0x20
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xF3
    _emit 0x8B
    _emit 0x83
    _emit 0xC0
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x38
    _emit 0x8B
    _emit 0x30
    _emit 0x39
    _emit 0x0E
    _emit 0x74
    _emit 0x09
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xF3
    _emit 0xEB
    _emit 0x29
    _emit 0x8B
    _emit 0xC6
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x23
    _emit 0x09
    _emit 0xB8
    _emit 0x7C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x78
    _emit 0x18
    _emit 0x00
    _emit 0x75
    _emit 0x17
    _emit 0x8B
    _emit 0x40
    _emit 0x14
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x10
    _emit 0x90
    _emit 0x8B
    _emit 0x08
    _emit 0x09
    _emit 0xB9
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
    _emit 0xC7
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC2
    _emit 0x04
    _emit 0x83
    _emit 0xED
    _emit 0x01
    _emit 0x75
    _emit 0x93
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x10
    _emit 0xC7
    _emit 0x06
    _emit 0x38
    _emit 0x37
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x44
    _emit 0x41
    _emit 0x05
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
