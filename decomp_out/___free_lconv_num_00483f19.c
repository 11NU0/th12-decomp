/* undefined __cdecl ___free_lconv_num(undefined4 * param_1) @ 00483f19  69 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_004adf68) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_004adf6c) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_004adf70) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


