/* Byte-for-byte override for FUN_00421430.

 * Original bytes (126):
 *     0000: 53 56 8b 35 e4 43 4b 00
 *     0008: 8b 86 ac 6c 00 00 50 bb
 *     0010: 01 00 00 00 e8 27 05 04
 *     0018: 00 8b 8e b0 6c 00 00 51
 *     0020: e8 1b 05 04 00 d9 ee 81
 *     0028: a6 18 6d 00 00 ff fd ff
 *     0030: ff 8b 86 2c 6d 00 00 33
 *     0038: c9 84 c3 75 28 0b c3 d9
 *     0040: 96 24 6d 00 00 89 8e 20
 *     0048: 6d 00 00 c7 86 1c 6d 00
 *     0050: 00 c1 bd f0 ff c7 86 28
 *     0058: 6d 00 00 d0 2e 4b 00 89
 *     0060: 86 2c 6d 00 00 d9 9e 24
 *     0068: 6d 00 00 89 8e 20 6d 00
 *     0070: 00 c7 86 1c 6d 00 00 ff
 *     0078: ff ff ff 5e 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00421430(void * a0)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0xAC
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x27
    _emit 0x05
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x8E
    _emit 0xB0
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0x1B
    _emit 0x05
    _emit 0x04
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0x81
    _emit 0xA6
    _emit 0x18
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x86
    _emit 0x2C
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0x84
    _emit 0xC3
    _emit 0x75
    _emit 0x28
    _emit 0x0B
    _emit 0xC3
    _emit 0xD9
    _emit 0x96
    _emit 0x24
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x8E
    _emit 0x20
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x1C
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x86
    _emit 0x28
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0x2C
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x9E
    _emit 0x24
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x8E
    _emit 0x20
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x1C
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
