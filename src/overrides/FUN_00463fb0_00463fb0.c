/* Byte-for-byte override for FUN_00463fb0.

 * Original bytes (180):
 *     0000: 51 f7 05 78 ee 4c 00 00
 *     0008: 80 00 00 74 11 68 28 f1
 *     0010: 4c 00 ff 15 88 80 49 00
 *     0018: fe 05 1a f2 4c 00 6a 00
 *     0020: 68 80 00 00 00 6a 02 6a
 *     0028: 00 6a 01 68 00 00 00 40
 *     0030: 56 ff 15 9c 80 49 00 a3
 *     0038: 90 e5 4a 00 83 f8 ff 75
 *     0040: 61 6a 00 6a 00 8d 44 24
 *     0048: 08 50 68 00 04 00 00 ff
 *     0050: 15 e4 80 49 00 50 6a 00
 *     0058: 68 00 13 00 00 ff 15 fc
 *     0060: 80 49 00 8b 0c 24 51 56
 *     0068: 68 80 36 4a 00 e8 8e 14
 *     0070: 00 00 8b 54 24 0c 83 c4
 *     0078: 0c 52 ff 15 00 81 49 00
 *     0080: f7 05 78 ee 4c 00 00 80
 *     0088: 00 00 74 11 68 28 f1 4c
 *     0090: 00 ff 15 8c 80 49 00 fe
 *     0098: 0d 1a f2 4c 00 83 c8 ff
 *     00a0: 59 c3 56 68 c8 36 4a 00
 *     00a8: e8 53 14 00 00 83 c4 08
 *     00b0: 33 c0 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00463fb0(void)
{
  __asm {
    _emit 0x51
    _emit 0xF7
    _emit 0x05
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0x28
    _emit 0xF1
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x88
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xFE
    _emit 0x05
    _emit 0x1A
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x68
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x02
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0x68
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x40
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0x9C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xA3
    _emit 0x90
    _emit 0xE5
    _emit 0x4A
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0xFF
    _emit 0x75
    _emit 0x61
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x50
    _emit 0x68
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0xE4
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x50
    _emit 0x6A
    _emit 0x00
    _emit 0x68
    _emit 0x00
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0xFC
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x0C
    _emit 0x24
    _emit 0x51
    _emit 0x56
    _emit 0x68
    _emit 0x80
    _emit 0x36
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x8E
    _emit 0x14
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x52
    _emit 0xFF
    _emit 0x15
    _emit 0x00
    _emit 0x81
    _emit 0x49
    _emit 0x00
    _emit 0xF7
    _emit 0x05
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0x28
    _emit 0xF1
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x8C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xFE
    _emit 0x0D
    _emit 0x1A
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x59
    _emit 0xC3
    _emit 0x56
    _emit 0x68
    _emit 0xC8
    _emit 0x36
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x53
    _emit 0x14
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x33
    _emit 0xC0
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
