/* Byte-for-byte override for FUN_0040c3b0.

 * Original bytes (207):
 *     0000: 8b 88 0c 09 00 00 83 ec
 *     0008: 0c 3b 88 30 09 00 00 7c
 *     0010: 10 83 a0 28 05 00 00 f5
 *     0018: b8 01 00 00 00 83 c4 0c
 *     0020: c3 d9 80 24 09 00 00 33
 *     0028: d2 d9 05 d0 2e 4b 00 d9
 *     0030: c0 de ca d9 c9 d9 1c 24
 *     0038: d9 80 28 09 00 00 d8 c9
 *     0040: d9 5c 24 04 d8 88 2c 09
 *     0048: 00 00 d9 5c 24 08 d9 80
 *     0050: bc 04 00 00 d8 04 24 d9
 *     0058: 98 bc 04 00 00 d9 80 c0
 *     0060: 04 00 00 d8 44 24 04 d9
 *     0068: 98 c0 04 00 00 d9 44 24
 *     0070: 08 d8 80 c4 04 00 00 d9
 *     0078: 98 c4 04 00 00 8b 88 18
 *     0080: 09 00 00 d9 ee f6 c1 01
 *     0088: 75 29 83 c9 01 d9 90 10
 *     0090: 09 00 00 89 90 0c 09 00
 *     0098: 00 c7 80 08 09 00 00 c1
 *     00a0: bd f0 ff c7 80 14 09 00
 *     00a8: 00 d0 2e 4b 00 89 88 18
 *     00b0: 09 00 00 d9 98 10 09 00
 *     00b8: 00 89 90 0c 09 00 00 c7
 *     00c0: 80 08 09 00 00 ff ff ff
 *     00c8: ff 33 c0 83 c4 0c c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0040c3b0(void)
{
  __asm {
    _emit 0x8B
    _emit 0x88
    _emit 0x0C
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0x3B
    _emit 0x88
    _emit 0x30
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x7C
    _emit 0x10
    _emit 0x83
    _emit 0xA0
    _emit 0x28
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xF5
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC3
    _emit 0xD9
    _emit 0x80
    _emit 0x24
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xD2
    _emit 0xD9
    _emit 0x05
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0xD9
    _emit 0xC0
    _emit 0xDE
    _emit 0xCA
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x80
    _emit 0x28
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xD8
    _emit 0xC9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD8
    _emit 0x88
    _emit 0x2C
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x80
    _emit 0xBC
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD8
    _emit 0x04
    _emit 0x24
    _emit 0xD9
    _emit 0x98
    _emit 0xBC
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x80
    _emit 0xC0
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD8
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x98
    _emit 0xC0
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0xD8
    _emit 0x80
    _emit 0xC4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x98
    _emit 0xC4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x88
    _emit 0x18
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0xF6
    _emit 0xC1
    _emit 0x01
    _emit 0x75
    _emit 0x29
    _emit 0x83
    _emit 0xC9
    _emit 0x01
    _emit 0xD9
    _emit 0x90
    _emit 0x10
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x90
    _emit 0x0C
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x80
    _emit 0x08
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x80
    _emit 0x14
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x88
    _emit 0x18
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x98
    _emit 0x10
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x90
    _emit 0x0C
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x80
    _emit 0x08
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x33
    _emit 0xC0
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC3
  }
  __assume(0);
}
