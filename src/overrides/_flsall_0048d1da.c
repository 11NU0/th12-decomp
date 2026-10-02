/* Byte-for-byte override for _flsall.

 * Original bytes (187):
 *     0000: 6a 14 68 20 b1 4a 00 e8
 *     0008: 06 2b fe ff 33 ff 89 7d
 *     0010: e4 89 7d dc 6a 01 e8 a5
 *     0018: 1a fe ff 59 89 7d fc 33
 *     0020: f6 89 75 e0 3b 35 00 63
 *     0028: 4d 00 0f 8d 83 00 00 00
 *     0030: a1 e0 52 4d 00 8d 04 b0
 *     0038: 39 38 74 5e 8b 00 f6 40
 *     0040: 0c 83 74 56 50 56 e8 18
 *     0048: ef fe ff 59 59 33 d2 42
 *     0050: 89 55 fc a1 e0 52 4d 00
 *     0058: 8b 04 b0 8b 48 0c f6 c1
 *     0060: 83 74 2f 39 55 08 75 11
 *     0068: 50 e8 4a ff ff ff 59 83
 *     0070: f8 ff 74 1e ff 45 e4 eb
 *     0078: 19 39 7d 08 75 14 f6 c1
 *     0080: 02 74 0f 50 e8 2f ff ff
 *     0088: ff 59 83 f8 ff 75 03 09
 *     0090: 45 dc 89 7d fc e8 08 00
 *     0098: 00 00 46 eb 84 33 ff 8b
 *     00a0: 75 e0 a1 e0 52 4d 00 ff
 *     00a8: 34 b0 56 e8 21 ef fe ff
 *     00b0: 59 59 c3 c7 45 fc fe ff
 *     00b8: ff ff e8
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl _flsall(int a0)
{
  __asm {
    _emit 0x6A
    _emit 0x14
    _emit 0x68
    _emit 0x20
    _emit 0xB1
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x06
    _emit 0x2B
    _emit 0xFE
    _emit 0xFF
    _emit 0x33
    _emit 0xFF
    _emit 0x89
    _emit 0x7D
    _emit 0xE4
    _emit 0x89
    _emit 0x7D
    _emit 0xDC
    _emit 0x6A
    _emit 0x01
    _emit 0xE8
    _emit 0xA5
    _emit 0x1A
    _emit 0xFE
    _emit 0xFF
    _emit 0x59
    _emit 0x89
    _emit 0x7D
    _emit 0xFC
    _emit 0x33
    _emit 0xF6
    _emit 0x89
    _emit 0x75
    _emit 0xE0
    _emit 0x3B
    _emit 0x35
    _emit 0x00
    _emit 0x63
    _emit 0x4D
    _emit 0x00
    _emit 0x0F
    _emit 0x8D
    _emit 0x83
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xE0
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0xB0
    _emit 0x39
    _emit 0x38
    _emit 0x74
    _emit 0x5E
    _emit 0x8B
    _emit 0x00
    _emit 0xF6
    _emit 0x40
    _emit 0x0C
    _emit 0x83
    _emit 0x74
    _emit 0x56
    _emit 0x50
    _emit 0x56
    _emit 0xE8
    _emit 0x18
    _emit 0xEF
    _emit 0xFE
    _emit 0xFF
    _emit 0x59
    _emit 0x59
    _emit 0x33
    _emit 0xD2
    _emit 0x42
    _emit 0x89
    _emit 0x55
    _emit 0xFC
    _emit 0xA1
    _emit 0xE0
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x04
    _emit 0xB0
    _emit 0x8B
    _emit 0x48
    _emit 0x0C
    _emit 0xF6
    _emit 0xC1
    _emit 0x83
    _emit 0x74
    _emit 0x2F
    _emit 0x39
    _emit 0x55
    _emit 0x08
    _emit 0x75
    _emit 0x11
    _emit 0x50
    _emit 0xE8
    _emit 0x4A
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x83
    _emit 0xF8
    _emit 0xFF
    _emit 0x74
    _emit 0x1E
    _emit 0xFF
    _emit 0x45
    _emit 0xE4
    _emit 0xEB
    _emit 0x19
    _emit 0x39
    _emit 0x7D
    _emit 0x08
    _emit 0x75
    _emit 0x14
    _emit 0xF6
    _emit 0xC1
    _emit 0x02
    _emit 0x74
    _emit 0x0F
    _emit 0x50
    _emit 0xE8
    _emit 0x2F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x83
    _emit 0xF8
    _emit 0xFF
    _emit 0x75
    _emit 0x03
    _emit 0x09
    _emit 0x45
    _emit 0xDC
    _emit 0x89
    _emit 0x7D
    _emit 0xFC
    _emit 0xE8
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x46
    _emit 0xEB
    _emit 0x84
    _emit 0x33
    _emit 0xFF
    _emit 0x8B
    _emit 0x75
    _emit 0xE0
    _emit 0xA1
    _emit 0xE0
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0xFF
    _emit 0x34
    _emit 0xB0
    _emit 0x56
    _emit 0xE8
    _emit 0x21
    _emit 0xEF
    _emit 0xFE
    _emit 0xFF
    _emit 0x59
    _emit 0x59
    _emit 0xC3
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
  }
  __assume(0);
}
