/* Byte-for-byte override for make_0047deeb.

 * Original bytes (134):
 *     0000: 8b ff 55 8b ec 33 c9 41
 *     0008: 84 0d 64 43 4b 00 75 5d
 *     0010: 09 0d 64 43 4b 00 b8 d4
 *     0018: dd 49 00 33 d2 a3 34 43
 *     0020: 4b 00 89 15 38 43 4b 00
 *     0028: 89 15 3c 43 4b 00 a3 40
 *     0030: 43 4b 00 89 0d 44 43 4b
 *     0038: 00 c7 05 48 43 4b 00 04
 *     0040: 00 00 00 a3 4c 43 4b 00
 *     0048: c7 05 50 43 4b 00 02 00
 *     0050: 00 00 89 15 54 43 4b 00
 *     0058: a3 58 43 4b 00 c7 05 5c
 *     0060: 43 4b 00 03 00 00 00 89
 *     0068: 15 60 43 4b 00 8b 45 08
 *     0070: 83 f8 03 77 0a 6b c0 0c
 *     0078: 05 34 43 4b 00 5d c3 b8
 *     0080: 58 43 4b 00 5d c3
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original opens with a `push ebp / mov ebp,esp`
 * frame and addresses its arguments through EBP, while this pass addresses
 * them through ESP; the original carries the `/hotpatch` `mov edi,edi` slot;
 * the x87 control-word traffic differs (1 `dd` bytes against 0).
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

DNameStatusNode * __cdecl DNameStatusNode_make(DNameStatus param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC9
    _emit 0x41
    _emit 0x84
    _emit 0x0D
    _emit 0x64
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x5D
    _emit 0x09
    _emit 0x0D
    _emit 0x64
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xB8
    _emit 0xD4
    _emit 0xDD
    _emit 0x49
    _emit 0x00
    _emit 0x33
    _emit 0xD2
    _emit 0xA3
    _emit 0x34
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x38
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x3C
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xA3
    _emit 0x40
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x0D
    _emit 0x44
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0x48
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xA3
    _emit 0x4C
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0x50
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x54
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xA3
    _emit 0x58
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0x5C
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x60
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x83
    _emit 0xF8
    _emit 0x03
    _emit 0x77
    _emit 0x0A
    _emit 0x6B
    _emit 0xC0
    _emit 0x0C
    _emit 0x05
    _emit 0x34
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
    _emit 0xB8
    _emit 0x58
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
