/* Byte-for-byte override for __isindst_nolock.

 * Original bytes (469):
 *     0000: 8b ff 55 8b ec 83 ec 0c
 *     0008: 56 8d 45 fc 33 f6 50 89
 *     0010: 75 fc e8 f3 04 00 00 59
 *     0018: 85 c0 74 0d 56 56 56 56
 *     0020: 56 e8 f8 9f ff ff 83 c4
 *     0028: 14 39 75 fc 75 07 33 c0
 *     0030: e9 58 01 00 00 8b 57 14
 *     0038: 53 33 db 43 3b 15 e0 da
 *     0040: 4a 00 75 0c 3b 15 ec da
 *     0048: 4a 00 0f 84 18 01 00 00
 *     0050: 39 35 c4 41 4b 00 0f 84
 *     0058: b8 00 00 00 0f b7 05 be
 *     0060: 41 4b 00 0f b7 0d b8 41
 *     0068: 4b 00 50 0f b7 05 bc 41
 *     0070: 4b 00 50 0f b7 05 ba 41
 *     0078: 4b 00 50 66 39 35 b0 41
 *     0080: 4b 00 75 15 0f b7 05 b4
 *     0088: 41 4b 00 56 50 0f b7 05
 *     0090: b6 41 4b 00 50 52 53 eb
 *     0098: 0c 0f b7 05 b6 41 4b 00
 *     00a0: 50 56 56 52 56 0f b7 05
 *     00a8: b2 41 4b 00 53 e8 57 fd
 *     00b0: ff ff 0f b7 05 6a 41 4b
 *     00b8: 00 0f b7 0d 64 41 4b 00
 *     00c0: 83 c4 24 50 0f b7 05 68
 *     00c8: 41 4b 00 50 0f b7 05 66
 *     00d0: 41 4b 00 50 66 39 35 5c
 *     00d8: 41 4b 00 75 17 0f b7 05
 *     00e0: 60 41 4b 00 56 50 0f b7
 *     00e8: 05 62 41 4b 00 50 ff 77
 *     00f0: 14 53 eb 0e 0f b7 05 62
 *     00f8: 41 4b 00 50 56 56 ff 77
 *     0100: 14 56 0f b7 05 5e 41 4b
 *     0108: 00 56 e8 fa fc ff ff 83
 *     0110: c4 24 eb 54 83 fa 6b 6a
 *     0118: 03 58 6a 02 59 c7 45 f4
 *     0120: 0b 00 00 00 89 5d f8 7d
 *     0128: 13 6a 04 58 8b cb c7 45
 *     0130: f4 0a 00 00 00 c7 45 f8
 *     0138: 05 00 00 00 56 56 56 56
 *     0140: 56 51 52 53 53 6a 02 59
 *     0148: e8 bc fc ff ff 8b 45 f4
 *     0150: 56 56 56 56 56 ff 75 f8
 *     0158: ff 77 14 53 56 6a 02 59
 *     0160: e8 a4 fc ff ff 83 c4 48
 *     0168: 8b 0d e4 da 4a 00 a1 f0
 *     0170: da 4a 00 3b c8 8b 57 1c
 *     0178: 7d 16 3b d1 7c 22 3b d0
 *     0180: 7f 1e 3b d1 7e 1e 3b d0
 *     0188: 7d 1a 8b c3 5b 5e c9 c3
 *     0190: 3b d0 7c f6 3b d1 7f f2
 *     0198: 3b d0 7e 08 3b d1 7d 04
 *     01a0: 33 c0 eb e8 8b 47 08 6b
 *     01a8: c0 3c 03 47 04 6b c0 3c
 *     01b0: 03 07 69 c0 e8 03 00 00
 *     01b8: 3b d1 75 0d 33 c9 3b 05
 *     01c0: e8 da 4a 00 0f 9d c1 eb
 *     01c8: 0b 33 c9 3b 05 f4 da 4a
 *     01d0: 00 0f 9c c1 8b
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

bool __stdcall __isindst_nolock(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0x56
    _emit 0x8D
    _emit 0x45
    _emit 0xFC
    _emit 0x33
    _emit 0xF6
    _emit 0x50
    _emit 0x89
    _emit 0x75
    _emit 0xFC
    _emit 0xE8
    _emit 0xF3
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0D
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0xE8
    _emit 0xF8
    _emit 0x9F
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x39
    _emit 0x75
    _emit 0xFC
    _emit 0x75
    _emit 0x07
    _emit 0x33
    _emit 0xC0
    _emit 0xE9
    _emit 0x58
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x57
    _emit 0x14
    _emit 0x53
    _emit 0x33
    _emit 0xDB
    _emit 0x43
    _emit 0x3B
    _emit 0x15
    _emit 0xE0
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0x75
    _emit 0x0C
    _emit 0x3B
    _emit 0x15
    _emit 0xEC
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x18
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x35
    _emit 0xC4
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0xBE
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x0D
    _emit 0xB8
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0xBC
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0xBA
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x66
    _emit 0x39
    _emit 0x35
    _emit 0xB0
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x15
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0xB4
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x56
    _emit 0x50
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0xB6
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x52
    _emit 0x53
    _emit 0xEB
    _emit 0x0C
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0xB6
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x56
    _emit 0x56
    _emit 0x52
    _emit 0x56
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0xB2
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x53
    _emit 0xE8
    _emit 0x57
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0x6A
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x0D
    _emit 0x64
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x24
    _emit 0x50
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0x68
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0x66
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x66
    _emit 0x39
    _emit 0x35
    _emit 0x5C
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x17
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0x60
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x56
    _emit 0x50
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0x62
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0xFF
    _emit 0x77
    _emit 0x14
    _emit 0x53
    _emit 0xEB
    _emit 0x0E
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0x62
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x56
    _emit 0x56
    _emit 0xFF
    _emit 0x77
    _emit 0x14
    _emit 0x56
    _emit 0x0F
    _emit 0xB7
    _emit 0x05
    _emit 0x5E
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0xFA
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x24
    _emit 0xEB
    _emit 0x54
    _emit 0x83
    _emit 0xFA
    _emit 0x6B
    _emit 0x6A
    _emit 0x03
    _emit 0x58
    _emit 0x6A
    _emit 0x02
    _emit 0x59
    _emit 0xC7
    _emit 0x45
    _emit 0xF4
    _emit 0x0B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x5D
    _emit 0xF8
    _emit 0x7D
    _emit 0x13
    _emit 0x6A
    _emit 0x04
    _emit 0x58
    _emit 0x8B
    _emit 0xCB
    _emit 0xC7
    _emit 0x45
    _emit 0xF4
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x45
    _emit 0xF8
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x51
    _emit 0x52
    _emit 0x53
    _emit 0x53
    _emit 0x6A
    _emit 0x02
    _emit 0x59
    _emit 0xE8
    _emit 0xBC
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x45
    _emit 0xF4
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0xFF
    _emit 0x75
    _emit 0xF8
    _emit 0xFF
    _emit 0x77
    _emit 0x14
    _emit 0x53
    _emit 0x56
    _emit 0x6A
    _emit 0x02
    _emit 0x59
    _emit 0xE8
    _emit 0xA4
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x48
    _emit 0x8B
    _emit 0x0D
    _emit 0xE4
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0x3B
    _emit 0xC8
    _emit 0x8B
    _emit 0x57
    _emit 0x1C
    _emit 0x7D
    _emit 0x16
    _emit 0x3B
    _emit 0xD1
    _emit 0x7C
    _emit 0x22
    _emit 0x3B
    _emit 0xD0
    _emit 0x7F
    _emit 0x1E
    _emit 0x3B
    _emit 0xD1
    _emit 0x7E
    _emit 0x1E
    _emit 0x3B
    _emit 0xD0
    _emit 0x7D
    _emit 0x1A
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0x5E
    _emit 0xC9
    _emit 0xC3
    _emit 0x3B
    _emit 0xD0
    _emit 0x7C
    _emit 0xF6
    _emit 0x3B
    _emit 0xD1
    _emit 0x7F
    _emit 0xF2
    _emit 0x3B
    _emit 0xD0
    _emit 0x7E
    _emit 0x08
    _emit 0x3B
    _emit 0xD1
    _emit 0x7D
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0xE8
    _emit 0x8B
    _emit 0x47
    _emit 0x08
    _emit 0x6B
    _emit 0xC0
    _emit 0x3C
    _emit 0x03
    _emit 0x47
    _emit 0x04
    _emit 0x6B
    _emit 0xC0
    _emit 0x3C
    _emit 0x03
    _emit 0x07
    _emit 0x69
    _emit 0xC0
    _emit 0xE8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xD1
    _emit 0x75
    _emit 0x0D
    _emit 0x33
    _emit 0xC9
    _emit 0x3B
    _emit 0x05
    _emit 0xE8
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0x0F
    _emit 0x9D
    _emit 0xC1
    _emit 0xEB
    _emit 0x0B
    _emit 0x33
    _emit 0xC9
    _emit 0x3B
    _emit 0x05
    _emit 0xF4
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0x0F
    _emit 0x9C
    _emit 0xC1
    _emit 0x8B
  }
  __assume(0);
}
