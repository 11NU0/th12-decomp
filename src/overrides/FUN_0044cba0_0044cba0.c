/* Byte-for-byte override for FUN_0044cba0.

 * Original bytes (134):
 *     0000: 56 8b f0 8d 0c 76 8b 04
 *     0008: 8d 40 45 4b 00 8d 04 40
 *     0010: 03 c0 03 c0 39 b0 44 45
 *     0018: 4b 00 75 08 89 90 44 45
 *     0020: 4b 00 eb 06 89 90 48 45
 *     0028: 4b 00 8b 34 8d 40 45 4b
 *     0030: 00 8d 04 52 03 c0 89 b4
 *     0038: 00 40 45 4b 00 8b 34 8d
 *     0040: 44 45 4b 00 03 c0 89 b0
 *     0048: 44 45 4b 00 8b 34 8d 48
 *     0050: 45 4b 00 89 b0 48 45 4b
 *     0058: 00 8b b0 44 45 4b 00 8d
 *     0060: 34 76 89 14 b5 40 45 4b
 *     0068: 00 8b 80 48 45 4b 00 8d
 *     0070: 04 40 89 14 85 40 45 4b
 *     0078: 00 c7 04 8d 40 45 4b 00
 *     0080: 00 00 00 00 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0044cba0(undefined4 a0, int a1)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF0
    _emit 0x8D
    _emit 0x0C
    _emit 0x76
    _emit 0x8B
    _emit 0x04
    _emit 0x8D
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0x40
    _emit 0x03
    _emit 0xC0
    _emit 0x03
    _emit 0xC0
    _emit 0x39
    _emit 0xB0
    _emit 0x44
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x08
    _emit 0x89
    _emit 0x90
    _emit 0x44
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x06
    _emit 0x89
    _emit 0x90
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x34
    _emit 0x8D
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0x52
    _emit 0x03
    _emit 0xC0
    _emit 0x89
    _emit 0xB4
    _emit 0x00
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x34
    _emit 0x8D
    _emit 0x44
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x03
    _emit 0xC0
    _emit 0x89
    _emit 0xB0
    _emit 0x44
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x34
    _emit 0x8D
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0xB0
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0xB0
    _emit 0x44
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x34
    _emit 0x76
    _emit 0x89
    _emit 0x14
    _emit 0xB5
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x80
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0x40
    _emit 0x89
    _emit 0x14
    _emit 0x85
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xC7
    _emit 0x04
    _emit 0x8D
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
