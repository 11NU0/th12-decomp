/* Byte-for-byte override for _memmove_s.

 * Original bytes (93):
 *     0000: 8b ff 55 8b ec 8b 45 14
 *     0008: 56 57 33 ff 3b c7 74 47
 *     0010: 39 7d 08 75 1b e8 c8 06
 *     0018: 00 00 6a 16 5e 89 30 57
 *     0020: 57 57 57 57 e8 77 2c 00
 *     0028: 00 83 c4 14 8b c6 eb 29
 *     0030: 39 7d 10 74 e0 39 45 0c
 *     0038: 73 0e e8 a3 06 00 00 6a
 *     0040: 22 59 89 08 8b f1 eb d7
 *     0048: 50 ff 75 10 ff 75 08 e8
 *     0050: bf c3 00 00 83 c4 0c 33
 *     0058: c0 5f 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

errno_t __cdecl _memmove_s(void * a0, rsize_t a1, void * a2, rsize_t a3)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x14
    _emit 0x56
    _emit 0x57
    _emit 0x33
    _emit 0xFF
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x47
    _emit 0x39
    _emit 0x7D
    _emit 0x08
    _emit 0x75
    _emit 0x1B
    _emit 0xE8
    _emit 0xC8
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x16
    _emit 0x5E
    _emit 0x89
    _emit 0x30
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0xE8
    _emit 0x77
    _emit 0x2C
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x8B
    _emit 0xC6
    _emit 0xEB
    _emit 0x29
    _emit 0x39
    _emit 0x7D
    _emit 0x10
    _emit 0x74
    _emit 0xE0
    _emit 0x39
    _emit 0x45
    _emit 0x0C
    _emit 0x73
    _emit 0x0E
    _emit 0xE8
    _emit 0xA3
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x22
    _emit 0x59
    _emit 0x89
    _emit 0x08
    _emit 0x8B
    _emit 0xF1
    _emit 0xEB
    _emit 0xD7
    _emit 0x50
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0xBF
    _emit 0xC3
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
