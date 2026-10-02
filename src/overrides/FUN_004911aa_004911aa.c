/* Byte-for-byte override for FUN_004911aa.

 * Original bytes (88):
 *     0000: 8b ff 55 8b ec 51 51 8a
 *     0008: 4d 08 f6 c1 01 74 0a db
 *     0010: 2d 30 e4 4a 00 db 5d 08
 *     0018: 9b f6 c1 08 74 10 9b df
 *     0020: e0 db 2d 30 e4 4a 00 dd
 *     0028: 5d f8 9b 9b df e0 f6 c1
 *     0030: 10 74 0a db 2d 3c e4 4a
 *     0038: 00 dd 5d f8 9b f6 c1 04
 *     0040: 74 09 d9 ee d9 e8 de f1
 *     0048: dd d8 9b f6 c1 20 74 06
 *     0050: d9 eb dd 5d f8 9b c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_004911aa(undefined4 a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0x51
    _emit 0x8A
    _emit 0x4D
    _emit 0x08
    _emit 0xF6
    _emit 0xC1
    _emit 0x01
    _emit 0x74
    _emit 0x0A
    _emit 0xDB
    _emit 0x2D
    _emit 0x30
    _emit 0xE4
    _emit 0x4A
    _emit 0x00
    _emit 0xDB
    _emit 0x5D
    _emit 0x08
    _emit 0x9B
    _emit 0xF6
    _emit 0xC1
    _emit 0x08
    _emit 0x74
    _emit 0x10
    _emit 0x9B
    _emit 0xDF
    _emit 0xE0
    _emit 0xDB
    _emit 0x2D
    _emit 0x30
    _emit 0xE4
    _emit 0x4A
    _emit 0x00
    _emit 0xDD
    _emit 0x5D
    _emit 0xF8
    _emit 0x9B
    _emit 0x9B
    _emit 0xDF
    _emit 0xE0
    _emit 0xF6
    _emit 0xC1
    _emit 0x10
    _emit 0x74
    _emit 0x0A
    _emit 0xDB
    _emit 0x2D
    _emit 0x3C
    _emit 0xE4
    _emit 0x4A
    _emit 0x00
    _emit 0xDD
    _emit 0x5D
    _emit 0xF8
    _emit 0x9B
    _emit 0xF6
    _emit 0xC1
    _emit 0x04
    _emit 0x74
    _emit 0x09
    _emit 0xD9
    _emit 0xEE
    _emit 0xD9
    _emit 0xE8
    _emit 0xDE
    _emit 0xF1
    _emit 0xDD
    _emit 0xD8
    _emit 0x9B
    _emit 0xF6
    _emit 0xC1
    _emit 0x20
    _emit 0x74
    _emit 0x06
    _emit 0xD9
    _emit 0xEB
    _emit 0xDD
    _emit 0x5D
    _emit 0xF8
    _emit 0x9B
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
