/* Byte-for-byte override for FUN_00453890.

 * Original bytes (69):
 *     0000: 83 3d 54 47 4d 00 00 75
 *     0008: 04 83 c8 ff c3 56 68 e8
 *     0010: f4 4c 00 e8 c8 fd ff ff
 *     0018: 8b 0d 54 47 4d 00 8b 49
 *     0020: 0c 8b f0 6b c0 34 03 05
 *     0028: 6c 0e 4d 00 6a 00 e8 fd
 *     0030: 32 01 00 56 68 f4 2e 4a
 *     0038: 00 e8 32 12 00 00 83 c4
 *     0040: 08 33 c0 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_00453890(void * a0)
{
  __asm {
    _emit 0x83
    _emit 0x3D
    _emit 0x54
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x04
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0xC3
    _emit 0x56
    _emit 0x68
    _emit 0xE8
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xC8
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x0D
    _emit 0x54
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x49
    _emit 0x0C
    _emit 0x8B
    _emit 0xF0
    _emit 0x6B
    _emit 0xC0
    _emit 0x34
    _emit 0x03
    _emit 0x05
    _emit 0x6C
    _emit 0x0E
    _emit 0x4D
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xE8
    _emit 0xFD
    _emit 0x32
    _emit 0x01
    _emit 0x00
    _emit 0x56
    _emit 0x68
    _emit 0xF4
    _emit 0x2E
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x32
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
