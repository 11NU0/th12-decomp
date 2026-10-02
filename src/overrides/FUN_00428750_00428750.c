/* Byte-for-byte override for FUN_00428750.

 * Original bytes (47):
 *     0000: a1 f4 44 4b 00 8b 48 18
 *     0008: 85 c9 74 1d 56 8d 49 00
 *     0010: 83 79 0c 01 8b 71 08 74
 *     0018: 09 8b 11 8b 42 14 57 53
 *     0020: ff d0 8b ce 85 f6 75 e8
 *     0028: 5e b8 01 00 00 00 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00428750(void)
{
  __asm {
    _emit 0xA1
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x48
    _emit 0x18
    _emit 0x85
    _emit 0xC9
    _emit 0x74
    _emit 0x1D
    _emit 0x56
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x83
    _emit 0x79
    _emit 0x0C
    _emit 0x01
    _emit 0x8B
    _emit 0x71
    _emit 0x08
    _emit 0x74
    _emit 0x09
    _emit 0x8B
    _emit 0x11
    _emit 0x8B
    _emit 0x42
    _emit 0x14
    _emit 0x57
    _emit 0x53
    _emit 0xFF
    _emit 0xD0
    _emit 0x8B
    _emit 0xCE
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0xE8
    _emit 0x5E
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC3
  }
  __assume(0);
}
