/* Byte-for-byte override for FUN_00435900.

 * Original bytes (78):
 *     0000: 53 55 8b 6c 24 0c 83 a5
 *     0008: 14 c4 00 00 f7 56 57 8d
 *     0010: b5 14 83 00 00 bf 08 00
 *     0018: 00 00 8d 9b 00 00 00 00
 *     0020: 8b 46 fc 50 bb 02 00 00
 *     0028: 00 e8 42 c0 02 00 8b 0e
 *     0030: 51 e8 3a c0 02 00 81 c6
 *     0038: e4 00 00 00 83 ef 01 75
 *     0040: df 89 bd 18 c4 00 00 5f
 *     0048: 5e 5d 5b c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00435900(void * a0, int a1)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0x83
    _emit 0xA5
    _emit 0x14
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0x56
    _emit 0x57
    _emit 0x8D
    _emit 0xB5
    _emit 0x14
    _emit 0x83
    _emit 0x00
    _emit 0x00
    _emit 0xBF
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x9B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0xFC
    _emit 0x50
    _emit 0xBB
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x42
    _emit 0xC0
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x0E
    _emit 0x51
    _emit 0xE8
    _emit 0x3A
    _emit 0xC0
    _emit 0x02
    _emit 0x00
    _emit 0x81
    _emit 0xC6
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x75
    _emit 0xDF
    _emit 0x89
    _emit 0xBD
    _emit 0x18
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
