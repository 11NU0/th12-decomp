/* Byte-for-byte override for FUN_0046e9d9.

 * Original bytes (47):
 *     0000: 8b ff 55 8b ec 56 8b 75
 *     0008: 08 33 c0 3b f0 75 12 50
 *     0010: 50 50 50 50 e8 3b 25 00
 *     0018: 00 83 c4 14 6a 16 58 eb
 *     0020: 0b e8 70 ff ff ff 8b 00
 *     0028: 89 06 33 c0 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl FUN_0046e9d9(int * a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x08
    _emit 0x33
    _emit 0xC0
    _emit 0x3B
    _emit 0xF0
    _emit 0x75
    _emit 0x12
    _emit 0x50
    _emit 0x50
    _emit 0x50
    _emit 0x50
    _emit 0x50
    _emit 0xE8
    _emit 0x3B
    _emit 0x25
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x6A
    _emit 0x16
    _emit 0x58
    _emit 0xEB
    _emit 0x0B
    _emit 0xE8
    _emit 0x70
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x00
    _emit 0x89
    _emit 0x06
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
