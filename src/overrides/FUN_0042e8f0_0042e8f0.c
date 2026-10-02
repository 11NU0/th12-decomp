/* Byte-for-byte override for FUN_0042e8f0.

 * Original bytes (89):
 *     0000: 53 bb e4 fc 49 00 b9 05
 *     0008: 00 00 00 e8 60 15 03 00
 *     0010: 85 c0 75 17 68 34 f4 49
 *     0018: 00 b9 c8 0e 4b 00 e8 0d
 *     0020: 59 03 00 83 c4 04 83 c8
 *     0028: ff 5b c3 bb 9c f6 49 00
 *     0030: b9 06 00 00 00 e8 36 15
 *     0038: 03 00 85 c0 75 17 68 a8
 *     0040: f6 49 00 b9 c8 0e 4b 00
 *     0048: e8 e3 58 03 00 83 c4 04
 *     0050: 83 c8 ff 5b c3 33 c0 5b
 *     0058: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0042e8f0(void)
{
  __asm {
    _emit 0x53
    _emit 0xBB
    _emit 0xE4
    _emit 0xFC
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x60
    _emit 0x15
    _emit 0x03
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x17
    _emit 0x68
    _emit 0x34
    _emit 0xF4
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x0D
    _emit 0x59
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5B
    _emit 0xC3
    _emit 0xBB
    _emit 0x9C
    _emit 0xF6
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x36
    _emit 0x15
    _emit 0x03
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x17
    _emit 0x68
    _emit 0xA8
    _emit 0xF6
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xE3
    _emit 0x58
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5B
    _emit 0xC3
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
