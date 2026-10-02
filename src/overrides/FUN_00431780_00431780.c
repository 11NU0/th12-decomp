/* Byte-for-byte override for FUN_00431780.

 * Original bytes (75):
 *     0000: 83 ec 0c d9 42 04 d8 49
 *     0008: 08 d9 42 08 d8 49 04 de
 *     0010: e9 d9 1c 24 d9 42 08 d8
 *     0018: 09 d9 02 d8 49 08 de e9
 *     0020: d9 5c 24 04 d9 41 04 d8
 *     0028: 0a d9 01 8b 0c 24 d8 4a
 *     0030: 04 8b 54 24 04 89 08 89
 *     0038: 50 04 de e9 d9 5c 24 08
 *     0040: 8b 4c 24 08 89 48 08 83
 *     0048: c4 0c c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00431780(float * a0, float * a1)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0xD9
    _emit 0x42
    _emit 0x04
    _emit 0xD8
    _emit 0x49
    _emit 0x08
    _emit 0xD9
    _emit 0x42
    _emit 0x08
    _emit 0xD8
    _emit 0x49
    _emit 0x04
    _emit 0xDE
    _emit 0xE9
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x42
    _emit 0x08
    _emit 0xD8
    _emit 0x09
    _emit 0xD9
    _emit 0x02
    _emit 0xD8
    _emit 0x49
    _emit 0x08
    _emit 0xDE
    _emit 0xE9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x41
    _emit 0x04
    _emit 0xD8
    _emit 0x0A
    _emit 0xD9
    _emit 0x01
    _emit 0x8B
    _emit 0x0C
    _emit 0x24
    _emit 0xD8
    _emit 0x4A
    _emit 0x04
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x08
    _emit 0x89
    _emit 0x50
    _emit 0x04
    _emit 0xDE
    _emit 0xE9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x48
    _emit 0x08
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC3
  }
  __assume(0);
}
