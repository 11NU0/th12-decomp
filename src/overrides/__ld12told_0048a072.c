/* Byte-for-byte override for __ld12told.

 * Original bytes (199):
 *     0000: 8b ff 55 8b ec 83 ec 14
 *     0008: 8b 4d 08 0f b7 51 0a 83
 *     0010: 65 f8 00 53 8b 59 06 56
 *     0018: 8b 71 02 0f b7 09 57 8b
 *     0020: fa 81 e2 00 80 00 00 8b
 *     0028: c2 c1 e1 10 ba 00 00 00
 *     0030: 80 81 e7 ff 7f 00 00 89
 *     0038: 5d ec 89 4d f4 85 ca 74
 *     0040: 5f f7 c1 ff ff ff 7f 74
 *     0048: 57 8d 4e 01 33 db 3b ce
 *     0050: 72 05 83 f9 01 73 03 33
 *     0058: db 43 83 65 08 00 89 4d
 *     0060: f0 8b cb 85 c9 74 33 8b
 *     0068: 4d 08 83 65 fc 00 8d 4c
 *     0070: 8d ec 8b 31 8d 5e 01 3b
 *     0078: de 72 05 83 fb 01 73 07
 *     0080: c7 45 fc 01 00 00 00 ff
 *     0088: 4d 08 89 19 8b 4d fc 79
 *     0090: d2 85 c9 74 05 8b da 47
 *     0098: eb 03 8b 5d ec 8b 75 f0
 *     00a0: b9 ff 7f 00 00 66 3b f9
 *     00a8: 75 07 c7 45 f8 01 00 00
 *     00b0: 00 8b 4d 0c 0b c7 5f 89
 *     00b8: 31 5e 89 59 04 66 89 41
 *     00c0: 08 8b 45 f8 5b c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

INTRNCVT_STATUS __cdecl __ld12told(_LDBL12 * a0, _LDOUBLE * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xEC
    _emit 0x14
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x0F
    _emit 0xB7
    _emit 0x51
    _emit 0x0A
    _emit 0x83
    _emit 0x65
    _emit 0xF8
    _emit 0x00
    _emit 0x53
    _emit 0x8B
    _emit 0x59
    _emit 0x06
    _emit 0x56
    _emit 0x8B
    _emit 0x71
    _emit 0x02
    _emit 0x0F
    _emit 0xB7
    _emit 0x09
    _emit 0x57
    _emit 0x8B
    _emit 0xFA
    _emit 0x81
    _emit 0xE2
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC2
    _emit 0xC1
    _emit 0xE1
    _emit 0x10
    _emit 0xBA
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x81
    _emit 0xE7
    _emit 0xFF
    _emit 0x7F
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x5D
    _emit 0xEC
    _emit 0x89
    _emit 0x4D
    _emit 0xF4
    _emit 0x85
    _emit 0xCA
    _emit 0x74
    _emit 0x5F
    _emit 0xF7
    _emit 0xC1
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x7F
    _emit 0x74
    _emit 0x57
    _emit 0x8D
    _emit 0x4E
    _emit 0x01
    _emit 0x33
    _emit 0xDB
    _emit 0x3B
    _emit 0xCE
    _emit 0x72
    _emit 0x05
    _emit 0x83
    _emit 0xF9
    _emit 0x01
    _emit 0x73
    _emit 0x03
    _emit 0x33
    _emit 0xDB
    _emit 0x43
    _emit 0x83
    _emit 0x65
    _emit 0x08
    _emit 0x00
    _emit 0x89
    _emit 0x4D
    _emit 0xF0
    _emit 0x8B
    _emit 0xCB
    _emit 0x85
    _emit 0xC9
    _emit 0x74
    _emit 0x33
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x8D
    _emit 0xEC
    _emit 0x8B
    _emit 0x31
    _emit 0x8D
    _emit 0x5E
    _emit 0x01
    _emit 0x3B
    _emit 0xDE
    _emit 0x72
    _emit 0x05
    _emit 0x83
    _emit 0xFB
    _emit 0x01
    _emit 0x73
    _emit 0x07
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x4D
    _emit 0x08
    _emit 0x89
    _emit 0x19
    _emit 0x8B
    _emit 0x4D
    _emit 0xFC
    _emit 0x79
    _emit 0xD2
    _emit 0x85
    _emit 0xC9
    _emit 0x74
    _emit 0x05
    _emit 0x8B
    _emit 0xDA
    _emit 0x47
    _emit 0xEB
    _emit 0x03
    _emit 0x8B
    _emit 0x5D
    _emit 0xEC
    _emit 0x8B
    _emit 0x75
    _emit 0xF0
    _emit 0xB9
    _emit 0xFF
    _emit 0x7F
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x3B
    _emit 0xF9
    _emit 0x75
    _emit 0x07
    _emit 0xC7
    _emit 0x45
    _emit 0xF8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0x0B
    _emit 0xC7
    _emit 0x5F
    _emit 0x89
    _emit 0x31
    _emit 0x5E
    _emit 0x89
    _emit 0x59
    _emit 0x04
    _emit 0x66
    _emit 0x89
    _emit 0x41
    _emit 0x08
    _emit 0x8B
    _emit 0x45
    _emit 0xF8
    _emit 0x5B
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
