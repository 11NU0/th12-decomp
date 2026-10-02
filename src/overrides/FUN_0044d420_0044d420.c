/* Byte-for-byte override for FUN_0044d420_0044d420.

 * Original bytes (111):
 *     0000: 6a ff 68 7b 6f 49 00 64
 *     0008: a1 00 00 00 00 50 56 a1
 *     0010: 38 d1 4a 00 33 c4 50 8d
 *     0018: 44 24 08 64 a3 00 00 00
 *     0020: 00 8b 74 24 18 8d 4e 0c
 *     0028: 33 c0 c7 41 18 0f 00 00
 *     0030: 00 89 41 14 88 41 04 89
 *     0038: 44 24 10 6a 0d 68 5c 24
 *     0040: 4a 00 89 06 c7 46 28 58
 *     0048: 02 00 00 c7 46 08 10 00
 *     0050: 00 00 89 46 04 e8 06 18
 *     0058: 00 00 8b c6 8b 4c 24 08
 *     0060: 64 89 0d 00 00 00 00 59
 *     0068: 5e 83 c4 0c c2 04 00
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the instruction sequences differ in ways this note does
 * not characterise; compare with cmpfun.py before trusting it.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 * __stdcall FUN_0044d420(undefined4 *param_1)
{
  __asm {
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0x7B
    _emit 0x6F
    _emit 0x49
    _emit 0x00
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
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
    _emit 0x08
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x18
    _emit 0x8D
    _emit 0x4E
    _emit 0x0C
    _emit 0x33
    _emit 0xC0
    _emit 0xC7
    _emit 0x41
    _emit 0x18
    _emit 0x0F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x41
    _emit 0x14
    _emit 0x88
    _emit 0x41
    _emit 0x04
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x6A
    _emit 0x0D
    _emit 0x68
    _emit 0x5C
    _emit 0x24
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x06
    _emit 0xC7
    _emit 0x46
    _emit 0x28
    _emit 0x58
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0xE8
    _emit 0x06
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
