/* int __thiscall _cvtdate(void * this, int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9) @ 00476bb1  500 bytes */

#include "th12.h"

/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2008 Release */

int __thiscall
_cvtdate(void *this,int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
        int param_7,int param_8,int param_9)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      iVar4 = *(int *)(&DAT_004ae298 + in_EAX * 4);
    }
    else {
      iVar4 = *(int *)(&DAT_004ae2cc + in_EAX * 4);
    }
    iVar6 = iVar4 + 1;
    iVar5 = (int)(param_3 * 0x16d + -0x63db +
                 ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2) + iVar6 +
                 ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100)) % 7;
    iVar2 = (param_4 * 7 - iVar5) + param_5;
    if (iVar5 <= param_5) {
      iVar6 = iVar4 + -6;
    }
    iVar6 = iVar6 + iVar2;
    if (param_4 == 5) {
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar2 = *(int *)(&DAT_004ae29c + in_EAX * 4);
      }
      else {
        iVar2 = (&DAT_004ae2d0)[in_EAX];
      }
      if (iVar2 < iVar6) {
        iVar6 = iVar6 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar7) && (iVar2 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar2 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      iVar6 = *(int *)(&DAT_004ae298 + in_EAX * 4);
    }
    else {
      iVar6 = *(int *)(&DAT_004ae2cc + in_EAX * 4);
    }
    iVar6 = iVar6 + param_6;
  }
  iVar4 = (((int)this * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_004adae0 = param_3;
    DAT_004adae4 = iVar6;
    DAT_004adae8 = iVar4;
  }
  else {
    DAT_004adaf0 = iVar6;
    DAT_004adaf4 = iVar4;
    eVar3 = __get_dstbias(&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_004adaf4 = DAT_004adaf4 + iVar2;
    if (DAT_004adaf4 < 0) {
      DAT_004adaf4 = DAT_004adaf4 + 86400000;
      DAT_004adaf0 = DAT_004adaf0 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_004adaf4) {
        DAT_004adaf4 = DAT_004adaf4 + -86400000;
        DAT_004adaf0 = DAT_004adaf0 + 1;
      }
    }
    DAT_004adaec = param_3;
  }
  return iVar2;
}


