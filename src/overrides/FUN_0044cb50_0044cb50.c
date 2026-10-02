/* Byte-for-byte override for FUN_0044cb50.

 * Original bytes (80):
 *     0000: 8d 0c 76 57 8b 3c 8d 40
 *     0008: 45 4b 00 8d 04 52 89 3c
 *     0010: 85 40 45 4b 00 8b 04 8d
 *     0018: 40 45 4b 00 8d 04 40 03
 *     0020: c0 03 c0 5f 39 b0 48 45
 *     0028: 4b 00 75 12 89 90 48 45
 *     0030: 4b 00 c7 04 8d 40 45 4b
 *     0038: 00 00 00 00 00 c3 89 90
 *     0040: 44 45 4b 00 c7 04 8d 40
 *     0048: 45 4b 00 00 00 00 00 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0044cb50(undefined4 a0, int a1)
{
  __asm {
    _emit 0x8D
    _emit 0x0C
    _emit 0x76
    _emit 0x57
    _emit 0x8B
    _emit 0x3C
    _emit 0x8D
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0x52
    _emit 0x89
    _emit 0x3C
    _emit 0x85
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
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
    _emit 0x5F
    _emit 0x39
    _emit 0xB0
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x12
    _emit 0x89
    _emit 0x90
    _emit 0x48
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
    _emit 0xC3
    _emit 0x89
    _emit 0x90
    _emit 0x44
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
    _emit 0xC3
  }
  __assume(0);
}
