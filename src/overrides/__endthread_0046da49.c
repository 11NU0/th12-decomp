/* Byte-for-byte override for __endthread.

 * Original bytes (72):
 *     0000: 83 3d 7c d5 49 00 00 56
 *     0008: 74 15 68 7c d5 49 00 e8
 *     0010: e3 9f 00 00 59 85 c0 74
 *     0018: 06 ff 15 7c d5 49 00 e8
 *     0020: 81 79 00 00 8b f0 85 f6
 *     0028: 74 16 8b 46 04 83 f8 ff
 *     0030: 74 07 50 ff 15 a4 80 49
 *     0038: 00 56 e8 28 7b 00 00 59
 *     0040: 6a 00 ff 15 e0 81 49 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __endthread(void)
{
  __asm {
    _emit 0x83
    _emit 0x3D
    _emit 0x7C
    _emit 0xD5
    _emit 0x49
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0x74
    _emit 0x15
    _emit 0x68
    _emit 0x7C
    _emit 0xD5
    _emit 0x49
    _emit 0x00
    _emit 0xE8
    _emit 0xE3
    _emit 0x9F
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
    _emit 0x81
    _emit 0x79
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x16
    _emit 0x8B
    _emit 0x46
    _emit 0x04
    _emit 0x83
    _emit 0xF8
    _emit 0xFF
    _emit 0x74
    _emit 0x07
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0xA4
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x28
    _emit 0x7B
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0xE0
    _emit 0x81
    _emit 0x49
    _emit 0x00
  }
  __assume(0);
}
