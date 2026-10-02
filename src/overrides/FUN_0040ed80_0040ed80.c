/* Byte-for-byte override for FUN_0040ed80.

 * Original bytes (111):
 *     0000: 51 56 8b 35 d0 43 4b 00
 *     0008: 57 e8 82 76 02 00 e8 5d
 *     0010: aa ff ff e8 88 7d ff ff
 *     0018: e8 73 6d 01 00 e8 ae ef
 *     0020: 02 00 8b 86 14 01 00 00
 *     0028: 8b 4e 34 8b 14 81 52 e8
 *     0030: 2c 43 00 00 e8 87 f1 00
 *     0038: 00 a1 dc 43 4b 00 8b 48
 *     0040: 64 8b 51 08 8d be ec 01
 *     0048: 00 00 6a 01 8b c7 89 96
 *     0050: f4 01 00 00 e8 97 5b 05
 *     0058: 00 6a ff 8b c7 e8 8e 5b
 *     0060: 05 00 5f c7 46 30 01 00
 *     0068: 00 00 33 c0 5e 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0040ed80(void)
{
  __asm {
    _emit 0x51
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xD0
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x57
    _emit 0xE8
    _emit 0x82
    _emit 0x76
    _emit 0x02
    _emit 0x00
    _emit 0xE8
    _emit 0x5D
    _emit 0xAA
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x88
    _emit 0x7D
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x73
    _emit 0x6D
    _emit 0x01
    _emit 0x00
    _emit 0xE8
    _emit 0xAE
    _emit 0xEF
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0x14
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x34
    _emit 0x8B
    _emit 0x14
    _emit 0x81
    _emit 0x52
    _emit 0xE8
    _emit 0x2C
    _emit 0x43
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x87
    _emit 0xF1
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xDC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x48
    _emit 0x64
    _emit 0x8B
    _emit 0x51
    _emit 0x08
    _emit 0x8D
    _emit 0xBE
    _emit 0xEC
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0x8B
    _emit 0xC7
    _emit 0x89
    _emit 0x96
    _emit 0xF4
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x97
    _emit 0x5B
    _emit 0x05
    _emit 0x00
    _emit 0x6A
    _emit 0xFF
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0x8E
    _emit 0x5B
    _emit 0x05
    _emit 0x00
    _emit 0x5F
    _emit 0xC7
    _emit 0x46
    _emit 0x30
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
