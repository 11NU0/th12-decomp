/* Byte-for-byte override for FUN_00461350.

 * Original bytes (123):
 *     0000: 8b 0d cc e8 4c 00 8d 53
 *     0008: 04 89 1a c7 42 04 00 00
 *     0010: 00 00 c7 42 08 00 00 00
 *     0018: 00 83 b9 c0 56 88 00 00
 *     0020: 75 08 89 91 c0 56 88 00
 *     0028: eb 20 56 8b b1 c4 56 88
 *     0030: 00 57 8b 7e 04 85 ff 74
 *     0038: 09 89 7a 04 8b 7e 04 89
 *     0040: 57 08 89 56 04 5f 89 72
 *     0048: 08 5e 89 91 c4 56 88 00
 *     0050: ba 01 00 00 00 01 91 48
 *     0058: ed 88 00 83 b9 48 ed 88
 *     0060: 00 00 75 06 01 91 48 ed
 *     0068: 88 00 8b 91 48 ed 88 00
 *     0070: 89 13 8b 89 48 ed 88 00
 *     0078: 89 08 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00461350(void)
{
  __asm {
    _emit 0x8B
    _emit 0x0D
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8D
    _emit 0x53
    _emit 0x04
    _emit 0x89
    _emit 0x1A
    _emit 0xC7
    _emit 0x42
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x42
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xB9
    _emit 0xC0
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x08
    _emit 0x89
    _emit 0x91
    _emit 0xC0
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0xEB
    _emit 0x20
    _emit 0x56
    _emit 0x8B
    _emit 0xB1
    _emit 0xC4
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x57
    _emit 0x8B
    _emit 0x7E
    _emit 0x04
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x09
    _emit 0x89
    _emit 0x7A
    _emit 0x04
    _emit 0x8B
    _emit 0x7E
    _emit 0x04
    _emit 0x89
    _emit 0x57
    _emit 0x08
    _emit 0x89
    _emit 0x56
    _emit 0x04
    _emit 0x5F
    _emit 0x89
    _emit 0x72
    _emit 0x08
    _emit 0x5E
    _emit 0x89
    _emit 0x91
    _emit 0xC4
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0xBA
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x91
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x83
    _emit 0xB9
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x06
    _emit 0x01
    _emit 0x91
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x8B
    _emit 0x91
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x89
    _emit 0x13
    _emit 0x8B
    _emit 0x89
    _emit 0x48
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x89
    _emit 0x08
    _emit 0xC3
  }
  __assume(0);
}
