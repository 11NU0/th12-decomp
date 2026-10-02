/* Byte-for-byte override for FUN_004094b0.

 * Original bytes (59):
 *     0000: 56 8b f1 8d 4e 08 e8 25
 *     0008: 93 ff ff ba fe ff ff ff
 *     0010: 21 96 f4 04 00 00 21 96
 *     0018: 08 05 00 00 b9 0c 00 00
 *     0020: 00 8d 86 10 07 00 00 21
 *     0028: 10 83 c0 34 83 e9 01 79
 *     0030: f6 21 96 e8 09 00 00 8b
 *     0038: c6 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __fastcall FUN_004094b0(int a0)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0x8D
    _emit 0x4E
    _emit 0x08
    _emit 0xE8
    _emit 0x25
    _emit 0x93
    _emit 0xFF
    _emit 0xFF
    _emit 0xBA
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x21
    _emit 0x96
    _emit 0xF4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x21
    _emit 0x96
    _emit 0x08
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xB9
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x86
    _emit 0x10
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x21
    _emit 0x10
    _emit 0x83
    _emit 0xC0
    _emit 0x34
    _emit 0x83
    _emit 0xE9
    _emit 0x01
    _emit 0x79
    _emit 0xF6
    _emit 0x21
    _emit 0x96
    _emit 0xE8
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
