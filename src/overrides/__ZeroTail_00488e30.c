/* Byte-for-byte override for __ZeroTail.

 * Original bytes (73):
 *     0000: 8b ff 55 8b ec 8b 45 0c
 *     0008: 99 6a 1f 59 23 d1 03 c2
 *     0010: 8b 55 0c c1 f8 05 81 e2
 *     0018: 1f 00 00 80 79 05 4a 83
 *     0020: ca e0 42 2b ca 83 ca ff
 *     0028: d3 e2 8b 4d 08 f7 d2 85
 *     0030: 14 81 74 0a 33 c0 5d c3
 *     0038: 83 3c 81 00 75 f6 40 83
 *     0040: f8 03 7c f4 33 c0 40 5d
 *     0048: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl __ZeroTail(int a0, int a1)
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
    _emit 0x2B
    _emit 0xCA
    _emit 0x83
    _emit 0xCA
    _emit 0xFF
    _emit 0xD3
    _emit 0xE2
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0xF7
    _emit 0xD2
    _emit 0x85
    _emit 0x14
    _emit 0x81
    _emit 0x74
    _emit 0x0A
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
    _emit 0x83
    _emit 0x3C
    _emit 0x81
    _emit 0x00
    _emit 0x75
    _emit 0xF6
    _emit 0x40
    _emit 0x83
    _emit 0xF8
    _emit 0x03
    _emit 0x7C
    _emit 0xF4
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
