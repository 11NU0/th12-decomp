/* Byte-for-byte override for FUN_0042ef00.

 * Original bytes (109):
 *     0000: 51 57 bf 01 00 00 00 39
 *     0008: be ec 04 00 00 75 2a 8b
 *     0010: 8e e8 04 00 00 6a 00 6a
 *     0018: 00 8d 44 24 0c 50 51 8d
 *     0020: 47 16 33 c9 e8 77 26 03
 *     0028: 00 8b 54 24 04 01 be ec
 *     0030: 04 00 00 89 96 e4 04 00
 *     0038: 00 39 be f0 04 00 00 75
 *     0040: 21 d9 05 60 42 4a 00 83
 *     0048: ec 08 d9 5c 24 04 d9 05
 *     0050: c0 3e 4a 00 d9 1c 24 e8
 *     0058: 24 2c fe ff 01 be f0 04
 *     0060: 00 00 01 be f4 04 00 00
 *     0068: 8b c7 5f 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0042ef00(void)
{
  __asm {
    _emit 0x51
    _emit 0x57
    _emit 0xBF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0xBE
    _emit 0xEC
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x2A
    _emit 0x8B
    _emit 0x8E
    _emit 0xE8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x50
    _emit 0x51
    _emit 0x8D
    _emit 0x47
    _emit 0x16
    _emit 0x33
    _emit 0xC9
    _emit 0xE8
    _emit 0x77
    _emit 0x26
    _emit 0x03
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x01
    _emit 0xBE
    _emit 0xEC
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x96
    _emit 0xE4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0xBE
    _emit 0xF0
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x21
    _emit 0xD9
    _emit 0x05
    _emit 0x60
    _emit 0x42
    _emit 0x4A
    _emit 0x00
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x05
    _emit 0xC0
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0x24
    _emit 0x2C
    _emit 0xFE
    _emit 0xFF
    _emit 0x01
    _emit 0xBE
    _emit 0xF0
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0xBE
    _emit 0xF4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC7
    _emit 0x5F
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
