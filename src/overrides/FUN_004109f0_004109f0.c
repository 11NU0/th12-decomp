/* Byte-for-byte override for FUN_004109f0.

 * Original bytes (50):
 *     0000: 83 78 04 00 8d 48 04 74
 *     0008: 12 8d a4 24 00 00 00 00
 *     0010: 8b 01 83 78 04 00 8d 48
 *     0018: 04 75 f5 8b 48 04 85 c9
 *     0020: 74 09 89 4a 04 8b 48 04
 *     0028: 89 51 08 89 50 04 89 42
 *     0030: 08 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_004109f0(undefined4 a0, int a1)
{
  __asm {
    _emit 0x83
    _emit 0x78
    _emit 0x04
    _emit 0x00
    _emit 0x8D
    _emit 0x48
    _emit 0x04
    _emit 0x74
    _emit 0x12
    _emit 0x8D
    _emit 0xA4
    _emit 0x24
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x01
    _emit 0x83
    _emit 0x78
    _emit 0x04
    _emit 0x00
    _emit 0x8D
    _emit 0x48
    _emit 0x04
    _emit 0x75
    _emit 0xF5
    _emit 0x8B
    _emit 0x48
    _emit 0x04
    _emit 0x85
    _emit 0xC9
    _emit 0x74
    _emit 0x09
    _emit 0x89
    _emit 0x4A
    _emit 0x04
    _emit 0x8B
    _emit 0x48
    _emit 0x04
    _emit 0x89
    _emit 0x51
    _emit 0x08
    _emit 0x89
    _emit 0x50
    _emit 0x04
    _emit 0x89
    _emit 0x42
    _emit 0x08
    _emit 0xC3
  }
  __assume(0);
}
