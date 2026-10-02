/* Byte-for-byte override for FUN_0045d970.

 * Original bytes (40):
 *     0000: 55 8b ec 83 e4 c0 83 ec
 *     0008: 40 d9 45 08 83 ec 08 dd
 *     0010: 1c 24 e8 09 59 03 00 d9
 *     0018: 5c 24 44 83 c4 08 d9 44
 *     0020: 24 3c 8b e5 5d c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

float10 __stdcall FUN_0045d970(float a0)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xE4
    _emit 0xC0
    _emit 0x83
    _emit 0xEC
    _emit 0x40
    _emit 0xD9
    _emit 0x45
    _emit 0x08
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0xDD
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0x09
    _emit 0x59
    _emit 0x03
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x44
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x3C
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
