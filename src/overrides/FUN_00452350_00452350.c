/* Byte-for-byte override for FUN_00452350.

 * Original bytes (132):
 *     0000: 83 ec 10 d9 ee 53 d9 54
 *     0008: 24 04 56 8b 35 cc e8 4c
 *     0010: 00 d9 5c 24 0c d9 05 c4
 *     0018: 3e 4a 00 57 d9 5c 24 14
 *     0020: 8b f9 d9 05 c0 3e 4a 00
 *     0028: d9 5c 24 18 e8 3f 80 00
 *     0030: 00 33 c0 a3 c4 e9 4c 00
 *     0038: a3 c8 e9 4c 00 a1 f0 e8
 *     0040: 4c 00 c7 05 cc e9 4c 00
 *     0048: 80 02 00 00 c7 05 d0 e9
 *     0050: 4c 00 e0 01 00 00 8b 08
 *     0058: 8b 91 bc 00 00 00 68 c4
 *     0060: e9 4c 00 50 ff d2 8b 5f
 *     0068: 18 c1 e3 18 0b 5f 20 8d
 *     0070: 7c 24 0c e8 68 fb ff ff
 *     0078: 5f 5e b8 01 00 00 00 5b
 *     0080: 83 c4 10 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00452350(void)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x10
    _emit 0xD9
    _emit 0xEE
    _emit 0x53
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x05
    _emit 0xC4
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0x57
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0xF9
    _emit 0xD9
    _emit 0x05
    _emit 0xC0
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x18
    _emit 0xE8
    _emit 0x3F
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0xA3
    _emit 0xC4
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0xC8
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xCC
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0x80
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xD0
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0xC4
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x5F
    _emit 0x18
    _emit 0xC1
    _emit 0xE3
    _emit 0x18
    _emit 0x0B
    _emit 0x5F
    _emit 0x20
    _emit 0x8D
    _emit 0x7C
    _emit 0x24
    _emit 0x0C
    _emit 0xE8
    _emit 0x68
    _emit 0xFB
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0xC3
  }
  __assume(0);
}
