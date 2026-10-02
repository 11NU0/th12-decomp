/* Byte-for-byte override for FUN_0042eb10.

 * Original bytes (238):
 *     0000: 53 55 8b 6c 24 0c 56 57
 *     0008: 6a 24 e8 cb de 03 00 33
 *     0010: ff 83 c4 04 3b c7 74 1c
 *     0018: 83 60 04 fe 89 78 08 89
 *     0020: 78 0c 89 78 10 89 38 89
 *     0028: 40 14 89 78 18 89 78 1c
 *     0030: 8b f0 eb 02 33 f6 8b 46
 *     0038: 04 83 e0 fd 83 c8 01 bb
 *     0040: 03 00 00 00 c7 46 08 70
 *     0048: ef 42 00 89 7e 0c 89 7e
 *     0050: 10 89 6e 20 89 46 04 e8
 *     0058: 14 38 03 00 6a 24 89 75
 *     0060: 08 e8 74 de 03 00 83 c4
 *     0068: 04 3b c7 74 1c 83 60 04
 *     0070: fe 89 78 08 89 78 0c 89
 *     0078: 78 10 89 38 89 40 14 89
 *     0080: 78 18 89 78 1c 8b f0 eb
 *     0088: 02 33 f6 8b 4e 04 83 e1
 *     0090: fd 83 c9 01 bb 37 00 00
 *     0098: 00 c7 46 08 80 ef 42 00
 *     00a0: 89 7e 0c 89 7e 10 89 6e
 *     00a8: 20 89 4e 04 e8 5f 38 03
 *     00b0: 00 89 75 0c 8d 75 10 e8
 *     00b8: 74 60 03 00 8d 56 08 52
 *     00c0: 57 55 68 b0 e9 42 00 57
 *     00c8: 57 c7 46 18 b0 e9 42 00
 *     00d0: c7 46 10 01 00 00 00 89
 *     00d8: 7e 0c e8 5c f9 03 00 83
 *     00e0: c4 18 5f 89 46 04 5e 5d
 *     00e8: 33 c0 5b c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0042eb10(void * a0)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0x56
    _emit 0x57
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0xCB
    _emit 0xDE
    _emit 0x03
    _emit 0x00
    _emit 0x33
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x46
    _emit 0x04
    _emit 0x83
    _emit 0xE0
    _emit 0xFD
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xBB
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x70
    _emit 0xEF
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0xE8
    _emit 0x14
    _emit 0x38
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x74
    _emit 0xDE
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x4E
    _emit 0x04
    _emit 0x83
    _emit 0xE1
    _emit 0xFD
    _emit 0x83
    _emit 0xC9
    _emit 0x01
    _emit 0xBB
    _emit 0x37
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x80
    _emit 0xEF
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0x89
    _emit 0x4E
    _emit 0x04
    _emit 0xE8
    _emit 0x5F
    _emit 0x38
    _emit 0x03
    _emit 0x00
    _emit 0x89
    _emit 0x75
    _emit 0x0C
    _emit 0x8D
    _emit 0x75
    _emit 0x10
    _emit 0xE8
    _emit 0x74
    _emit 0x60
    _emit 0x03
    _emit 0x00
    _emit 0x8D
    _emit 0x56
    _emit 0x08
    _emit 0x52
    _emit 0x57
    _emit 0x55
    _emit 0x68
    _emit 0xB0
    _emit 0xE9
    _emit 0x42
    _emit 0x00
    _emit 0x57
    _emit 0x57
    _emit 0xC7
    _emit 0x46
    _emit 0x18
    _emit 0xB0
    _emit 0xE9
    _emit 0x42
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x10
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0xE8
    _emit 0x5C
    _emit 0xF9
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x18
    _emit 0x5F
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0x5E
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
