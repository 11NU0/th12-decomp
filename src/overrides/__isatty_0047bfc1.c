/* Byte-for-byte override for __isatty.

 * Original bytes (100):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 83 f8 fe 75 0f e8 9c 29
 *     0010: ff ff c7 00 09 00 00 00
 *     0018: 33 c0 5d c3 56 33 f6 3b
 *     0020: c6 7c 08 3b 05 08 63 4d
 *     0028: 00 72 1c e8 7e 29 ff ff
 *     0030: 56 56 56 56 56 c7 00 09
 *     0038: 00 00 00 e8 2c 4f ff ff
 *     0040: 83 c4 14 33 c0 eb 1a 8b
 *     0048: c8 83 e0 1f c1 f9 05 8b
 *     0050: 0c 8d 20 63 4d 00 c1 e0
 *     0058: 06 0f be 44 01 04 83 e0
 *     0060: 40 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl __isatty(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x83
    _emit 0xF8
    _emit 0xFE
    _emit 0x75
    _emit 0x0F
    _emit 0xE8
    _emit 0x9C
    _emit 0x29
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x00
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
    _emit 0x56
    _emit 0x33
    _emit 0xF6
    _emit 0x3B
    _emit 0xC6
    _emit 0x7C
    _emit 0x08
    _emit 0x3B
    _emit 0x05
    _emit 0x08
    _emit 0x63
    _emit 0x4D
    _emit 0x00
    _emit 0x72
    _emit 0x1C
    _emit 0xE8
    _emit 0x7E
    _emit 0x29
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0xC7
    _emit 0x00
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x2C
    _emit 0x4F
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x1A
    _emit 0x8B
    _emit 0xC8
    _emit 0x83
    _emit 0xE0
    _emit 0x1F
    _emit 0xC1
    _emit 0xF9
    _emit 0x05
    _emit 0x8B
    _emit 0x0C
    _emit 0x8D
    _emit 0x20
    _emit 0x63
    _emit 0x4D
    _emit 0x00
    _emit 0xC1
    _emit 0xE0
    _emit 0x06
    _emit 0x0F
    _emit 0xBE
    _emit 0x44
    _emit 0x01
    _emit 0x04
    _emit 0x83
    _emit 0xE0
    _emit 0x40
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
