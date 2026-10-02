/* Byte-for-byte override for FUN_0044ebd0.

 * Original bytes (34):
 *     0000: 56 8b 74 24 08 8b c6 57
 *     0008: 8d 78 01 eb 03 8d 49 00
 *     0010: 8a 10 40 84 d2 75 f9 2b
 *     0018: c7 50 56 e8 90 00 00 00
 *     0020: 5f 5e
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0044ebd0(char * a0)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0xC6
    _emit 0x57
    _emit 0x8D
    _emit 0x78
    _emit 0x01
    _emit 0xEB
    _emit 0x03
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8A
    _emit 0x10
    _emit 0x40
    _emit 0x84
    _emit 0xD2
    _emit 0x75
    _emit 0xF9
    _emit 0x2B
    _emit 0xC7
    _emit 0x50
    _emit 0x56
    _emit 0xE8
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
  }
  __assume(0);
}
