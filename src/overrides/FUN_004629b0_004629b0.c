/* Byte-for-byte override for FUN_004629b0.

 * Original bytes (105):
 *     0000: 83 ec 34 56 8b 35 9c 82
 *     0008: 49 00 8d 44 24 04 50 6a
 *     0010: 00 c7 44 24 0c 34 00 00
 *     0018: 00 c7 44 24 10 ff 00 00
 *     0020: 00 ff d6 85 c0 74 29 8d
 *     0028: 4c 24 04 51 6a 01 ff d6
 *     0030: 85 c0 74 1c 68 70 35 4a
 *     0038: 00 b9 c8 0e 4b 00 e8 2d
 *     0040: 18 00 00 83 c4 04 b8 01
 *     0048: 00 00 00 5e 83 c4 34 c3
 *     0050: 68 94 01 00 00 68 70 e5
 *     0058: 4c 00 6a 00 ff 15 8c 82
 *     0060: 49 00 33 c0 5e 83 c4 34
 *     0068: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_004629b0(void)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x34
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0x9C
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x50
    _emit 0x6A
    _emit 0x00
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x34
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD6
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x29
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x51
    _emit 0x6A
    _emit 0x01
    _emit 0xFF
    _emit 0xD6
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x1C
    _emit 0x68
    _emit 0x70
    _emit 0x35
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x2D
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x34
    _emit 0xC3
    _emit 0x68
    _emit 0x94
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0x70
    _emit 0xE5
    _emit 0x4C
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x8C
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x34
    _emit 0xC3
  }
  __assume(0);
}
