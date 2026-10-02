/* undefined __fastcall FUN_0044e660(LPCSTR param_1, int param_2, int * param_3, int param_4, COLORREF param_5, COLORREF param_6, int * param_7, uint param_8) @ 0044e660  631 bytes */
#include "th12.h"

typedef struct param_8__u { undefined4 _; undefined1 _0_2_; } param_8__u;
void __fastcall
FUN_0044e660(LPCSTR param_1,int param_2,int *param_3,int param_4,COLORREF param_5,COLORREF param_6,
            int *param_7,uint param_8)

{
  uint uVar1;
  char cVar2;
  HDC hdc;
  int in_EAX;
  HGDIOBJ h;
  LPCSTR pCVar3;
  int iVar4;
  int iStack_20;
  HGDIOBJ pvStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  int *piStack_4;
  
  h = DAT_004ce554;
  if (((in_EAX != 0) && (h = DAT_004ce550, in_EAX != 1)) && (h = DAT_004cc54c, in_EAX != 2)) {
    h = DAT_004b453c;
  }
  if (param_4 < 0x11) {
    param_4 = 0x11;
  }
  _memset(DAT_004b0e68,0,DAT_004b0e54);
  hdc = DAT_004b0e5c;
  pvStack_1c = SelectObject(DAT_004b0e5c,h);
  FUN_0044dc20(param_4 * 2 + 6);
  SetBkMode(hdc,1);
  uVar1 = param_8;
  pCVar3 = param_1;
  do {
    cVar2 = *pCVar3;
    pCVar3 = pCVar3 + 1;
  } while (cVar2 != '\0');
  iVar4 = (int)pCVar3 - (int)(param_1 + 1);
  if (param_8 == 0) {
    SetTextColor(hdc,param_6);
    param_6 = param_2 * 2;
    TextOutA(hdc,param_6 + 2,4,param_1,iVar4);
    TextOutA(hdc,param_6 - 2,4,param_1,iVar4);
    TextOutA(hdc,param_6 + 2,0,param_1,iVar4);
    TextOutA(hdc,param_6 - 2,0,param_1,iVar4);
    SetTextColor(hdc,param_5);
    TextOutA(hdc,param_6,2,param_1,iVar4);
  }
  else {
    param_8 = param_8 & 0xff000000;
    if (0 < iVar4) {
      iStack_18 = uVar1 * 2;
      pCVar3 = param_1 + 1;
      iStack_20 = (iVar4 - 1U >> 1) + 1;
      iVar4 = param_2 * 2 + -2;
      do {
        SetTextColor(hdc,param_6);
        ((param_8__u *)&param_8)->_0_2_ = CONCAT11(*pCVar3,pCVar3[-1]);
        TextOutA(hdc,iVar4 + 4,4,(LPCSTR)&param_8,2);
        TextOutA(hdc,iVar4,4,(LPCSTR)&param_8,2);
        TextOutA(hdc,iVar4 + 4,0,(LPCSTR)&param_8,2);
        TextOutA(hdc,iVar4,0,(LPCSTR)&param_8,2);
        SetTextColor(hdc,param_5);
        TextOutA(hdc,iVar4 + 2,2,(LPCSTR)&param_8,2);
        iVar4 = iVar4 + iStack_18;
        pCVar3 = pCVar3 + 2;
        iStack_20 = iStack_20 + -1;
      } while (iStack_20 != 0);
    }
  }
  SelectObject(hdc,pvStack_1c);
  uVar1 = param_4 * 2 + 6;
  FUN_0044dc20(uVar1);
  FUN_0044d8b0(uVar1);
  SelectObject(hdc,pvStack_1c);
  iStack_c = (param_3[2] - *param_3) * 2 + 0x16;
  iStack_8 = param_4 * 2 + 2;
  uStack_14 = 0;
  uStack_10 = 0;
  if (0x400 < iStack_c) {
    iStack_c = 0x400;
  }
  (**(code **)(*param_7 + 0x48))(param_7,0,&param_4);
  D3DXLoadSurfaceFromMemory
            (piStack_4,0,param_3,DAT_004b0e68,DAT_004b0e48,DAT_004b0e58,0,&iStack_20,4,0);
  if (piStack_4 != (int *)0x0) {
    (**(code **)(*piStack_4 + 8))(piStack_4);
  }
  return;
}


