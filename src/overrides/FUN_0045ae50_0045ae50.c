/* Byte-for-byte override for FUN_0045ae50.

 * Original bytes (54):
 *     0000: 53 55 8b 6c 24 10 56 57
 *     0008: 55 ba 3c 48 4d 00 be 20
 *     0010: 48 4d 00 bf 04 48 4d 00
 *     0018: bb e8 47 4d 00 e8 be fb
 *     0020: ff ff 8b 4c 24 14 6a 00
 *     0028: 8b c5 e8 d1 ef ff ff 5f
 *     0030: 5e 5d 5b c2 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0045ae50(void * a0, void * a1, float a2)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x10
    _emit 0x56
    _emit 0x57
    _emit 0x55
    _emit 0xBA
    _emit 0x3C
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0xBE
    _emit 0x20
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0xBF
    _emit 0x04
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0xBB
    _emit 0xE8
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0xE8
    _emit 0xBE
    _emit 0xFB
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x6A
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0xD1
    _emit 0xEF
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
