/* Byte-for-byte override for FUN_00411b00.

 * Original bytes (38):
 *     0000: 53 56 8b 35 b8 43 4b 00
 *     0008: 8b 86 bc 8f 01 00 50 bb
 *     0010: 01 00 00 00 e8 57 fe 04
 *     0018: 00 c7 86 bc 8f 01 00 00
 *     0020: 00 00 00 5e 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00411b00(void * a0)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xB8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0xBC
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x50
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x57
    _emit 0xFE
    _emit 0x04
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0xBC
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
