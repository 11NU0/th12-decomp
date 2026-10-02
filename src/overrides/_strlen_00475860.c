/* Byte-for-byte override for _strlen.

 * Original bytes (139):
 *     0000: 8b 4c 24 04 f7 c1 03 00
 *     0008: 00 00 74 24 8a 01 83 c1
 *     0010: 01 84 c0 74 4e f7 c1 03
 *     0018: 00 00 00 75 ef 05 00 00
 *     0020: 00 00 8d a4 24 00 00 00
 *     0028: 00 8d a4 24 00 00 00 00
 *     0030: 8b 01 ba ff fe fe 7e 03
 *     0038: d0 83 f0 ff 33 c2 83 c1
 *     0040: 04 a9 00 01 01 81 74 e8
 *     0048: 8b 41 fc 84 c0 74 32 84
 *     0050: e4 74 24 a9 00 00 ff 00
 *     0058: 74 13 a9 00 00 00 ff 74
 *     0060: 02 eb cd 8d 41 ff 8b 4c
 *     0068: 24 04 2b c1 c3 8d 41 fe
 *     0070: 8b 4c 24 04 2b c1 c3 8d
 *     0078: 41 fd 8b 4c 24 04 2b c1
 *     0080: c3 8d 41 fc 8b 4c 24 04
 *     0088: 2b c1 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

size_t __cdecl _strlen(char * a0)
{
  __asm {
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0xF7
    _emit 0xC1
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x24
    _emit 0x8A
    _emit 0x01
    _emit 0x83
    _emit 0xC1
    _emit 0x01
    _emit 0x84
    _emit 0xC0
    _emit 0x74
    _emit 0x4E
    _emit 0xF7
    _emit 0xC1
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0xEF
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0xA4
    _emit 0x24
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0xA4
    _emit 0x24
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x01
    _emit 0xBA
    _emit 0xFF
    _emit 0xFE
    _emit 0xFE
    _emit 0x7E
    _emit 0x03
    _emit 0xD0
    _emit 0x83
    _emit 0xF0
    _emit 0xFF
    _emit 0x33
    _emit 0xC2
    _emit 0x83
    _emit 0xC1
    _emit 0x04
    _emit 0xA9
    _emit 0x00
    _emit 0x01
    _emit 0x01
    _emit 0x81
    _emit 0x74
    _emit 0xE8
    _emit 0x8B
    _emit 0x41
    _emit 0xFC
    _emit 0x84
    _emit 0xC0
    _emit 0x74
    _emit 0x32
    _emit 0x84
    _emit 0xE4
    _emit 0x74
    _emit 0x24
    _emit 0xA9
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x00
    _emit 0x74
    _emit 0x13
    _emit 0xA9
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x74
    _emit 0x02
    _emit 0xEB
    _emit 0xCD
    _emit 0x8D
    _emit 0x41
    _emit 0xFF
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x2B
    _emit 0xC1
    _emit 0xC3
    _emit 0x8D
    _emit 0x41
    _emit 0xFE
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x2B
    _emit 0xC1
    _emit 0xC3
    _emit 0x8D
    _emit 0x41
    _emit 0xFD
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x2B
    _emit 0xC1
    _emit 0xC3
    _emit 0x8D
    _emit 0x41
    _emit 0xFC
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x2B
    _emit 0xC1
    _emit 0xC3
  }
  __assume(0);
}
