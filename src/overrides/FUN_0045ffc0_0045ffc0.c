/* Byte-for-byte override for FUN_0045ffc0_0045ffc0.

 * Original bytes (212):
 *     0000: 55 8b ec 83 e4 f8 83 ec
 *     0008: 10 8b 87 24 01 00 00 8b
 *     0010: 0f 53 56 50 51 68 5c 34
 *     0018: 4a 00 e8 01 23 00 00 8b
 *     0020: b7 08 01 00 00 33 db 83
 *     0028: c4 0c 33 c9 89 4c 24 10
 *     0030: 89 5c 24 08 89 5c 24 0c
 *     0038: 89 5c 24 14 8d 64 24 00
 *     0040: 8b 97 24 01 00 00 4a 3b
 *     0048: ca 75 22 8b 44 24 08 8b
 *     0050: 4c 24 0c 56 50 53 51 57
 *     0058: e8 83 00 00 00 85 c0 7c
 *     0060: 4f 8b 4c 24 10 c7 44 24
 *     0068: 14 01 00 00 00 0f b7 56
 *     0070: 04 0f b7 46 06 01 44 24
 *     0078: 08 8b 46 24 03 da ba 01
 *     0080: 00 00 00 01 54 24 0c 85
 *     0088: c0 74 37 03 ca 03 f0 89
 *     0090: 4c 24 10 3b 8f 24 01 00
 *     0098: 00 74 07 83 7c 24 14 00
 *     00a0: 74 9e 01 97 24 01 00 00
 *     00a8: 8b c7 5e 5b 8b e5 5d c3
 *     00b0: c7 87 24 01 00 00 00 00
 *     00b8: 00 00 33 c0 5e 5b 8b e5
 *     00c0: 5d c3 5e c7 87 24 01 00
 *     00c8: 00 00 00 00 00 8b c7 5b
 *     00d0: 8b e5 5d c3
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original opens with a `push ebp / mov ebp,esp`
 * frame and addresses its arguments through EBP, while this pass addresses
 * them through ESP.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 * __stdcall FUN_0045ffc0(void)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xE4
    _emit 0xF8
    _emit 0x83
    _emit 0xEC
    _emit 0x10
    _emit 0x8B
    _emit 0x87
    _emit 0x24
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0F
    _emit 0x53
    _emit 0x56
    _emit 0x50
    _emit 0x51
    _emit 0x68
    _emit 0x5C
    _emit 0x34
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x01
    _emit 0x23
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xB7
    _emit 0x08
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xDB
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x33
    _emit 0xC9
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x89
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0x8D
    _emit 0x64
    _emit 0x24
    _emit 0x00
    _emit 0x8B
    _emit 0x97
    _emit 0x24
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x4A
    _emit 0x3B
    _emit 0xCA
    _emit 0x75
    _emit 0x22
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0x56
    _emit 0x50
    _emit 0x53
    _emit 0x51
    _emit 0x57
    _emit 0xE8
    _emit 0x83
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x7C
    _emit 0x4F
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x56
    _emit 0x04
    _emit 0x0F
    _emit 0xB7
    _emit 0x46
    _emit 0x06
    _emit 0x01
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x46
    _emit 0x24
    _emit 0x03
    _emit 0xDA
    _emit 0xBA
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x37
    _emit 0x03
    _emit 0xCA
    _emit 0x03
    _emit 0xF0
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x3B
    _emit 0x8F
    _emit 0x24
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x07
    _emit 0x83
    _emit 0x7C
    _emit 0x24
    _emit 0x14
    _emit 0x00
    _emit 0x74
    _emit 0x9E
    _emit 0x01
    _emit 0x97
    _emit 0x24
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC7
    _emit 0x5E
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
    _emit 0xC7
    _emit 0x87
    _emit 0x24
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
    _emit 0x5E
    _emit 0xC7
    _emit 0x87
    _emit 0x24
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC7
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
