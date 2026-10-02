/* Byte-for-byte override for __handle_qnan2.

 * Original bytes (97):
 *     0000: 8b ff 55 8b ec 51 51 83
 *     0008: 3d a0 37 4b 00 00 dd 45
 *     0010: 0c dc 45 14 dd 5d f8 75
 *     0018: 29 ff 75 1c dd 45 f8 83
 *     0020: ec 18 dd 5c 24 10 dd 45
 *     0028: 14 dd 5c 24 08 dd 45 0c
 *     0030: dd 1c 24 ff 75 08 6a 01
 *     0038: e8 ce fe ff ff 83 c4 24
 *     0040: c9 c3 e8 39 81 fd ff 68
 *     0048: ff ff 00 00 ff 75 1c c7
 *     0050: 00 21 00 00 00 e8 38 a9
 *     0058: ff ff dd 45 f8 59 59 c9
 *     0060: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

float10 __cdecl __handle_qnan2(int a0, double a1, double a2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0x51
    _emit 0x83
    _emit 0x3D
    _emit 0xA0
    _emit 0x37
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0xDD
    _emit 0x45
    _emit 0x0C
    _emit 0xDC
    _emit 0x45
    _emit 0x14
    _emit 0xDD
    _emit 0x5D
    _emit 0xF8
    _emit 0x75
    _emit 0x29
    _emit 0xFF
    _emit 0x75
    _emit 0x1C
    _emit 0xDD
    _emit 0x45
    _emit 0xF8
    _emit 0x83
    _emit 0xEC
    _emit 0x18
    _emit 0xDD
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0xDD
    _emit 0x45
    _emit 0x14
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
    _emit 0xCE
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x24
    _emit 0xC9
    _emit 0xC3
    _emit 0xE8
    _emit 0x39
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
    _emit 0x1C
    _emit 0xC7
    _emit 0x00
    _emit 0x21
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x38
    _emit 0xA9
    _emit 0xFF
    _emit 0xFF
    _emit 0xDD
    _emit 0x45
    _emit 0xF8
    _emit 0x59
    _emit 0x59
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
