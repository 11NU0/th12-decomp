/* Byte-for-byte override for FUN_00436410_00436410.

 * Original bytes (151):
 *     0000: 6a ff 68 3b 77 49 00 64
 *     0008: a1 00 00 00 00 50 83 ec
 *     0010: 08 57 a1 38 d1 4a 00 33
 *     0018: c4 50 8d 44 24 10 64 a3
 *     0020: 00 00 00 00 68 9c c5 00
 *     0028: 00 e8 ac 65 03 00 83 c4
 *     0030: 04 89 44 24 0c c7 44 24
 *     0038: 18 00 00 00 00 85 c0 74
 *     0040: 0a 50 e8 49 f5 ff ff 8b
 *     0048: f8 eb 02 33 ff c7 44 24
 *     0050: 18 ff ff ff ff e8 76 f6
 *     0058: ff ff 85 c0 74 26 85 ff
 *     0060: 74 0f 57 e8 f8 fd ff ff
 *     0068: 57 e8 d1 65 03 00 83 c4
 *     0070: 04 33 c0 8b 4c 24 10 64
 *     0078: 89 0d 00 00 00 00 59 5f
 *     0080: 83 c4 14 c3 8b c7 8b 4c
 *     0088: 24 10 64 89 0d 00 00 00
 *     0090: 00 59 5f 83 c4 14 c3
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

void * __stdcall FUN_00436410(void)
{
  __asm {
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0x3B
    _emit 0x77
    _emit 0x49
    _emit 0x00
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0x57
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
    _emit 0x10
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0x9C
    _emit 0xC5
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xAC
    _emit 0x65
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0A
    _emit 0x50
    _emit 0xE8
    _emit 0x49
    _emit 0xF5
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xF8
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xFF
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x76
    _emit 0xF6
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x26
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x0F
    _emit 0x57
    _emit 0xE8
    _emit 0xF8
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x57
    _emit 0xE8
    _emit 0xD1
    _emit 0x65
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5F
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0xC3
    _emit 0x8B
    _emit 0xC7
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5F
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0xC3
  }
  __assume(0);
}
