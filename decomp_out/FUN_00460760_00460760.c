/* undefined __cdecl FUN_00460760(COLORREF param_1, COLORREF param_2, undefined4 param_3, uint param_4, char * param_5) @ 00460760  157 bytes */
#include "th12.h"

void __cdecl
FUN_00460760(COLORREF param_1,COLORREF param_2,undefined4 param_3,uint param_4,char *param_5)

{
  undefined4 *puVar1;
  int unaff_ESI;
  char local_88 [132];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_88;
  _vsprintf(local_88,param_5,&stack0x00000018);
  puVar1 = *(undefined4 **)(*(int *)(unaff_ESI + 0x3f4) + 8);
  FUN_004606b0(param_3,puVar1,(int *)*puVar1,*(int *)(unaff_ESI + 0x3f4),param_3,param_1,param_2,
               *(uint *)(unaff_ESI + 0x480) >> 3 & 1,param_4);
  *(uint *)(unaff_ESI + 0x47c) = *(uint *)(unaff_ESI + 0x47c) | 1;
  ___security_check_cookie_4(local_4 ^ (uint)local_88);
  return;
}


