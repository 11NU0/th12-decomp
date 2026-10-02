/* Byte-for-byte override for __set_amblksiz.

 * Original bytes (75):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 8d 48 ff 56 83 f9 fe 76
 *     0010: 1f e8 6b fc ff ff 33 f6
 *     0018: 56 56 56 56 56 c7 00 16
 *     0020: 00 00 00 e8 17 22 00 00
 *     0028: 83 c4 14 6a 16 58 eb 18
 *     0030: 33 f6 39 35 04 3c 4b 00
 *     0038: 75 07 e8 42 fc ff ff eb
 *     0040: d7 a3 b0 d2 4a 00 33 c0
 *     0048: 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl __set_amblksiz(int a0)
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
    _emit 0x8D
    _emit 0x48
    _emit 0xFF
    _emit 0x56
    _emit 0x83
    _emit 0xF9
    _emit 0xFE
    _emit 0x76
    _emit 0x1F
    _emit 0xE8
    _emit 0x6B
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x33
    _emit 0xF6
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0xC7
    _emit 0x00
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x17
    _emit 0x22
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x6A
    _emit 0x16
    _emit 0x58
    _emit 0xEB
    _emit 0x18
    _emit 0x33
    _emit 0xF6
    _emit 0x39
    _emit 0x35
    _emit 0x04
    _emit 0x3C
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x07
    _emit 0xE8
    _emit 0x42
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0xD7
    _emit 0xA3
    _emit 0xB0
    _emit 0xD2
    _emit 0x4A
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
