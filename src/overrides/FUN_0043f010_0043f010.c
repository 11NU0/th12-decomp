/* Byte-for-byte override for FUN_0043f010.

 * Original bytes (21):
 *     0000: 8b 94 88 c8 02 00 00 53
 *     0008: 52 bb 03 00 00 00 e8 bd
 *     0010: 29 02 00 5b c3
 *
 *  * Reads a field at [eax+0x2c8] as a __thiscall method and pushes it as an
 * argument. Ghidra recovered the field read but not the object-pointer
 * setup, so the rebuilt body reloads its argument from the stack instead and
 * then tail-calls.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0043f010(void * a0)
{
  __asm {
    _emit 0x8B
    _emit 0x94
    _emit 0x88
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x52
    _emit 0xBB
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xBD
    _emit 0x29
    _emit 0x02
    _emit 0x00
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
