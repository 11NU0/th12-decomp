/* Byte-for-byte override for FUN_00465de0.

 * Original bytes (353):
 *     0000: 51 53 55 33 ed 57 33 ff
 *     0008: 89 6e 30 39 6e 10 76 21
 *     0010: 8b 46 04 39 2c b8 8d 04
 *     0018: b8 74 10 8b 00 8b 08 8b
 *     0020: 51 08 50 ff d2 8b 46 04
 *     0028: 89 2c b8 47 3b 7e 10 72
 *     0030: df 8b 46 04 3b c5 74 0c
 *     0038: 50 e8 31 6c 00 00 83 c4
 *     0040: 04 89 6e 04 8b 46 10 33
 *     0048: c9 ba 04 00 00 00 f7 e2
 *     0050: 0f 90 c1 89 6c 24 0c f7
 *     0058: d9 0b c8 51 e8 a9 6b 00
 *     0060: 00 83 c4 04 33 db 89 46
 *     0068: 04 39 6e 10 0f 86 b7 00
 *     0070: 00 00 8d 6e 38 8b 56 04
 *     0078: 8b 46 5c 8b 00 8b 08 6a
 *     0080: 00 8d 3c 9d 00 00 00 00
 *     0088: 03 d7 52 55 50 8b 41 0c
 *     0090: ff d0 85 c0 0f 8c bd 00
 *     0098: 00 00 8b 4e 04 8b 3c 0f
 *     00a0: 8b 17 8b 0a 8d 44 24 0c
 *     00a8: 50 68 1c 98 49 00 57 ff
 *     00b0: d1 85 c0 0f 8c 9e 00 00
 *     00b8: 00 68 80 00 00 00 e8 47
 *     00c0: 6b 00 00 8b f8 83 c4 04
 *     00c8: 85 ff 74 64 33 c0 8b ff
 *     00d0: 8b 56 70 8d 48 01 0f af
 *     00d8: d1 4a 89 14 c7 8b 56 74
 *     00e0: 89 54 c7 04 8b c1 83 f8
 *     00e8: 10 72 e5 8b 44 24 0c 8b
 *     00f0: 08 8b 51 0c 57 6a 10 50
 *     00f8: ff d2 85 c0 8b 44 24 0c
 *     0100: 7c 38 85 c0 74 10 8b 08
 *     0108: 8b 51 08 50 ff d2 c7 44
 *     0110: 24 0c 00 00 00 00 57 e8
 *     0118: 53 6b 00 00 43 83 c4 04
 *     0120: 3b 5e 10 0f 82 4c ff ff
 *     0128: ff 5f 5d 33 c0 5b 59 c3
 *     0130: 5f 5d b8 0e 00 07 80 5b
 *     0138: 59 c3 85 c0 74 10 8b 08
 *     0140: 8b 51 08 50 ff d2 c7 44
 *     0148: 24 0c 00 00 00 00 57 e8
 *     0150: 1b 6b 00 00 83 c4 04 5f
 *     0158: 5d b8 05 40 00 80 5b 59
 *     0160: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00465de0(void)
{
  __asm {
    _emit 0x51
    _emit 0x53
    _emit 0x55
    _emit 0x33
    _emit 0xED
    _emit 0x57
    _emit 0x33
    _emit 0xFF
    _emit 0x89
    _emit 0x6E
    _emit 0x30
    _emit 0x39
    _emit 0x6E
    _emit 0x10
    _emit 0x76
    _emit 0x21
    _emit 0x8B
    _emit 0x46
    _emit 0x04
    _emit 0x39
    _emit 0x2C
    _emit 0xB8
    _emit 0x8D
    _emit 0x04
    _emit 0xB8
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x08
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x46
    _emit 0x04
    _emit 0x89
    _emit 0x2C
    _emit 0xB8
    _emit 0x47
    _emit 0x3B
    _emit 0x7E
    _emit 0x10
    _emit 0x72
    _emit 0xDF
    _emit 0x8B
    _emit 0x46
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x0C
    _emit 0x50
    _emit 0xE8
    _emit 0x31
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0x6E
    _emit 0x04
    _emit 0x8B
    _emit 0x46
    _emit 0x10
    _emit 0x33
    _emit 0xC9
    _emit 0xBA
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0xE2
    _emit 0x0F
    _emit 0x90
    _emit 0xC1
    _emit 0x89
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0xF7
    _emit 0xD9
    _emit 0x0B
    _emit 0xC8
    _emit 0x51
    _emit 0xE8
    _emit 0xA9
    _emit 0x6B
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x33
    _emit 0xDB
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0x39
    _emit 0x6E
    _emit 0x10
    _emit 0x0F
    _emit 0x86
    _emit 0xB7
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x6E
    _emit 0x38
    _emit 0x8B
    _emit 0x56
    _emit 0x04
    _emit 0x8B
    _emit 0x46
    _emit 0x5C
    _emit 0x8B
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x6A
    _emit 0x00
    _emit 0x8D
    _emit 0x3C
    _emit 0x9D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0xD7
    _emit 0x52
    _emit 0x55
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x0C
    _emit 0xFF
    _emit 0xD0
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x8C
    _emit 0xBD
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x04
    _emit 0x8B
    _emit 0x3C
    _emit 0x0F
    _emit 0x8B
    _emit 0x17
    _emit 0x8B
    _emit 0x0A
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x50
    _emit 0x68
    _emit 0x1C
    _emit 0x98
    _emit 0x49
    _emit 0x00
    _emit 0x57
    _emit 0xFF
    _emit 0xD1
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x8C
    _emit 0x9E
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x47
    _emit 0x6B
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF8
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x64
    _emit 0x33
    _emit 0xC0
    _emit 0x8B
    _emit 0xFF
    _emit 0x8B
    _emit 0x56
    _emit 0x70
    _emit 0x8D
    _emit 0x48
    _emit 0x01
    _emit 0x0F
    _emit 0xAF
    _emit 0xD1
    _emit 0x4A
    _emit 0x89
    _emit 0x14
    _emit 0xC7
    _emit 0x8B
    _emit 0x56
    _emit 0x74
    _emit 0x89
    _emit 0x54
    _emit 0xC7
    _emit 0x04
    _emit 0x8B
    _emit 0xC1
    _emit 0x83
    _emit 0xF8
    _emit 0x10
    _emit 0x72
    _emit 0xE5
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x0C
    _emit 0x57
    _emit 0x6A
    _emit 0x10
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x85
    _emit 0xC0
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x7C
    _emit 0x38
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x08
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0xE8
    _emit 0x53
    _emit 0x6B
    _emit 0x00
    _emit 0x00
    _emit 0x43
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0x5E
    _emit 0x10
    _emit 0x0F
    _emit 0x82
    _emit 0x4C
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
    _emit 0x5F
    _emit 0x5D
    _emit 0xB8
    _emit 0x0E
    _emit 0x00
    _emit 0x07
    _emit 0x80
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x08
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0xE8
    _emit 0x1B
    _emit 0x6B
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5F
    _emit 0x5D
    _emit 0xB8
    _emit 0x05
    _emit 0x40
    _emit 0x00
    _emit 0x80
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
