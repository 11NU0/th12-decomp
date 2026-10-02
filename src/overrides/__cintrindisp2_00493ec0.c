/* Byte-for-byte override for __cintrindisp2.

 * Original bytes (62):
 *     0000: 55 8b ec 81 c4 30 fd ff
 *     0008: ff 53 9b d9 bd 5c ff ff
 *     0010: ff 9b 83 3d a0 37 4b 00
 *     0018: 00 74 14 e8 c7 02 00 00
 *     0020: 80 8d 38 fd ff ff 03 e8
 *     0028: 9e 00 00 00 5b c9 c3 d9
 *     0030: c9 dd 95 7a ff ff ff d9
 *     0038: c9 dd 55 82 eb dd
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall __cintrindisp2(undefined4 a0, int a1)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x81
    _emit 0xC4
    _emit 0x30
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x53
    _emit 0x9B
    _emit 0xD9
    _emit 0xBD
    _emit 0x5C
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x9B
    _emit 0x83
    _emit 0x3D
    _emit 0xA0
    _emit 0x37
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x14
    _emit 0xE8
    _emit 0xC7
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x8D
    _emit 0x38
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x03
    _emit 0xE8
    _emit 0x9E
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0xC9
    _emit 0xC3
    _emit 0xD9
    _emit 0xC9
    _emit 0xDD
    _emit 0x95
    _emit 0x7A
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xD9
    _emit 0xC9
    _emit 0xDD
    _emit 0x55
    _emit 0x82
    _emit 0xEB
    _emit 0xDD
  }
  __assume(0);
}
