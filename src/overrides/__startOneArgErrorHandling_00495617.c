/* Byte-for-byte override for __startOneArgErrorHandling.

 * Original bytes (60):
 *     0000: 55 8b ec 83 c4 e0 89 45
 *     0008: e0 dd 5d f8 89 4d e4 8b
 *     0010: 45 10 8b 4d 14 89 45 e8
 *     0018: 89 4d ec 8d 45 08 8d 4d
 *     0020: e0 50 51 52 e8 76 15 00
 *     0028: 00 83 c4 0c dd 45 f8 66
 *     0030: 81 7d 08 7f 02 74 03 d9
 *     0038: 6d 08 c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

float10 __fastcall __startOneArgErrorHandling(undefined4 a0, int a1, ushort a2, undefined4 a3, undefined4 a4, undefined4 a5)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xC4
    _emit 0xE0
    _emit 0x89
    _emit 0x45
    _emit 0xE0
    _emit 0xDD
    _emit 0x5D
    _emit 0xF8
    _emit 0x89
    _emit 0x4D
    _emit 0xE4
    _emit 0x8B
    _emit 0x45
    _emit 0x10
    _emit 0x8B
    _emit 0x4D
    _emit 0x14
    _emit 0x89
    _emit 0x45
    _emit 0xE8
    _emit 0x89
    _emit 0x4D
    _emit 0xEC
    _emit 0x8D
    _emit 0x45
    _emit 0x08
    _emit 0x8D
    _emit 0x4D
    _emit 0xE0
    _emit 0x50
    _emit 0x51
    _emit 0x52
    _emit 0xE8
    _emit 0x76
    _emit 0x15
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xDD
    _emit 0x45
    _emit 0xF8
    _emit 0x66
    _emit 0x81
    _emit 0x7D
    _emit 0x08
    _emit 0x7F
    _emit 0x02
    _emit 0x74
    _emit 0x03
    _emit 0xD9
    _emit 0x6D
    _emit 0x08
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
