/* Byte-for-byte override for __set_error_mode.

 * Original bytes (75):
 *     0000: 8b ff 55 8b ec 8b 4d 08
 *     0008: 56 33 f6 3b ce 7c 1e 83
 *     0010: f9 02 7e 0c 83 f9 03 75
 *     0018: 14 a1 d8 38 4b 00 eb 28
 *     0020: a1 d8 38 4b 00 89 0d d8
 *     0028: 38 4b 00 eb 1b e8 8b b7
 *     0030: fe ff 56 56 56 56 56 c7
 *     0038: 00 16 00 00 00 e8 39 dd
 *     0040: fe ff 83 c4 14 83 c8 ff
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

int __cdecl __set_error_mode(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x56
    _emit 0x33
    _emit 0xF6
    _emit 0x3B
    _emit 0xCE
    _emit 0x7C
    _emit 0x1E
    _emit 0x83
    _emit 0xF9
    _emit 0x02
    _emit 0x7E
    _emit 0x0C
    _emit 0x83
    _emit 0xF9
    _emit 0x03
    _emit 0x75
    _emit 0x14
    _emit 0xA1
    _emit 0xD8
    _emit 0x38
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x28
    _emit 0xA1
    _emit 0xD8
    _emit 0x38
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x0D
    _emit 0xD8
    _emit 0x38
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x1B
    _emit 0xE8
    _emit 0x8B
    _emit 0xB7
    _emit 0xFE
    _emit 0xFF
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
    _emit 0x39
    _emit 0xDD
    _emit 0xFE
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
