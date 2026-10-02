/* LRESULT __stdcall FUN_0044fe00(HWND param_1, uint param_2, uint param_3, LPARAM param_4) @ 0044fe00  418 bytes */

#include "th12.h"

LRESULT __stdcall FUN_0044fe00(HWND param_1,uint param_2,uint param_3,LPARAM param_4)

{
  LRESULT LVar1;
  HCURSOR pHVar2;
  int iVar3;
  
  if (param_2 < 0x1d) {
    if (param_2 == 0x1c) {
      DAT_004cf400 = (uint)(param_3 == 0);
      DAT_004cf3fc = param_3;
      LVar1 = DefWindowProcA(param_1,0x1c,param_3,param_4);
      return LVar1;
    }
    if (param_2 == 5) {
      if (((DAT_004cf428 & 1) != 0) && (param_3 == 2)) {
        DAT_004cf428 = DAT_004cf428 & 0xfffffff3 | 2;
        LVar1 = DefWindowProcA(param_1,5,2,param_4);
        return LVar1;
      }
    }
    else {
      if (param_2 == 0x10) {
        DAT_004cee78 = DAT_004cee78 & 0xfffffeff | 0x80;
        return 1;
      }
      if (param_2 == 0x14) {
        return 1;
      }
    }
  }
  else {
    if (param_2 == 0x20) {
      if (DAT_004ce9fc != 0) {
        pHVar2 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        SetCursor(pHVar2);
        ShowCursor(1);
        return 1;
      }
      if (DAT_004cf400 != 0) {
        pHVar2 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        SetCursor(pHVar2);
        do {
          iVar3 = ShowCursor(1);
        } while (iVar3 < 0);
        return 1;
      }
      do {
        iVar3 = ShowCursor(0);
      } while (-1 < iVar3);
      SetCursor((HCURSOR)0x0);
      return 1;
    }
    if (param_2 == 0x112) {
      if ((param_3 & 0xfff0) == 0xf090) {
        return 1;
      }
      if ((param_3 & 0xfff0) == 0xf100) {
        return 1;
      }
    }
    else if (param_2 == 0x201) {
      SetForegroundWindow(param_1);
      LVar1 = DefWindowProcA(param_1,0x201,param_3,param_4);
      return LVar1;
    }
  }
  LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar1;
}


