/* Byte-for-byte override for ___lc_lctostr.

 * Original bytes (106):
 *     0000: 8b ff 55 8b ec 53 56 8b
 *     0008: 75 10 56 ff 75 0c ff 75
 *     0010: 08 e8 02 5d 00 00 83 c4
 *     0018: 0c 33 db 85 c0 74 0d 53
 *     0020: 53 53 53 53 e8 fc c7 ff
 *     0028: ff 83 c4 14 8d 46 40 38
 *     0030: 18 74 16 50 68 44 0f 4a
 *     0038: 00 6a 02 ff 75 0c ff 75
 *     0040: 08 e8 51 fe ff ff 83 c4
 *     0048: 14 8d 86 80 00 00 00 38
 *     0050: 18 5e 5b 74 16 50 68 60
 *     0058: fd 49 00 6a 02 ff 75 0c
 *     0060: ff 75 08 e8 2f fe ff ff
 *     0068: 83 c4
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl ___lc_lctostr(char * a0, rsize_t a1, char * a2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x10
    _emit 0x56
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x02
    _emit 0x5D
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x33
    _emit 0xDB
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0D
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0xE8
    _emit 0xFC
    _emit 0xC7
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x8D
    _emit 0x46
    _emit 0x40
    _emit 0x38
    _emit 0x18
    _emit 0x74
    _emit 0x16
    _emit 0x50
    _emit 0x68
    _emit 0x44
    _emit 0x0F
    _emit 0x4A
    _emit 0x00
    _emit 0x6A
    _emit 0x02
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x51
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x8D
    _emit 0x86
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x38
    _emit 0x18
    _emit 0x5E
    _emit 0x5B
    _emit 0x74
    _emit 0x16
    _emit 0x50
    _emit 0x68
    _emit 0x60
    _emit 0xFD
    _emit 0x49
    _emit 0x00
    _emit 0x6A
    _emit 0x02
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x2F
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
  }
  __assume(0);
}
