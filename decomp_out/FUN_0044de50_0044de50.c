/* undefined4 __stdcall FUN_0044de50(int param_1, int param_2, HGDIOBJ param_3, COLORREF param_4, COLORREF param_5) @ 0044de50  525 bytes */
#include "th12.h"

uint FUN_0044de50(int param_1,int param_2,HGDIOBJ param_3,COLORREF param_4,COLORREF param_5)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  uint in_EAX;
  HGDIOBJ pvVar3;
  int iVar4;
  LPCSTR unaff_EDI;
  tagRECT tStack_70;
  tagRECT tStack_60;
  tagRECT tStack_50;
  tagRECT tStack_40;
  tagRECT tStack_30;
  tagRECT tStack_20;
  tagRECT tStack_10;
  
  if (unaff_EDI == (LPCSTR)0x0) {
    return in_EAX & 0xffffff00;
  }
  iVar1 = *(int *)(in_EAX + 0x104);
  iVar2 = *(int *)(in_EAX + 0x108);
  hdc = *(HDC *)(in_EAX + 0x114);
  pvVar3 = SelectObject(hdc,param_3);
  SetBkMode(hdc,1);
  if (param_5 != 0xffffffff) {
    SetTextColor(hdc,param_5);
    tStack_70.left = param_1;
    iVar4 = param_1 + iVar1;
    tStack_70.right = iVar4 + -2;
    tStack_70.bottom = iVar2 + param_2 + -2;
    tStack_70.top = param_2;
    DrawTextA(hdc,unaff_EDI,-1,&tStack_70,0);
    tStack_50.bottom = iVar2 + param_2;
    tStack_40.left = param_1 + 1;
    tStack_40.top = param_2 + 2;
    tStack_40.right = iVar4 + 1;
    tStack_40.bottom = tStack_50.bottom + 2;
    tStack_50.left = param_1 + 2;
    tStack_10.top = param_2 + 2;
    tStack_20.left = param_1;
    tStack_20.top = param_2 + 2;
    tStack_50.right = iVar4 + 2;
    tStack_50.top = param_2;
    tStack_30.top = param_2;
    tStack_30.left = tStack_50.left;
    tStack_30.right = tStack_50.right;
    tStack_30.bottom = tStack_50.bottom;
    tStack_20.right = iVar4;
    tStack_20.bottom = tStack_40.bottom;
    tStack_10.left = tStack_50.left;
    tStack_10.right = tStack_50.right;
    tStack_10.bottom = tStack_40.bottom;
    DrawTextA(hdc,unaff_EDI,-1,&tStack_50,0);
    DrawTextA(hdc,unaff_EDI,-1,&tStack_40,0);
    DrawTextA(hdc,unaff_EDI,-1,&tStack_30,0);
    DrawTextA(hdc,unaff_EDI,-1,&tStack_20,0);
    DrawTextA(hdc,unaff_EDI,-1,&tStack_10,0);
  }
  SetTextColor(hdc,param_4);
  tStack_60.left = param_1 + 1;
  tStack_60.top = param_2 + 1;
  tStack_60.right = iVar1 + 1 + param_1;
  tStack_60.bottom = iVar2 + 1 + param_2;
  DrawTextA(hdc,unaff_EDI,-1,&tStack_60,0);
  pvVar3 = SelectObject(hdc,pvVar3);
  return CONCAT31((int3)((uint)pvVar3 >> 8),1);
}


