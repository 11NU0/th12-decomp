/* undefined __fastcall _ProcessCodePage(CHAR * param_1) @ 00485a7c  164 bytes */
#include "th12.h"

/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2008 Release */

void __fastcall _ProcessCodePage(CHAR *param_1)

{
  int iVar1;
  int unaff_EDI;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  if (((param_1 == (CHAR *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,"ACP"), iVar1 == 0)) {
    iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),0x1004,local_10,8);
    if (iVar1 == 0) goto LAB_00485adb;
    iVar1 = _strcmp(local_10,"0");
    if (iVar1 == 0) {
      GetACP();
      goto LAB_00485adb;
    }
LAB_00485ad1:
    param_1 = local_10;
  }
  else {
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),0xb,local_10,8);
      if (iVar1 == 0) goto LAB_00485adb;
      goto LAB_00485ad1;
    }
  }
  _atol(param_1);
LAB_00485adb:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


