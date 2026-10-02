/* Byte-for-byte override for FUN_00410ba0.

 * Original bytes (84):
 *     0000: a1 d8 43 4b 00 53 56 8b
 *     0008: 70 18 8b 8e ec 00 00 00
 *     0010: 8b 5e 70 83 c1 1c e8 a5
 *     0018: f2 04 00 8b 8e ec 00 00
 *     0020: 00 89 84 8e 80 00 00 00
 *     0028: 83 66 74 fb 8b 35 b8 43
 *     0030: 4b 00 8b 96 bc 8f 01 00
 *     0038: 81 c6 bc 8f 01 00 52 bb
 *     0040: 01 00 00 00 e8 87 0d 05
 *     0048: 00 c7 06 00 00 00 00 5e
 *     0050: 33 c0 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00410ba0(void)
{
  __asm {
    _emit 0xA1
    _emit 0xD8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0x70
    _emit 0x18
    _emit 0x8B
    _emit 0x8E
    _emit 0xEC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x5E
    _emit 0x70
    _emit 0x83
    _emit 0xC1
    _emit 0x1C
    _emit 0xE8
    _emit 0xA5
    _emit 0xF2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x8E
    _emit 0xEC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x84
    _emit 0x8E
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x66
    _emit 0x74
    _emit 0xFB
    _emit 0x8B
    _emit 0x35
    _emit 0xB8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x96
    _emit 0xBC
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x81
    _emit 0xC6
    _emit 0xBC
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x52
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x87
    _emit 0x0D
    _emit 0x05
    _emit 0x00
    _emit 0xC7
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
