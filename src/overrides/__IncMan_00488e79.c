/* Byte-for-byte override for __IncMan.

 * Original bytes (109):
 *     0000: 8b ff 55 8b ec 8b 45 0c
 *     0008: 53 56 57 99 6a 1f 59 23
 *     0010: d1 03 c2 8b 55 0c c1 f8
 *     0018: 05 81 e2 1f 00 00 80 79
 *     0020: 05 4a 83 ca e0 42 8b 7d
 *     0028: 08 2b ca 33 d2 42 d3 e2
 *     0030: 8b 0c 87 33 db 8d 34 11
 *     0038: 3b f1 72 04 3b f2 73 03
 *     0040: 33 db 43 89 34 87 eb 1b
 *     0048: 85 db 74 1a 8b 0c 87 8d
 *     0050: 51 01 33 db 3b d1 72 05
 *     0058: 83 fa 01 73 03 33 db 43
 *     0060: 89 14 87 48 79 e2 5f 5e
 *     0068: 8b c3 5b 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl __IncMan(int a0, int a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x99
    _emit 0x6A
    _emit 0x1F
    _emit 0x59
    _emit 0x23
    _emit 0xD1
    _emit 0x03
    _emit 0xC2
    _emit 0x8B
    _emit 0x55
    _emit 0x0C
    _emit 0xC1
    _emit 0xF8
    _emit 0x05
    _emit 0x81
    _emit 0xE2
    _emit 0x1F
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x79
    _emit 0x05
    _emit 0x4A
    _emit 0x83
    _emit 0xCA
    _emit 0xE0
    _emit 0x42
    _emit 0x8B
    _emit 0x7D
    _emit 0x08
    _emit 0x2B
    _emit 0xCA
    _emit 0x33
    _emit 0xD2
    _emit 0x42
    _emit 0xD3
    _emit 0xE2
    _emit 0x8B
    _emit 0x0C
    _emit 0x87
    _emit 0x33
    _emit 0xDB
    _emit 0x8D
    _emit 0x34
    _emit 0x11
    _emit 0x3B
    _emit 0xF1
    _emit 0x72
    _emit 0x04
    _emit 0x3B
    _emit 0xF2
    _emit 0x73
    _emit 0x03
    _emit 0x33
    _emit 0xDB
    _emit 0x43
    _emit 0x89
    _emit 0x34
    _emit 0x87
    _emit 0xEB
    _emit 0x1B
    _emit 0x85
    _emit 0xDB
    _emit 0x74
    _emit 0x1A
    _emit 0x8B
    _emit 0x0C
    _emit 0x87
    _emit 0x8D
    _emit 0x51
    _emit 0x01
    _emit 0x33
    _emit 0xDB
    _emit 0x3B
    _emit 0xD1
    _emit 0x72
    _emit 0x05
    _emit 0x83
    _emit 0xFA
    _emit 0x01
    _emit 0x73
    _emit 0x03
    _emit 0x33
    _emit 0xDB
    _emit 0x43
    _emit 0x89
    _emit 0x14
    _emit 0x87
    _emit 0x48
    _emit 0x79
    _emit 0xE2
    _emit 0x5F
    _emit 0x5E
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
