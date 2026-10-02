/* Byte-for-byte override for _strcpy_s.

 * Original bytes (104):
 *     0000: 8b ff 55 8b ec 8b 4d 08
 *     0008: 53 33 db 56 57 3b cb 74
 *     0010: 07 8b 7d 0c 3b fb 77 1b
 *     0018: e8 99 46 ff ff 6a 16 5e
 *     0020: 89 30 53 53 53 53 53 e8
 *     0028: 48 6c ff ff 83 c4 14 8b
 *     0030: c6 eb 30 8b 75 10 3b f3
 *     0038: 75 04 88 19 eb da 8b d1
 *     0040: 8a 06 88 02 42 46 3a c3
 *     0048: 74 03 4f 75 f3 3b fb 75
 *     0050: 10 88 19 e8 5e 46 ff ff
 *     0058: 6a 22 59 89 08 8b f1 eb
 *     0060: c1 33 c0 5f 5e 5b 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

errno_t __cdecl _strcpy_s(char * a0, rsize_t a1, char * a2)
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
    _emit 0x53
    _emit 0x33
    _emit 0xDB
    _emit 0x56
    _emit 0x57
    _emit 0x3B
    _emit 0xCB
    _emit 0x74
    _emit 0x07
    _emit 0x8B
    _emit 0x7D
    _emit 0x0C
    _emit 0x3B
    _emit 0xFB
    _emit 0x77
    _emit 0x1B
    _emit 0xE8
    _emit 0x99
    _emit 0x46
    _emit 0xFF
    _emit 0xFF
    _emit 0x6A
    _emit 0x16
    _emit 0x5E
    _emit 0x89
    _emit 0x30
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0xE8
    _emit 0x48
    _emit 0x6C
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x8B
    _emit 0xC6
    _emit 0xEB
    _emit 0x30
    _emit 0x8B
    _emit 0x75
    _emit 0x10
    _emit 0x3B
    _emit 0xF3
    _emit 0x75
    _emit 0x04
    _emit 0x88
    _emit 0x19
    _emit 0xEB
    _emit 0xDA
    _emit 0x8B
    _emit 0xD1
    _emit 0x8A
    _emit 0x06
    _emit 0x88
    _emit 0x02
    _emit 0x42
    _emit 0x46
    _emit 0x3A
    _emit 0xC3
    _emit 0x74
    _emit 0x03
    _emit 0x4F
    _emit 0x75
    _emit 0xF3
    _emit 0x3B
    _emit 0xFB
    _emit 0x75
    _emit 0x10
    _emit 0x88
    _emit 0x19
    _emit 0xE8
    _emit 0x5E
    _emit 0x46
    _emit 0xFF
    _emit 0xFF
    _emit 0x6A
    _emit 0x22
    _emit 0x59
    _emit 0x89
    _emit 0x08
    _emit 0x8B
    _emit 0xF1
    _emit 0xEB
    _emit 0xC1
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
