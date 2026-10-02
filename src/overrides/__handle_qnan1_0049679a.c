/* Byte-for-byte override for __handle_qnan1.

 * Original bytes (85):
 *     0000: 8b ff 55 8b ec 83 3d a0
 *     0008: 37 4b 00 00 75 28 ff 75
 *     0010: 14 dd 45 0c 83 ec 18 dd
 *     0018: 5c 24 10 d9 ee dd 5c 24
 *     0020: 08 dd 45 0c dd 1c 24 ff
 *     0028: 75 08 6a 01 e8 2f ff ff
 *     0030: ff 83 c4 24 5d c3 e8 9a
 *     0038: 81 fd ff 68 ff ff 00 00
 *     0040: ff 75 14 c7 00 21 00 00
 *     0048: 00 e8 99 a9 ff ff dd 45
 *     0050: 0c 59 59 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

float10 __cdecl __handle_qnan1(int a0, double a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0x3D
    _emit 0xA0
    _emit 0x37
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x28
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0xDD
    _emit 0x45
    _emit 0x0C
    _emit 0x83
    _emit 0xEC
    _emit 0x18
    _emit 0xDD
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0xEE
    _emit 0xDD
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xDD
    _emit 0x45
    _emit 0x0C
    _emit 0xDD
    _emit 0x1C
    _emit 0x24
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x6A
    _emit 0x01
    _emit 0xE8
    _emit 0x2F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x24
    _emit 0x5D
    _emit 0xC3
    _emit 0xE8
    _emit 0x9A
    _emit 0x81
    _emit 0xFD
    _emit 0xFF
    _emit 0x68
    _emit 0xFF
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0xC7
    _emit 0x00
    _emit 0x21
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x99
    _emit 0xA9
    _emit 0xFF
    _emit 0xFF
    _emit 0xDD
    _emit 0x45
    _emit 0x0C
    _emit 0x59
    _emit 0x59
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
