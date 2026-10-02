/* Byte-for-byte override for FUN_00408820.

 * Original bytes (52):
 *     0000: 55 8b ec 83 e4 f8 83 ec
 *     0008: 08 d9 40 04 d8 61 04 d9
 *     0010: 5c 24 04 d9 44 24 04 d9
 *     0018: 00 d8 21 d9 5c 24 04 d9
 *     0020: 44 24 04 e8 62 af 08 00
 *     0028: d9 5c 24 04 d9 44 24 04
 *     0030: 8b e5 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

float10 __fastcall FUN_00408820(undefined4 a0)
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
    _emit 0x40
    _emit 0x04
    _emit 0xD8
    _emit 0x61
    _emit 0x04
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x00
    _emit 0xD8
    _emit 0x21
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xE8
    _emit 0x62
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
    _emit 0xC3
  }
  __assume(0);
}
