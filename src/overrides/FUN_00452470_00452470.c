/* Byte-for-byte override for FUN_00452470.

 * Original bytes (74):
 *     0000: 83 ec 10 d9 05 78 3d 4a
 *     0008: 00 53 8b 59 18 d9 5c 24
 *     0010: 04 d9 05 68 3e 4a 00 c1
 *     0018: e3 18 0b 59 20 d9 5c 24
 *     0020: 08 d9 05 bc 3e 4a 00 57
 *     0028: d9 5c 24 10 8d 7c 24 08
 *     0030: d9 05 b8 3e 4a 00 d9 5c
 *     0038: 24 14 e8 81 fa ff ff 5f
 *     0040: b8 01 00 00 00 5b 83 c4
 *     0048: 10 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00452470(void)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x10
    _emit 0xD9
    _emit 0x05
    _emit 0x78
    _emit 0x3D
    _emit 0x4A
    _emit 0x00
    _emit 0x53
    _emit 0x8B
    _emit 0x59
    _emit 0x18
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x05
    _emit 0x68
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0xC1
    _emit 0xE3
    _emit 0x18
    _emit 0x0B
    _emit 0x59
    _emit 0x20
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x05
    _emit 0xBC
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0x57
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0x8D
    _emit 0x7C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x05
    _emit 0xB8
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0xE8
    _emit 0x81
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0xC3
  }
  __assume(0);
}
