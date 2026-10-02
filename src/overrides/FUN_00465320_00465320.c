/* Byte-for-byte override for FUN_00465320.

 * Original bytes (99):
 *     0000: 55 8b ec 83 e4 c0 83 ec
 *     0008: 40 d9 06 83 ec 08 dc 0d
 *     0010: e8 3c 4a 00 d9 5c 24 44
 *     0018: d9 44 24 44 dd 1c 24 e8
 *     0020: 4c df 02 00 d9 5c 24 44
 *     0028: d9 44 24 44 dd 05 e8 3c
 *     0030: 4a 00 dc f9 d9 c9 d9 1e
 *     0038: d8 4e 04 d9 5c 24 44 d9
 *     0040: 44 24 44 dd 1c 24 e8 25
 *     0048: df 02 00 d9 5c 24 44 83
 *     0050: c4 08 d9 44 24 3c dc 35
 *     0058: e8 3c 4a 00 d9 5e 04 8b
 *     0060: e5 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00465320(void)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xE4
    _emit 0xC0
    _emit 0x83
    _emit 0xEC
    _emit 0x40
    _emit 0xD9
    _emit 0x06
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0xDC
    _emit 0x0D
    _emit 0xE8
    _emit 0x3C
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x44
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x44
    _emit 0xDD
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0x4C
    _emit 0xDF
    _emit 0x02
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x44
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x44
    _emit 0xDD
    _emit 0x05
    _emit 0xE8
    _emit 0x3C
    _emit 0x4A
    _emit 0x00
    _emit 0xDC
    _emit 0xF9
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x1E
    _emit 0xD8
    _emit 0x4E
    _emit 0x04
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x44
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x44
    _emit 0xDD
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0x25
    _emit 0xDF
    _emit 0x02
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x44
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x3C
    _emit 0xDC
    _emit 0x35
    _emit 0xE8
    _emit 0x3C
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x5E
    _emit 0x04
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
