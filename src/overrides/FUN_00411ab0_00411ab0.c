/* Byte-for-byte override for FUN_00411ab0.

 * Original bytes (78):
 *     0000: 53 56 8b f0 8b 8e ec 00
 *     0008: 00 00 8b 5e 70 83 c1 1c
 *     0010: e8 9b e3 04 00 8b 8e ec
 *     0018: 00 00 00 89 84 8e 80 00
 *     0020: 00 00 83 66 74 fb 8b 35
 *     0028: b8 43 4b 00 8b 96 bc 8f
 *     0030: 01 00 81 c6 bc 8f 01 00
 *     0038: 52 bb 01 00 00 00 e8 7d
 *     0040: fe 04 00 c7 06 00 00 00
 *     0048: 00 5e 33 c0 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00411ab0(void)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0xF0
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
    _emit 0x9B
    _emit 0xE3
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
    _emit 0x7D
    _emit 0xFE
    _emit 0x04
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
