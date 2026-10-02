/* int __cdecl __cinit(int param_1) @ 00472d44  133 bytes */
#include "th12.h"

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_0049d574);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_00498338,(undefined4 *)&DAT_00498354);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_0047b343);
    __initterm((undefined4 *)&DAT_00498334);
    if ((DAT_004d6438 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004d6438), BVar1 != 0)) {
      (*DAT_004d6438)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}


