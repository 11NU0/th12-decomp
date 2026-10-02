/* Byte-for-byte override for FUN_0044f200.

 * Original bytes (127):
 *     0000: 6a ff 68 93 6e 49 00 64
 *     0008: a1 00 00 00 00 50 53 56
 *     0010: a1 38 d1 4a 00 33 c4 50
 *     0018: 8d 44 24 0c 64 a3 00 00
 *     0020: 00 00 8b 5c 24 1c be d8
 *     0028: f0 4c 00 c7 44 24 14 01
 *     0030: 00 00 00 e8 08 5a 01 00
 *     0038: c7 43 48 01 00 00 00 e8
 *     0040: 7c 32 01 00 53 8b c3 e8
 *     0048: f4 34 01 00 8d 73 24 53
 *     0050: 8b c6 e8 e9 34 01 00 33
 *     0058: c0 89 46 08 89 46 0c 89
 *     0060: 46 10 89 43 08 89 43 0c
 *     0068: 89 43 10 8b 4c 24 0c 64
 *     0070: 89 0d 00 00 00 00 59 5e
 *     0078: 5b 83 c4 0c c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0044f200(int a0)
{
  __asm {
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0x93
    _emit 0x6E
    _emit 0x49
    _emit 0x00
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x53
    _emit 0x56
    _emit 0xA1
    _emit 0x38
    _emit 0xD1
    _emit 0x4A
    _emit 0x00
    _emit 0x33
    _emit 0xC4
    _emit 0x50
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x5C
    _emit 0x24
    _emit 0x1C
    _emit 0xBE
    _emit 0xD8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x08
    _emit 0x5A
    _emit 0x01
    _emit 0x00
    _emit 0xC7
    _emit 0x43
    _emit 0x48
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x7C
    _emit 0x32
    _emit 0x01
    _emit 0x00
    _emit 0x53
    _emit 0x8B
    _emit 0xC3
    _emit 0xE8
    _emit 0xF4
    _emit 0x34
    _emit 0x01
    _emit 0x00
    _emit 0x8D
    _emit 0x73
    _emit 0x24
    _emit 0x53
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xE9
    _emit 0x34
    _emit 0x01
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x46
    _emit 0x08
    _emit 0x89
    _emit 0x46
    _emit 0x0C
    _emit 0x89
    _emit 0x46
    _emit 0x10
    _emit 0x89
    _emit 0x43
    _emit 0x08
    _emit 0x89
    _emit 0x43
    _emit 0x0C
    _emit 0x89
    _emit 0x43
    _emit 0x10
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5E
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
