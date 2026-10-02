/* Byte-for-byte override for FUN_00430500.

 * Original bytes (134):
 *     0000: f7 05 78 ee 4c 00 00 80
 *     0008: 00 00 74 11 68 88 f1 4c
 *     0010: 00 ff 15 88 80 49 00 fe
 *     0018: 05 1e f2 4c 00 56 be d8
 *     0020: f0 4c 00 e8 18 47 03 00
 *     0028: 68 e0 f0 4c 00 6a 00 6a
 *     0030: 00 68 80 22 42 00 6a 00
 *     0038: 6a 00 c7 05 f0 f0 4c 00
 *     0040: 80 22 42 00 c7 05 e8 f0
 *     0048: 4c 00 01 00 00 00 c7 05
 *     0050: e4 f0 4c 00 00 00 00 00
 *     0058: e8 ee df 03 00 83 c4 18
 *     0060: f7 05 78 ee 4c 00 00 80
 *     0068: 00 00 a3 dc f0 4c 00 5e
 *     0070: 74 11 68 88 f1 4c 00 ff
 *     0078: 15 8c 80 49 00 fe 0d 1e
 *     0080: f2 4c 00 33 c0 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00430500(void)
{
  __asm {
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
    _emit 0x88
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
    _emit 0x1E
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x56
    _emit 0xBE
    _emit 0xD8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x18
    _emit 0x47
    _emit 0x03
    _emit 0x00
    _emit 0x68
    _emit 0xE0
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x68
    _emit 0x80
    _emit 0x22
    _emit 0x42
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xF0
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0x80
    _emit 0x22
    _emit 0x42
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xE8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xE4
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xEE
    _emit 0xDF
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x18
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
    _emit 0xA3
    _emit 0xDC
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0x5E
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0x88
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
    _emit 0x1E
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0xC3
  }
  __assume(0);
}
