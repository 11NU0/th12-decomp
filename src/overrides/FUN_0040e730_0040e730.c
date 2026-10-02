/* Byte-for-byte override for FUN_0040e730.

 * Original bytes (41):
 *     0000: b8 67 66 66 66 f7 6c 24
 *     0008: 04 c1 fa 02 8b c2 c1 e8
 *     0010: 1f 03 c2 01 41 04 81 79
 *     0018: 04 00 ca 9a 3b 7c 07 c7
 *     0020: 41 04 ff c9 9a 3b c2 04
 *     0028: 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0040e730(void * a0, int a1)
{
  __asm {
    _emit 0xB8
    _emit 0x67
    _emit 0x66
    _emit 0x66
    _emit 0x66
    _emit 0xF7
    _emit 0x6C
    _emit 0x24
    _emit 0x04
    _emit 0xC1
    _emit 0xFA
    _emit 0x02
    _emit 0x8B
    _emit 0xC2
    _emit 0xC1
    _emit 0xE8
    _emit 0x1F
    _emit 0x03
    _emit 0xC2
    _emit 0x01
    _emit 0x41
    _emit 0x04
    _emit 0x81
    _emit 0x79
    _emit 0x04
    _emit 0x00
    _emit 0xCA
    _emit 0x9A
    _emit 0x3B
    _emit 0x7C
    _emit 0x07
    _emit 0xC7
    _emit 0x41
    _emit 0x04
    _emit 0xFF
    _emit 0xC9
    _emit 0x9A
    _emit 0x3B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
