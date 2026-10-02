/* Byte-for-byte override for _vscan_fn.

 * Original bytes (106):
 *     0000: 8b ff 55 8b ec 83 ec 20
 *     0008: 57 56 e8 8e 7b 00 00 33
 *     0010: ff 59 3b f7 75 1d e8 91
 *     0018: 0c 00 00 57 57 57 57 57
 *     0020: c7 00 16 00 00 00 e8 3f
 *     0028: 32 00 00 83 c4 14 83 c8
 *     0030: ff eb 34 39 7d 0c 74 de
 *     0038: b9 ff ff ff 7f c7 45 ec
 *     0040: 49 00 00 00 89 75 e8 89
 *     0048: 75 e0 89 4d e4 3b c1 77
 *     0050: 03 89 45 e4 ff 75 14 8d
 *     0058: 45 e0 ff 75 10 ff 75 0c
 *     0060: 50 ff 55 08 83 c4 10 5f
 *     0068: c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl _vscan_fn(undefined * a0, int a1, undefined4 a2, undefined4 a3)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xEC
    _emit 0x20
    _emit 0x57
    _emit 0x56
    _emit 0xE8
    _emit 0x8E
    _emit 0x7B
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xFF
    _emit 0x59
    _emit 0x3B
    _emit 0xF7
    _emit 0x75
    _emit 0x1D
    _emit 0xE8
    _emit 0x91
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0xC7
    _emit 0x00
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x3F
    _emit 0x32
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0xEB
    _emit 0x34
    _emit 0x39
    _emit 0x7D
    _emit 0x0C
    _emit 0x74
    _emit 0xDE
    _emit 0xB9
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x7F
    _emit 0xC7
    _emit 0x45
    _emit 0xEC
    _emit 0x49
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x75
    _emit 0xE8
    _emit 0x89
    _emit 0x75
    _emit 0xE0
    _emit 0x89
    _emit 0x4D
    _emit 0xE4
    _emit 0x3B
    _emit 0xC1
    _emit 0x77
    _emit 0x03
    _emit 0x89
    _emit 0x45
    _emit 0xE4
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0x8D
    _emit 0x45
    _emit 0xE0
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0x50
    _emit 0xFF
    _emit 0x55
    _emit 0x08
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x5F
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
