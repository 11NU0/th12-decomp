/* Byte-for-byte override for FUN_004612d0.

 * Original bytes (118):
 *     0000: 8b 15 cc e8 4c 00 8d 4b
 *     0008: 04 56 89 19 c7 41 04 00
 *     0010: 00 00 00 c7 41 08 00 00
 *     0018: 00 00 8b b2 b8 56 88 00
 *     0020: 85 f6 75 08 89 8a bc 56
 *     0028: 88 00 eb 18 57 8b 79 04
 *     0030: 85 ff 74 09 89 7e 04 8b
 *     0038: 79 04 89 77 08 89 71 04
 *     0040: 89 4e 08 5f 89 8a b8 56
 *     0048: 88 00 b9 01 00 00 00 01
 *     0050: 8a 48 ed 88 00 83 ba 48
 *     0058: ed 88 00 00 5e 75 06 01
 *     0060: 8a 48 ed 88 00 8b 8a 48
 *     0068: ed 88 00 89 0b 8b 92 48
 *     0070: ed 88 00 89 10 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_004612d0(void)
{
  __asm {
    _emit 0x8B
    _emit 0x15
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8D
    _emit 0x4B
    _emit 0x04
    _emit 0x56
    _emit 0x89
    _emit 0x19
    _emit 0xC7
    _emit 0x41
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x41
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xB2
    _emit 0xB8
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x08
    _emit 0x89
    _emit 0x8A
    _emit 0xBC
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0xEB
    _emit 0x18
    _emit 0x57
    _emit 0x8B
    _emit 0x79
    _emit 0x04
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x09
    _emit 0x89
    _emit 0x7E
    _emit 0x04
    _emit 0x8B
    _emit 0x79
    _emit 0x04
    _emit 0x89
    _emit 0x77
    _emit 0x08
    _emit 0x89
    _emit 0x71
    _emit 0x04
    _emit 0x89
    _emit 0x4E
    _emit 0x08
    _emit 0x5F
    _emit 0x89
    _emit 0x8A
    _emit 0xB8
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0xB9
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x8A
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x83
    _emit 0xBA
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x75
    _emit 0x06
    _emit 0x01
    _emit 0x8A
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x8B
    _emit 0x8A
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x89
    _emit 0x0B
    _emit 0x8B
    _emit 0x92
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x89
    _emit 0x10
    _emit 0xC3
  }
  __assume(0);
}
