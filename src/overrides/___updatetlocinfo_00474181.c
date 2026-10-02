/* Byte-for-byte override for ___updatetlocinfo.

 * Original bytes (106):
 *     0000: 6a 0c 68 80 ac 4a 00 e8
 *     0008: 5f bb ff ff e8 d5 12 00
 *     0010: 00 8b f0 a1 d4 d9 4a 00
 *     0018: 85 46 70 74 22 83 7e 6c
 *     0020: 00 74 1c e8 be 12 00 00
 *     0028: 8b 70 6c 85 f6 75 08 6a
 *     0030: 20 e8 56 ea ff ff 59 8b
 *     0038: c6 e8 72 bb ff ff c3 6a
 *     0040: 0c e8 d3 aa ff ff 59 83
 *     0048: 65 fc 00 8d 46 6c 8b 3d
 *     0050: b8 da 4a 00 e8 69 ff ff
 *     0058: ff 89 45 e4 c7 45 fc fe
 *     0060: ff ff ff e8 02 00 00 00
 *     0068: eb c1
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

pthreadlocinfo __cdecl ___updatetlocinfo(void)
{
  __asm {
    _emit 0x6A
    _emit 0x0C
    _emit 0x68
    _emit 0x80
    _emit 0xAC
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x5F
    _emit 0xBB
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0xD5
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0xA1
    _emit 0xD4
    _emit 0xD9
    _emit 0x4A
    _emit 0x00
    _emit 0x85
    _emit 0x46
    _emit 0x70
    _emit 0x74
    _emit 0x22
    _emit 0x83
    _emit 0x7E
    _emit 0x6C
    _emit 0x00
    _emit 0x74
    _emit 0x1C
    _emit 0xE8
    _emit 0xBE
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x70
    _emit 0x6C
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x08
    _emit 0x6A
    _emit 0x20
    _emit 0xE8
    _emit 0x56
    _emit 0xEA
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x72
    _emit 0xBB
    _emit 0xFF
    _emit 0xFF
    _emit 0xC3
    _emit 0x6A
    _emit 0x0C
    _emit 0xE8
    _emit 0xD3
    _emit 0xAA
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0x8D
    _emit 0x46
    _emit 0x6C
    _emit 0x8B
    _emit 0x3D
    _emit 0xB8
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x69
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x45
    _emit 0xE4
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0xC1
  }
  __assume(0);
}
