/* Byte-for-byte override for FUN_00495675.

 * Original bytes (23):
 *     0000: 8b 54 24 04 81 e2 00 03
 *     0008: 00 00 83 ca 7f 66 89 54
 *     0010: 24 06 d9 6c 24 06 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00495675(undefined4 a0)
{
  __asm {
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x81
    _emit 0xE2
    _emit 0x00
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xCA
    _emit 0x7F
    _emit 0x66
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x06
    _emit 0xD9
    _emit 0x6C
    _emit 0x24
    _emit 0x06
    _emit 0xC3
  }
  __assume(0);
}
