/* Byte-for-byte override for __vsprintf_s_l.

 * Original bytes (136):
 *     0000: 8b ff 55 8b ec 53 33 db
 *     0008: 39 5d 10 75 1d e8 2a c4
 *     0010: ff ff 53 53 53 53 53 c7
 *     0018: 00 16 00 00 00 e8 d8 e9
 *     0020: ff ff 83 c4 14 83 c8 ff
 *     0028: eb 5b 56 8b 75 08 3b f3
 *     0030: 74 05 39 5d 0c 77 0d e8
 *     0038: 00 c4 ff ff c7 00 16 00
 *     0040: 00 00 eb 30 ff 75 18 ff
 *     0048: 75 14 ff 75 10 ff 75 0c
 *     0050: 56 68 cb c9 47 00 e8 86
 *     0058: fe ff ff 83 c4 18 3b c3
 *     0060: 7d 02 88 1e 83 f8 fe 75
 *     0068: 1b e8 ce c3 ff ff c7 00
 *     0070: 22 00 00 00 53 53 53 53
 *     0078: 53 e8 7c e9 ff ff 83 c4
 *     0080: 14 83 c8 ff 5e 5b 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl __vsprintf_s_l(char * a0, size_t a1, char * a2, _locale_t a3, va_list a4)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x53
    _emit 0x33
    _emit 0xDB
    _emit 0x39
    _emit 0x5D
    _emit 0x10
    _emit 0x75
    _emit 0x1D
    _emit 0xE8
    _emit 0x2A
    _emit 0xC4
    _emit 0xFF
    _emit 0xFF
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0xC7
    _emit 0x00
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xD8
    _emit 0xE9
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0xEB
    _emit 0x5B
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x08
    _emit 0x3B
    _emit 0xF3
    _emit 0x74
    _emit 0x05
    _emit 0x39
    _emit 0x5D
    _emit 0x0C
    _emit 0x77
    _emit 0x0D
    _emit 0xE8
    _emit 0x00
    _emit 0xC4
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x00
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x30
    _emit 0xFF
    _emit 0x75
    _emit 0x18
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0x56
    _emit 0x68
    _emit 0xCB
    _emit 0xC9
    _emit 0x47
    _emit 0x00
    _emit 0xE8
    _emit 0x86
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x18
    _emit 0x3B
    _emit 0xC3
    _emit 0x7D
    _emit 0x02
    _emit 0x88
    _emit 0x1E
    _emit 0x83
    _emit 0xF8
    _emit 0xFE
    _emit 0x75
    _emit 0x1B
    _emit 0xE8
    _emit 0xCE
    _emit 0xC3
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x00
    _emit 0x22
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0xE8
    _emit 0x7C
    _emit 0xE9
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5E
    _emit 0x5B
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
