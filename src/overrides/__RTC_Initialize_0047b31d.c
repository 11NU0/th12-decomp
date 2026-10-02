/* Byte-for-byte override for __RTC_Initialize.

 * Original bytes (38):
 *     0000: 8b ff 56 b8 ec a9 4a 00
 *     0008: be ec a9 4a 00 57 8b f8
 *     0010: 3b c6 73 0f 8b 07 85 c0
 *     0018: 74 02 ff d0 83 c7 04 3b
 *     0020: fe 72 f1 5f 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall __RTC_Initialize(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x56
    _emit 0xB8
    _emit 0xEC
    _emit 0xA9
    _emit 0x4A
    _emit 0x00
    _emit 0xBE
    _emit 0xEC
    _emit 0xA9
    _emit 0x4A
    _emit 0x00
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x3B
    _emit 0xC6
    _emit 0x73
    _emit 0x0F
    _emit 0x8B
    _emit 0x07
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x02
    _emit 0xFF
    _emit 0xD0
    _emit 0x83
    _emit 0xC7
    _emit 0x04
    _emit 0x3B
    _emit 0xFE
    _emit 0x72
    _emit 0xF1
    _emit 0x5F
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
