/* Byte-for-byte override for FUN_00430270.

 * Original bytes (80):
 *     0000: d9 ee d9 05 d0 2e 4b 00
 *     0008: dd e1 df e0 dd d9 f6 c4
 *     0010: 44 7a 08 dd d8 d9 44 24
 *     0018: 04 eb 0f d9 e8 d8 d9 df
 *     0020: e0 f6 c4 05 7b ed d8 7c
 *     0028: 24 04 d9 5c 24 04 57 d9
 *     0030: 44 24 08 e8 38 2f 06 00
 *     0038: 50 6a 05 bf 19 fe 49 00
 *     0040: b8 e8 f4 4c 00 e8 a6 46
 *     0048: 02 00 33 c0 5f c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_00430270(undefined4 a0, undefined4 a1, undefined4 a2)
{
  __asm {
    _emit 0xD9
    _emit 0xEE
    _emit 0xD9
    _emit 0x05
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0xDD
    _emit 0xE1
    _emit 0xDF
    _emit 0xE0
    _emit 0xDD
    _emit 0xD9
    _emit 0xF6
    _emit 0xC4
    _emit 0x44
    _emit 0x7A
    _emit 0x08
    _emit 0xDD
    _emit 0xD8
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xEB
    _emit 0x0F
    _emit 0xD9
    _emit 0xE8
    _emit 0xD8
    _emit 0xD9
    _emit 0xDF
    _emit 0xE0
    _emit 0xF6
    _emit 0xC4
    _emit 0x05
    _emit 0x7B
    _emit 0xED
    _emit 0xD8
    _emit 0x7C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0x57
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0xE8
    _emit 0x38
    _emit 0x2F
    _emit 0x06
    _emit 0x00
    _emit 0x50
    _emit 0x6A
    _emit 0x05
    _emit 0xBF
    _emit 0x19
    _emit 0xFE
    _emit 0x49
    _emit 0x00
    _emit 0xB8
    _emit 0xE8
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xA6
    _emit 0x46
    _emit 0x02
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
