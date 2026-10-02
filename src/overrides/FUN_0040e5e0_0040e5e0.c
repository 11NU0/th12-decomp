/* Byte-for-byte override for FUN_0040e5e0.

 * Original bytes (321):
 *     0000: 53 56 57 8b 3d cc 43 4b
 *     0008: 00 bb 01 00 00 00 84 5f
 *     0010: 7c 0f 84 26 01 00 00 a1
 *     0018: c0 43 4b 00 09 98 bc 35
 *     0020: 00 00 8b 47 14 50 e8 65
 *     0028: 33 05 00 8b 4f 18 51 e8
 *     0030: 5c 33 05 00 8b 57 1c 52
 *     0038: e8 53 33 05 00 83 67 7c
 *     0040: fe 8b 47 10 50 e8 46 34
 *     0048: 05 00 33 f6 89 77 10 83
 *     0050: 67 7c df 8b 4f 20 51 e8
 *     0058: 34 34 05 00 89 77 20 f6
 *     0060: 47 7c 02 0f 84 c6 00 00
 *     0068: 00 8b 8f 80 00 00 00 b8
 *     0070: 67 66 66 66 f7 e9 a1 44
 *     0078: 0c 4b 00 c1 fa 02 8b ca
 *     0080: c1 e9 1f 03 ca 03 c1 3d
 *     0088: 00 ca 9a 3b a3 44 0c 4b
 *     0090: 00 7c 0a c7 05 44 0c 4b
 *     0098: 00 ff c9 9a 3b 8b 97 80
 *     00a0: 00 00 00 8b 35 e4 43 4b
 *     00a8: 00 52 33 c0 e8 ff 28 01
 *     00b0: 00 a1 18 45 4b 00 39 58
 *     00b8: 10 74 67 8b 15 90 0c 4b
 *     00c0: 00 8b 0d 94 0c 4b 00 8b
 *     00c8: 47 78 8d 0c 51 8b 15 1c
 *     00d0: 45 4b 00 69 c9 f4 45 00
 *     00d8: 00 8d 04 c0 03 ca c1 e0
 *     00e0: 04 8d 84 08 6c 06 00 00
 *     00e8: 8b 88 80 00 00 00 81 f9
 *     00f0: 9f 86 01 00 7d 07 41 89
 *     00f8: 88 80 00 00 00 8b 7f 78
 *     0100: 8d 0c ff c1 e1 04 8d 84
 *     0108: 11 24 aa 01 00 8b 88 80
 *     0110: 00 00 00 81 f9 9f 86 01
 *     0118: 00 7d 07 41 89 88 80 00
 *     0120: 00 00 ba 30 00 00 00 5f
 *     0128: 5e 5b e9 81 56 04 00 56
 *     0130: 8b 35 e4 43 4b 00 8b c3
 *     0138: e8 73 28 01 00 5f 5e 5b
 *     0140: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0040e5e0(void * a0)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0x3D
    _emit 0xCC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x84
    _emit 0x5F
    _emit 0x7C
    _emit 0x0F
    _emit 0x84
    _emit 0x26
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xC0
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x09
    _emit 0x98
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x47
    _emit 0x14
    _emit 0x50
    _emit 0xE8
    _emit 0x65
    _emit 0x33
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x4F
    _emit 0x18
    _emit 0x51
    _emit 0xE8
    _emit 0x5C
    _emit 0x33
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x57
    _emit 0x1C
    _emit 0x52
    _emit 0xE8
    _emit 0x53
    _emit 0x33
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0x67
    _emit 0x7C
    _emit 0xFE
    _emit 0x8B
    _emit 0x47
    _emit 0x10
    _emit 0x50
    _emit 0xE8
    _emit 0x46
    _emit 0x34
    _emit 0x05
    _emit 0x00
    _emit 0x33
    _emit 0xF6
    _emit 0x89
    _emit 0x77
    _emit 0x10
    _emit 0x83
    _emit 0x67
    _emit 0x7C
    _emit 0xDF
    _emit 0x8B
    _emit 0x4F
    _emit 0x20
    _emit 0x51
    _emit 0xE8
    _emit 0x34
    _emit 0x34
    _emit 0x05
    _emit 0x00
    _emit 0x89
    _emit 0x77
    _emit 0x20
    _emit 0xF6
    _emit 0x47
    _emit 0x7C
    _emit 0x02
    _emit 0x0F
    _emit 0x84
    _emit 0xC6
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x8F
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xB8
    _emit 0x67
    _emit 0x66
    _emit 0x66
    _emit 0x66
    _emit 0xF7
    _emit 0xE9
    _emit 0xA1
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xC1
    _emit 0xFA
    _emit 0x02
    _emit 0x8B
    _emit 0xCA
    _emit 0xC1
    _emit 0xE9
    _emit 0x1F
    _emit 0x03
    _emit 0xCA
    _emit 0x03
    _emit 0xC1
    _emit 0x3D
    _emit 0x00
    _emit 0xCA
    _emit 0x9A
    _emit 0x3B
    _emit 0xA3
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x7C
    _emit 0x0A
    _emit 0xC7
    _emit 0x05
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xFF
    _emit 0xC9
    _emit 0x9A
    _emit 0x3B
    _emit 0x8B
    _emit 0x97
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x52
    _emit 0x33
    _emit 0xC0
    _emit 0xE8
    _emit 0xFF
    _emit 0x28
    _emit 0x01
    _emit 0x00
    _emit 0xA1
    _emit 0x18
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x39
    _emit 0x58
    _emit 0x10
    _emit 0x74
    _emit 0x67
    _emit 0x8B
    _emit 0x15
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x47
    _emit 0x78
    _emit 0x8D
    _emit 0x0C
    _emit 0x51
    _emit 0x8B
    _emit 0x15
    _emit 0x1C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x69
    _emit 0xC9
    _emit 0xF4
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0xC0
    _emit 0x03
    _emit 0xCA
    _emit 0xC1
    _emit 0xE0
    _emit 0x04
    _emit 0x8D
    _emit 0x84
    _emit 0x08
    _emit 0x6C
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x88
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xF9
    _emit 0x9F
    _emit 0x86
    _emit 0x01
    _emit 0x00
    _emit 0x7D
    _emit 0x07
    _emit 0x41
    _emit 0x89
    _emit 0x88
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x7F
    _emit 0x78
    _emit 0x8D
    _emit 0x0C
    _emit 0xFF
    _emit 0xC1
    _emit 0xE1
    _emit 0x04
    _emit 0x8D
    _emit 0x84
    _emit 0x11
    _emit 0x24
    _emit 0xAA
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x88
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xF9
    _emit 0x9F
    _emit 0x86
    _emit 0x01
    _emit 0x00
    _emit 0x7D
    _emit 0x07
    _emit 0x41
    _emit 0x89
    _emit 0x88
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBA
    _emit 0x30
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xE9
    _emit 0x81
    _emit 0x56
    _emit 0x04
    _emit 0x00
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0xC3
    _emit 0xE8
    _emit 0x73
    _emit 0x28
    _emit 0x01
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
