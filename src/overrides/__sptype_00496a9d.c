/* Byte-for-byte override for __sptype.

 * Original bytes (96):
 *     0000: 8b ff 55 8b ec 33 d2 81
 *     0008: 7d 0c 00 00 f0 7f 75 0a
 *     0010: 39 55 08 75 18 33 c0 40
 *     0018: 5d c3 81 7d 0c 00 00 f0
 *     0020: ff 75 0a 39 55 08 75 05
 *     0028: 6a 02 58 5d c3 8b 4d 0e
 *     0030: b8 f8 7f 00 00 23 c8 66
 *     0038: 3b c8 75 04 6a 03 eb ea
 *     0040: b8 f0 7f 00 00 66 3b c8
 *     0048: 75 12 f7 45 0c ff ff 07
 *     0050: 00 75 05 39 55 08 74 04
 *     0058: 6a 04 eb ce 33 c0 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl __sptype(int a0, uint a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xD2
    _emit 0x81
    _emit 0x7D
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0xF0
    _emit 0x7F
    _emit 0x75
    _emit 0x0A
    _emit 0x39
    _emit 0x55
    _emit 0x08
    _emit 0x75
    _emit 0x18
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0x5D
    _emit 0xC3
    _emit 0x81
    _emit 0x7D
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0xF0
    _emit 0xFF
    _emit 0x75
    _emit 0x0A
    _emit 0x39
    _emit 0x55
    _emit 0x08
    _emit 0x75
    _emit 0x05
    _emit 0x6A
    _emit 0x02
    _emit 0x58
    _emit 0x5D
    _emit 0xC3
    _emit 0x8B
    _emit 0x4D
    _emit 0x0E
    _emit 0xB8
    _emit 0xF8
    _emit 0x7F
    _emit 0x00
    _emit 0x00
    _emit 0x23
    _emit 0xC8
    _emit 0x66
    _emit 0x3B
    _emit 0xC8
    _emit 0x75
    _emit 0x04
    _emit 0x6A
    _emit 0x03
    _emit 0xEB
    _emit 0xEA
    _emit 0xB8
    _emit 0xF0
    _emit 0x7F
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x3B
    _emit 0xC8
    _emit 0x75
    _emit 0x12
    _emit 0xF7
    _emit 0x45
    _emit 0x0C
    _emit 0xFF
    _emit 0xFF
    _emit 0x07
    _emit 0x00
    _emit 0x75
    _emit 0x05
    _emit 0x39
    _emit 0x55
    _emit 0x08
    _emit 0x74
    _emit 0x04
    _emit 0x6A
    _emit 0x04
    _emit 0xEB
    _emit 0xCE
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
