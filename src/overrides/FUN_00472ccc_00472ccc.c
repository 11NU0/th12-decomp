/* Byte-for-byte override for FUN_00472ccc.

 * Original bytes (60):
 *     0000: 8b ff 55 8b ec 8b 4d 08
 *     0008: 56 33 f6 3b ce 75 1d e8
 *     0010: 8f bc ff ff 56 56 56 56
 *     0018: 56 c7 00 16 00 00 00 e8
 *     0020: 3d e2 ff ff 83 c4 14 6a
 *     0028: 16 58 eb 0d a1 94 3d 4b
 *     0030: 00 3b c6 74 da 89 01 33
 *     0038: c0 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl FUN_00472ccc(int * a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x56
    _emit 0x33
    _emit 0xF6
    _emit 0x3B
    _emit 0xCE
    _emit 0x75
    _emit 0x1D
    _emit 0xE8
    _emit 0x8F
    _emit 0xBC
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0xC7
    _emit 0x00
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x3D
    _emit 0xE2
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x6A
    _emit 0x16
    _emit 0x58
    _emit 0xEB
    _emit 0x0D
    _emit 0xA1
    _emit 0x94
    _emit 0x3D
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xC6
    _emit 0x74
    _emit 0xDA
    _emit 0x89
    _emit 0x01
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
