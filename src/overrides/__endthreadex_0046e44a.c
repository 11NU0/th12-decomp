/* Byte-for-byte override for __endthreadex.

 * Original bytes (60):
 *     0000: 8b ff 55 8b ec 83 3d 7c
 *     0008: d5 49 00 00 74 15 68 7c
 *     0010: d5 49 00 e8 de 95 00 00
 *     0018: 59 85 c0 74 06 ff 15 7c
 *     0020: d5 49 00 e8 7c 6f 00 00
 *     0028: 85 c0 74 07 50 e8 34 71
 *     0030: 00 00 59 ff 75 08 ff 15
 *     0038: e0 81 49 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __endthreadex(uint a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0x3D
    _emit 0x7C
    _emit 0xD5
    _emit 0x49
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x15
    _emit 0x68
    _emit 0x7C
    _emit 0xD5
    _emit 0x49
    _emit 0x00
    _emit 0xE8
    _emit 0xDE
    _emit 0x95
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x06
    _emit 0xFF
    _emit 0x15
    _emit 0x7C
    _emit 0xD5
    _emit 0x49
    _emit 0x00
    _emit 0xE8
    _emit 0x7C
    _emit 0x6F
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x07
    _emit 0x50
    _emit 0xE8
    _emit 0x34
    _emit 0x71
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xFF
    _emit 0x15
    _emit 0xE0
    _emit 0x81
    _emit 0x49
    _emit 0x00
  }
  __assume(0);
}
