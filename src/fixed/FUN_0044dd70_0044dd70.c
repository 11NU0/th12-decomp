/* undefined __stdcall FUN_0044dd70(int param_1, int param_2, int param_3, COLORREF param_4, COLORREF param_5) @ 0044dd70  222 bytes */
#include "th12.h"

void __stdcall FUN_0044dd70(int param_1,int param_2,int param_3,COLORREF param_4,COLORREF param_5)

{
  LPCSTR **pszFaceName;
  HFONT local_30;
  int local_2c;
  int local_28;
  LPCSTR *local_20 [5];
  uint local_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_30;
  FUN_0044d420(&local_30);
  local_2c = 0;
  local_28 = param_3;
  if (local_30 != (HFONT)0x0) {
    DeleteObject(local_30);
    local_30 = (HFONT)0x0;
  }
  pszFaceName = (LPCSTR **)local_20[0];
  if (local_c < 0x10) {
    pszFaceName = local_20;
  }
  local_30 = CreateFontA(local_28,local_2c,0,0,iStack_8,0,0,0,1,0,0,0,0x30,(LPCSTR)pszFaceName);
  FUN_0044de50(param_1,param_2,local_30,param_4,param_5);
  if (local_30 != (HFONT)0x0) {
    DeleteObject(local_30);
    local_30 = (HFONT)0x0;
  }
  if (0xf < local_c) {
    FUN_0046ca4f(local_20[0]);
  }
  ___security_check_cookie_4(local_4 ^ (uint)&local_30);
  return;
}


