/* Hand-corrected override for FUN_0046da2c.
 *
 * The body is `FUN_00472c82(0); return;` and the original really is
 *
 *     e8 51 52 00 00   call FUN_00472c82
 *     c3               ret
 *
 * a forward call followed by a `ret`, i.e. a sibling call that the original author
 * wrote out longhand. VC9 at /O2 recognises the pattern and folds it into a bare
 * tail jump, emitting `e9 00 00 00 00` (`jmp FUN_00472c82`), which is five bytes
 * where the original has six. There is nothing in the C source to tell it that the
 * `call` has to stay a call - an `__asm {}` barrier does not stop it either, the
 * same way it does not stop the rewrite in FUN_0049149e.
 *
 * The call is therefore written in inline asm, which the compiler cannot retarget,
 * and the trailing `ret` is the one the function already ends with. The call
 * displacement is a relocation, so only the opcode and length matter here.
 */
#include "th12.h"

void __stdcall FUN_0046da2c(void)
{
  __asm {
    call FUN_00472c82
  }
}