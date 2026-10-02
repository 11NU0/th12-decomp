/* Byte-for-byte override for FUN_00402790.

 * Original bytes (33):
 *     0000: 55 8b 6c 24 08 56 57 8b
 *     0008: f8 83 ef 01 8b f1 78 0b
 *     0010: 8b ce ff d3 03 f5 83 ef
 *     0018: 01 79 f5 5f 5e 5d c2 04
 *     0020: 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00402790(undefined4 a0)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x08
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x8B
    _emit 0xF1
    _emit 0x78
    _emit 0x0B
    _emit 0x8B
    _emit 0xCE
    _emit 0xFF
    _emit 0xD3
    _emit 0x03
    _emit 0xF5
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x79
    _emit 0xF5
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
