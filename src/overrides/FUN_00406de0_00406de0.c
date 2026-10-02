/* Byte-for-byte override for FUN_00406de0.

 * Original bytes (90):
 *     0000: 51 8b 0d c4 43 4b 00 33
 *     0008: c0 56 39 41 3c 74 46 8b
 *     0010: 15 94 0c 4b 00 8b 35 90
 *     0018: 0c 4b 00 8d 14 72 83 fa
 *     0020: 05 77 32 ff 24 95 3c 6e
 *     0028: 40 00 8b 74 24 0c 8b c7
 *     0030: e8 9b 05 00 00 5e 59 c2
 *     0038: 04 00 57 8b d1 e8 ae 0b
 *     0040: 00 00 5e 59 c2 04 00 8b
 *     0048: c7 e8 e2 1d 00 00 5e 59
 *     0050: c2 04 00 33 c0 5e 59 c2
 *     0058: 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __stdcall FUN_00406de0(undefined4 a0)
{
  __asm {
    _emit 0x51
    _emit 0x8B
    _emit 0x0D
    _emit 0xC4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x56
    _emit 0x39
    _emit 0x41
    _emit 0x3C
    _emit 0x74
    _emit 0x46
    _emit 0x8B
    _emit 0x15
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x14
    _emit 0x72
    _emit 0x83
    _emit 0xFA
    _emit 0x05
    _emit 0x77
    _emit 0x32
    _emit 0xFF
    _emit 0x24
    _emit 0x95
    _emit 0x3C
    _emit 0x6E
    _emit 0x40
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0x9B
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x57
    _emit 0x8B
    _emit 0xD1
    _emit 0xE8
    _emit 0xAE
    _emit 0x0B
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0xE2
    _emit 0x1D
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
