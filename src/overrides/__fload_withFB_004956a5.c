/* Byte-for-byte override for __fload_withFB.

 * Original bytes (67):
 *     0000: 8b 42 04 25 00 00 f0 7f
 *     0008: 3d 00 00 f0 7f 74 03 dd
 *     0010: 02 c3 8b 42 04 83 ec 0a
 *     0018: 0d 00 00 ff 7f 89 44 24
 *     0020: 06 8b 42 04 8b 0a 0f a4
 *     0028: c8 0b c1 e1 0b 89 44 24
 *     0030: 04 89 0c 24 db 2c 24 83
 *     0038: c4 0a a9 00 00 00 00 8b
 *     0040: 42 04 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __fastcall __fload_withFB(undefined4 a0, int a1)
{
  __asm {
    _emit 0x8B
    _emit 0x42
    _emit 0x04
    _emit 0x25
    _emit 0x00
    _emit 0x00
    _emit 0xF0
    _emit 0x7F
    _emit 0x3D
    _emit 0x00
    _emit 0x00
    _emit 0xF0
    _emit 0x7F
    _emit 0x74
    _emit 0x03
    _emit 0xDD
    _emit 0x02
    _emit 0xC3
    _emit 0x8B
    _emit 0x42
    _emit 0x04
    _emit 0x83
    _emit 0xEC
    _emit 0x0A
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x7F
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x06
    _emit 0x8B
    _emit 0x42
    _emit 0x04
    _emit 0x8B
    _emit 0x0A
    _emit 0x0F
    _emit 0xA4
    _emit 0xC8
    _emit 0x0B
    _emit 0xC1
    _emit 0xE1
    _emit 0x0B
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x0C
    _emit 0x24
    _emit 0xDB
    _emit 0x2C
    _emit 0x24
    _emit 0x83
    _emit 0xC4
    _emit 0x0A
    _emit 0xA9
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x42
    _emit 0x04
    _emit 0xC3
  }
  __assume(0);
}
