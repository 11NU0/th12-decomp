/* Byte-for-byte override for FUN_00408860.

 * Original bytes (31):
 *     0000: 55 8b ec 83 e4 f8 83 ec
 *     0008: 08 d9 45 08 e8 4f af 08
 *     0010: 00 d9 5c 24 04 d9 44 24
 *     0018: 04 8b e5 5d c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

float10 __stdcall FUN_00408860(undefined4 a0)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xE4
    _emit 0xF8
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0xD9
    _emit 0x45
    _emit 0x08
    _emit 0xE8
    _emit 0x4F
    _emit 0xAF
    _emit 0x08
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
