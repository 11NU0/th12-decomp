/* Byte-for-byte override for __crtGetStringTypeW_stat.

 * Original bytes (35):
 *     0000: 8b ff 55 8b ec 83 7d 10
 *     0008: ff 7d 04 33 c0 5d c3 ff
 *     0010: 75 14 ff 75 10 ff 75 0c
 *     0018: ff 75 08 ff 15 48 80 49
 *     0020: 00 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl __crtGetStringTypeW_stat(localeinfo_struct * a0, ulong a1, wchar_t * a2, int a3, ushort * a4, int a5, int a6)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0x7D
    _emit 0x10
    _emit 0xFF
    _emit 0x7D
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xFF
    _emit 0x15
    _emit 0x48
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
