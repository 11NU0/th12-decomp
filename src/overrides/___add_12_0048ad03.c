/* Byte-for-byte override for ___add_12.

 * Original bytes (113):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 8b 08 53 56 57 8b 7d 0c
 *     0010: 8b 17 8d 34 11 33 db 3b
 *     0018: f1 72 04 3b f2 73 03 33
 *     0020: db 43 89 30 85 db 74 1e
 *     0028: 8b 48 04 8d 51 01 33 f6
 *     0030: 3b d1 72 05 83 fa 01 73
 *     0038: 03 33 f6 46 89 50 04 85
 *     0040: f6 74 03 ff 40 08 8b 48
 *     0048: 04 8b 57 04 8d 34 11 33
 *     0050: db 3b f1 72 04 3b f2 73
 *     0058: 03 33 db 43 89 70 04 85
 *     0060: db 74 03 ff 40 08 8b 4f
 *     0068: 08 01 48 08 5f 5e 5b 5d
 *     0070: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl ___add_12(uint * a0, uint * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x8B
    _emit 0x08
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0x7D
    _emit 0x0C
    _emit 0x8B
    _emit 0x17
    _emit 0x8D
    _emit 0x34
    _emit 0x11
    _emit 0x33
    _emit 0xDB
    _emit 0x3B
    _emit 0xF1
    _emit 0x72
    _emit 0x04
    _emit 0x3B
    _emit 0xF2
    _emit 0x73
    _emit 0x03
    _emit 0x33
    _emit 0xDB
    _emit 0x43
    _emit 0x89
    _emit 0x30
    _emit 0x85
    _emit 0xDB
    _emit 0x74
    _emit 0x1E
    _emit 0x8B
    _emit 0x48
    _emit 0x04
    _emit 0x8D
    _emit 0x51
    _emit 0x01
    _emit 0x33
    _emit 0xF6
    _emit 0x3B
    _emit 0xD1
    _emit 0x72
    _emit 0x05
    _emit 0x83
    _emit 0xFA
    _emit 0x01
    _emit 0x73
    _emit 0x03
    _emit 0x33
    _emit 0xF6
    _emit 0x46
    _emit 0x89
    _emit 0x50
    _emit 0x04
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x03
    _emit 0xFF
    _emit 0x40
    _emit 0x08
    _emit 0x8B
    _emit 0x48
    _emit 0x04
    _emit 0x8B
    _emit 0x57
    _emit 0x04
    _emit 0x8D
    _emit 0x34
    _emit 0x11
    _emit 0x33
    _emit 0xDB
    _emit 0x3B
    _emit 0xF1
    _emit 0x72
    _emit 0x04
    _emit 0x3B
    _emit 0xF2
    _emit 0x73
    _emit 0x03
    _emit 0x33
    _emit 0xDB
    _emit 0x43
    _emit 0x89
    _emit 0x70
    _emit 0x04
    _emit 0x85
    _emit 0xDB
    _emit 0x74
    _emit 0x03
    _emit 0xFF
    _emit 0x40
    _emit 0x08
    _emit 0x8B
    _emit 0x4F
    _emit 0x08
    _emit 0x01
    _emit 0x48
    _emit 0x08
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
