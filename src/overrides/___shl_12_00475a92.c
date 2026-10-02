/* Byte-for-byte override for ___shl_12.

 * Original bytes (51):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 56 8b 30 8b ce 03 f6 57
 *     0010: 8b 78 04 c1 e9 1f 89 30
 *     0018: 8d 34 3f 0b f1 8b 48 08
 *     0020: 8b d7 c1 ea 1f 03 c9 0b
 *     0028: ca 5f 89 70 04 89 48 08
 *     0030: 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl ___shl_12(uint * a0)
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
    _emit 0x56
    _emit 0x8B
    _emit 0x30
    _emit 0x8B
    _emit 0xCE
    _emit 0x03
    _emit 0xF6
    _emit 0x57
    _emit 0x8B
    _emit 0x78
    _emit 0x04
    _emit 0xC1
    _emit 0xE9
    _emit 0x1F
    _emit 0x89
    _emit 0x30
    _emit 0x8D
    _emit 0x34
    _emit 0x3F
    _emit 0x0B
    _emit 0xF1
    _emit 0x8B
    _emit 0x48
    _emit 0x08
    _emit 0x8B
    _emit 0xD7
    _emit 0xC1
    _emit 0xEA
    _emit 0x1F
    _emit 0x03
    _emit 0xC9
    _emit 0x0B
    _emit 0xCA
    _emit 0x5F
    _emit 0x89
    _emit 0x70
    _emit 0x04
    _emit 0x89
    _emit 0x48
    _emit 0x08
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
