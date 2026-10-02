/* Byte-for-byte override for FUN_004072d0.

 * Original bytes (194):
 *     0000: 8b 15 cc e8 4c 00 53 55
 *     0008: 8b 6c 24 0c 8b 45 40 56
 *     0010: 57 8d 7d 40 50 e8 36 a6
 *     0018: 05 00 8b f0 85 f6 75 02
 *     0020: 89 07 6a 28 e8 67 fc ff
 *     0028: ff 85 f6 75 16 8b 4d 48
 *     0030: 51 8d 5e 01 e8 67 a6 05
 *     0038: 00 5f 5e 5d 83 c8 ff 5b
 *     0040: c2 04 00 81 7d 18 2c 01
 *     0048: 00 00 7e 2e 8b 17 52 bb
 *     0050: 01 00 00 00 e8 47 a6 05
 *     0058: 00 8b 45 48 50 e8 3e a6
 *     0060: 05 00 d9 e8 8b 0d 14 45
 *     0068: 4b 00 d9 99 5c 82 00 00
 *     0070: 5f 5e 5d 83 c8 ff 5b c2
 *     0078: 04 00 a1 14 45 4b 00 d9
 *     0080: 05 a8 43 4a 00 8b 90 7c
 *     0088: 09 00 00 d9 98 5c 82 00
 *     0090: 00 8d b5 08 05 00 00 89
 *     0098: 16 8b 88 80 09 00 00 89
 *     00a0: 4e 04 8b 90 84 09 00 00
 *     00a8: 8b c7 89 56 08 e8 ae aa
 *     00b0: 05 00 8b dd e8 f7 01 00
 *     00b8: 00 5f 5e 5d 33 c0 5b c2
 *     00c0: 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_004072d0(void * a0, int a1)
{
  __asm {
    _emit 0x8B
    _emit 0x15
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x45
    _emit 0x40
    _emit 0x56
    _emit 0x57
    _emit 0x8D
    _emit 0x7D
    _emit 0x40
    _emit 0x50
    _emit 0xE8
    _emit 0x36
    _emit 0xA6
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x02
    _emit 0x89
    _emit 0x07
    _emit 0x6A
    _emit 0x28
    _emit 0xE8
    _emit 0x67
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x16
    _emit 0x8B
    _emit 0x4D
    _emit 0x48
    _emit 0x51
    _emit 0x8D
    _emit 0x5E
    _emit 0x01
    _emit 0xE8
    _emit 0x67
    _emit 0xA6
    _emit 0x05
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x81
    _emit 0x7D
    _emit 0x18
    _emit 0x2C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x7E
    _emit 0x2E
    _emit 0x8B
    _emit 0x17
    _emit 0x52
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x47
    _emit 0xA6
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x48
    _emit 0x50
    _emit 0xE8
    _emit 0x3E
    _emit 0xA6
    _emit 0x05
    _emit 0x00
    _emit 0xD9
    _emit 0xE8
    _emit 0x8B
    _emit 0x0D
    _emit 0x14
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xD9
    _emit 0x99
    _emit 0x5C
    _emit 0x82
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xA1
    _emit 0x14
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0xA8
    _emit 0x43
    _emit 0x4A
    _emit 0x00
    _emit 0x8B
    _emit 0x90
    _emit 0x7C
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x98
    _emit 0x5C
    _emit 0x82
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0xB5
    _emit 0x08
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x16
    _emit 0x8B
    _emit 0x88
    _emit 0x80
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x4E
    _emit 0x04
    _emit 0x8B
    _emit 0x90
    _emit 0x84
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC7
    _emit 0x89
    _emit 0x56
    _emit 0x08
    _emit 0xE8
    _emit 0xAE
    _emit 0xAA
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0xDD
    _emit 0xE8
    _emit 0xF7
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x5F
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
