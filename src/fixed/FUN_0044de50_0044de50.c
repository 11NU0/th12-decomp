/* undefined4 __stdcall FUN_0044de50(int param_1, int param_2, HGDIOBJ param_3, COLORREF param_4, COLORREF param_5) @ 0044de50  525 bytes */
#include "th12.h"

typedef struct tStack_70__u { undefined4 _; undefined4 left; undefined4 right; undefined4 bottom; undefined4 top; } tStack_70__u;
typedef struct tStack_60__u { undefined4 _; undefined4 left; undefined4 top; undefined4 right; undefined4 bottom; } tStack_60__u;
typedef struct tStack_50__u { undefined4 _; undefined4 bottom; undefined4 left; undefined4 right; undefined4 top; } tStack_50__u;
typedef struct tStack_40__u { undefined4 _; undefined4 left; undefined4 top; undefined4 right; undefined4 bottom; } tStack_40__u;
typedef struct tStack_30__u { undefined4 _; undefined4 top; undefined4 left; undefined4 right; undefined4 bottom; } tStack_30__u;
typedef struct tStack_20__u { undefined4 _; undefined4 left; undefined4 top; undefined4 right; undefined4 bottom; } tStack_20__u;
typedef struct tStack_10__u { undefined4 _; undefined4 top; undefined4 left; undefined4 right; undefined4 bottom; } tStack_10__u;
uint __stdcall FUN_0044de50(int param_1,int param_2,HGDIOBJ param_3,COLORREF param_4,COLORREF param_5)

{
  tStack_50__u *tStack_50__u_alias;
  tStack_40__u *tStack_40__u_alias;
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
  iVar1 = *(int *)((int)in_EAX + 0x104);
  iVar2 = *(int *)((int)in_EAX + 0x108);
  hdc = *(HDC *)((int)in_EAX + 0x114);
  pvVar3 = SelectObject(hdc,param_3);
  SetBkMode(hdc,1);
  if (param_5 != 0xffffffff) {
    SetTextColor(hdc,param_5);
    ((tStack_70__u *)&tStack_70)->left = param_1;
    iVar4 = param_1 + iVar1;
    ((tStack_70__u *)&tStack_70)->right = iVar4 + -2;
    ((tStack_70__u *)&tStack_70)->bottom = iVar2 + param_2 + -2;
    ((tStack_70__u *)&tStack_70)->top = param_2;
    DrawTextA(hdc,unaff_EDI,-1,&tStack_70,0);
    ((tStack_50__u *)&tStack_50)->bottom = iVar2 + param_2;
    ((tStack_40__u *)&tStack_40)->left = param_1 + 1;
    ((tStack_40__u *)&tStack_40)->top = param_2 + 2;
    ((tStack_40__u *)&tStack_40)->right = iVar4 + 1;
  tStack_50__u_alias = (tStack_50__u *)&tStack_50;
    ((tStack_40__u *)&tStack_40)->bottom = tStack_50__u_alias->bottom + 2;
    ((tStack_50__u *)&tStack_50)->left = param_1 + 2;
    ((tStack_10__u *)&tStack_10)->top = param_2 + 2;
    ((tStack_20__u *)&tStack_20)->left = param_1;
    ((tStack_20__u *)&tStack_20)->top = param_2 + 2;
    ((tStack_50__u *)&tStack_50)->right = iVar4 + 2;
    ((tStack_50__u *)&tStack_50)->top = param_2;
    ((tStack_30__u *)&tStack_30)->top = param_2;
  tStack_50__u_alias = (tStack_50__u *)&tStack_50;
    ((tStack_30__u *)&tStack_30)->left = tStack_50__u_alias->left;
  tStack_50__u_alias = (tStack_50__u *)&tStack_50;
    ((tStack_30__u *)&tStack_30)->right = tStack_50__u_alias->right;
  tStack_50__u_alias = (tStack_50__u *)&tStack_50;
    ((tStack_30__u *)&tStack_30)->bottom = tStack_50__u_alias->bottom;
    ((tStack_20__u *)&tStack_20)->right = iVar4;
  tStack_40__u_alias = (tStack_40__u *)&tStack_40;
    ((tStack_20__u *)&tStack_20)->bottom = tStack_40__u_alias->bottom;
  tStack_50__u_alias = (tStack_50__u *)&tStack_50;
    ((tStack_10__u *)&tStack_10)->left = tStack_50__u_alias->left;
  tStack_50__u_alias = (tStack_50__u *)&tStack_50;
    ((tStack_10__u *)&tStack_10)->right = tStack_50__u_alias->right;
  tStack_40__u_alias = (tStack_40__u *)&tStack_40;
    ((tStack_10__u *)&tStack_10)->bottom = tStack_40__u_alias->bottom;
    DrawTextA(hdc,unaff_EDI,-1,&tStack_50,0);
    DrawTextA(hdc,unaff_EDI,-1,&tStack_40,0);
    DrawTextA(hdc,unaff_EDI,-1,&tStack_30,0);
    DrawTextA(hdc,unaff_EDI,-1,&tStack_20,0);
    DrawTextA(hdc,unaff_EDI,-1,&tStack_10,0);
  }
  SetTextColor(hdc,param_4);
  ((tStack_60__u *)&tStack_60)->left = param_1 + 1;
  ((tStack_60__u *)&tStack_60)->top = param_2 + 1;
  ((tStack_60__u *)&tStack_60)->right = iVar1 + 1 + param_1;
  ((tStack_60__u *)&tStack_60)->bottom = iVar2 + 1 + param_2;
  DrawTextA(hdc,unaff_EDI,-1,&tStack_60,0);
  pvVar3 = SelectObject(hdc,pvVar3);
  return CONCAT31((int3)((uint)pvVar3 >> 8),1);
}


