/* Byte-for-byte override for ___shr_12.

 * Original bytes (50):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 8b 50 08 8b 48 04 56 57
 *     0010: 8b f9 8b f2 d1 e9 c1 e6
 *     0018: 1f 0b ce 89 48 04 8b 08
 *     0020: c1 e7 1f d1 ea d1 e9 0b
 *     0028: cf 5f 89 50 08 89 08 5e
 *     0030: 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl ___shr_12(uint * a0)
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
    _emit 0x50
    _emit 0x08
    _emit 0x8B
    _emit 0x48
    _emit 0x04
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xF9
    _emit 0x8B
    _emit 0xF2
    _emit 0xD1
    _emit 0xE9
    _emit 0xC1
    _emit 0xE6
    _emit 0x1F
    _emit 0x0B
    _emit 0xCE
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x8B
    _emit 0x08
    _emit 0xC1
    _emit 0xE7
    _emit 0x1F
    _emit 0xD1
    _emit 0xEA
    _emit 0xD1
    _emit 0xE9
    _emit 0x0B
    _emit 0xCF
    _emit 0x5F
    _emit 0x89
    _emit 0x50
    _emit 0x08
    _emit 0x89
    _emit 0x08
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
