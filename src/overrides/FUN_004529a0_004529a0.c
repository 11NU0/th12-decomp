/* Byte-for-byte override for FUN_004529a0_004529a0.

 * Original bytes (85):
 *     0000: 56 6a 44 e8 42 a0 01 00
 *     0008: 8b f0 83 c4 04 85 f6 74
 *     0010: 3e 83 66 40 fe 6a 44 6a
 *     0018: 00 56 e8 61 4a 02 00 8b
 *     0020: 44 24 28 8b 4c 24 24 8b
 *     0028: 54 24 20 83 0e 02 83 c4
 *     0030: 0c 50 8b 44 24 14 51 8b
 *     0038: 4c 24 14 52 8b 54 24 14
 *     0040: 50 51 52 56 e8 77 00 00
 *     0048: 00 8b c6 5e c2 18 00 33
 *     0050: c0 5e c2 18 00
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

uint * __stdcall FUN_004529a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6)
{
  __asm {
    _emit 0x56
    _emit 0x6A
    _emit 0x44
    _emit 0xE8
    _emit 0x42
    _emit 0xA0
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x3E
    _emit 0x83
    _emit 0x66
    _emit 0x40
    _emit 0xFE
    _emit 0x6A
    _emit 0x44
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x61
    _emit 0x4A
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x28
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x24
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x20
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x50
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x51
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x52
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x50
    _emit 0x51
    _emit 0x52
    _emit 0x56
    _emit 0xE8
    _emit 0x77
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC2
    _emit 0x18
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC2
    _emit 0x18
    _emit 0x00
  }
  __assume(0);
}
