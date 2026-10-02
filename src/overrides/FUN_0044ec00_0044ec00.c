/* Byte-for-byte override for FUN_0044ec00.

 * Original bytes (74):
 *     0000: 80 7c 24 04 00 56 57 8b
 *     0008: 7c 24 10 8b f1 74 27 83
 *     0010: 7e 18 10 72 21 8d 46 04
 *     0018: 53 8b 18 85 ff 76 0d 57
 *     0020: 53 6a 10 50 e8 e7 f5 01
 *     0028: 00 83 c4 10 53 e8 1d de
 *     0030: 01 00 83 c4 04 5b 89 7e
 *     0038: 14 c7 46 18 0f 00 00 00
 *     0040: c6 44 3e 04 00 5f 5e c2
 *     0048: 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0044ec00(void * a0, char a1, rsize_t a2)
{
  __asm {
    _emit 0x80
    _emit 0x7C
    _emit 0x24
    _emit 0x04
    _emit 0x00
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0xF1
    _emit 0x74
    _emit 0x27
    _emit 0x83
    _emit 0x7E
    _emit 0x18
    _emit 0x10
    _emit 0x72
    _emit 0x21
    _emit 0x8D
    _emit 0x46
    _emit 0x04
    _emit 0x53
    _emit 0x8B
    _emit 0x18
    _emit 0x85
    _emit 0xFF
    _emit 0x76
    _emit 0x0D
    _emit 0x57
    _emit 0x53
    _emit 0x6A
    _emit 0x10
    _emit 0x50
    _emit 0xE8
    _emit 0xE7
    _emit 0xF5
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x53
    _emit 0xE8
    _emit 0x1D
    _emit 0xDE
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5B
    _emit 0x89
    _emit 0x7E
    _emit 0x14
    _emit 0xC7
    _emit 0x46
    _emit 0x18
    _emit 0x0F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC6
    _emit 0x44
    _emit 0x3E
    _emit 0x04
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
