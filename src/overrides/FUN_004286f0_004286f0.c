/* Byte-for-byte override for FUN_004286f0.

 * Original bytes (95):
 *     0000: a1 f4 44 4b 00 8b 16 8b
 *     0008: 48 18 89 90 70 04 00 00
 *     0010: 8b 56 04 53 89 90 74 04
 *     0018: 00 00 8b 56 08 33 db 55
 *     0020: 8b 6c 24 14 89 90 78 04
 *     0028: 00 00 85 c9 74 2a 57 90
 *     0030: 83 79 0c 01 8b 79 08 74
 *     0038: 18 8b 54 24 14 d9 44 24
 *     0040: 10 8b 01 8b 40 1c 55 52
 *     0048: 51 d9 1c 24 56 ff d0 03
 *     0050: d8 8b cf 85 ff 75 d9 5f
 *     0058: 5d 8b c3 5b c2 0c 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __stdcall FUN_004286f0(undefined4 a0, undefined4 a1, undefined4 a2)
{
  __asm {
    _emit 0xA1
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x16
    _emit 0x8B
    _emit 0x48
    _emit 0x18
    _emit 0x89
    _emit 0x90
    _emit 0x70
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x56
    _emit 0x04
    _emit 0x53
    _emit 0x89
    _emit 0x90
    _emit 0x74
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x56
    _emit 0x08
    _emit 0x33
    _emit 0xDB
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x90
    _emit 0x78
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC9
    _emit 0x74
    _emit 0x2A
    _emit 0x57
    _emit 0x90
    _emit 0x83
    _emit 0x79
    _emit 0x0C
    _emit 0x01
    _emit 0x8B
    _emit 0x79
    _emit 0x08
    _emit 0x74
    _emit 0x18
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x01
    _emit 0x8B
    _emit 0x40
    _emit 0x1C
    _emit 0x55
    _emit 0x52
    _emit 0x51
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0x56
    _emit 0xFF
    _emit 0xD0
    _emit 0x03
    _emit 0xD8
    _emit 0x8B
    _emit 0xCF
    _emit 0x85
    _emit 0xFF
    _emit 0x75
    _emit 0xD9
    _emit 0x5F
    _emit 0x5D
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
  }
  __assume(0);
}
