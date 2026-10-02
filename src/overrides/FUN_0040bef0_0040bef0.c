/* Byte-for-byte override for FUN_0040bef0.

 * Original bytes (258):
 *     0000: d9 ee 56 83 ec 08 d9 54
 *     0008: 24 04 8b f0 d9 1c 24 8d
 *     0010: 8e bc 04 00 00 e8 56 16
 *     0018: 00 00 85 c0 0f 84 dc 00
 *     0020: 00 00 57 33 ff f6 86 00
 *     0028: 08 00 00 01 74 10 8b ce
 *     0030: e8 2b ff ff ff 85 c0 74
 *     0038: 05 bf 01 00 00 00 f6 86
 *     0040: 00 08 00 00 02 74 10 8b
 *     0048: ce e8 52 ff ff ff 85 c0
 *     0050: 74 05 bf 01 00 00 00 f6
 *     0058: 86 00 08 00 00 08 74 0e
 *     0060: e8 8b fe ff ff 85 c0 74
 *     0068: 05 bf 01 00 00 00 f6 86
 *     0070: 00 08 00 00 04 74 0e e8
 *     0078: 04 fe ff ff 85 c0 74 05
 *     0080: bf 01 00 00 00 d9 86 e4
 *     0088: 07 00 00 dc 1d 70 3e 4a
 *     0090: 00 df e0 f6 c4 41 75 0c
 *     0098: d9 86 e4 07 00 00 d9 9e
 *     00a0: d4 04 00 00 d9 86 d4 04
 *     00a8: 00 00 83 ec 08 d9 5c 24
 *     00b0: 04 8d 8e c8 04 00 00 d9
 *     00b8: 86 d8 04 00 00 d9 1c 24
 *     00c0: e8 8b 16 00 00 85 ff 5f
 *     00c8: 74 15 8b 96 44 05 00 00
 *     00d0: ff 86 f8 07 00 00 85 d2
 *     00d8: 7c 05 e8 c1 7d 04 00 8b
 *     00e0: 86 f8 07 00 00 3b 86 fc
 *     00e8: 07 00 00 7c 11 81 a6 28
 *     00f0: 05 00 00 ff fe ff ff b8
 *     00f8: 01 00 00 00 5e c3 33 c0
 *     0100: 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0040bef0(void)
{
  __asm {
    _emit 0xD9
    _emit 0xEE
    _emit 0x56
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0xF0
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0x8D
    _emit 0x8E
    _emit 0xBC
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x56
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x84
    _emit 0xDC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x33
    _emit 0xFF
    _emit 0xF6
    _emit 0x86
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xCE
    _emit 0xE8
    _emit 0x2B
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x05
    _emit 0xBF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0x86
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x02
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xCE
    _emit 0xE8
    _emit 0x52
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x05
    _emit 0xBF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0x86
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x74
    _emit 0x0E
    _emit 0xE8
    _emit 0x8B
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x05
    _emit 0xBF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0x86
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x04
    _emit 0x74
    _emit 0x0E
    _emit 0xE8
    _emit 0x04
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x05
    _emit 0xBF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xE4
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xDC
    _emit 0x1D
    _emit 0x70
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0xDF
    _emit 0xE0
    _emit 0xF6
    _emit 0xC4
    _emit 0x41
    _emit 0x75
    _emit 0x0C
    _emit 0xD9
    _emit 0x86
    _emit 0xE4
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x9E
    _emit 0xD4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xD4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0x8D
    _emit 0x8E
    _emit 0xC8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xD8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0x8B
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xFF
    _emit 0x5F
    _emit 0x74
    _emit 0x15
    _emit 0x8B
    _emit 0x96
    _emit 0x44
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x86
    _emit 0xF8
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xD2
    _emit 0x7C
    _emit 0x05
    _emit 0xE8
    _emit 0xC1
    _emit 0x7D
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0xF8
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0x86
    _emit 0xFC
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x7C
    _emit 0x11
    _emit 0x81
    _emit 0xA6
    _emit 0x28
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0xC3
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
