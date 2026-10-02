/* int __thiscall _xtoa_s@20(void * this, uint param_1, uint param_2, int param_3) @ 0048d9ac  221 bytes */
#include "th12.h"

/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2008 Release */

int __fastcall _xtoa_s_20(void *this,uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  int *piVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  uint local_8;
  
  if (this == (void *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_0048d9e0:
    piVar3 = __errno();
    iVar7 = 0x16;
  }
  else {
    *(undefined *)this = 0;
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_0048d9e0;
      pcVar6 = (char *)this;
      if (param_3 != 0) {
        *(undefined *)this = 0x2d;
        pcVar6 = (char *)((int)this + 1);
        in_EAX = -in_EAX;
      }
      local_8 = (uint)(param_3 != 0);
      pcVar2 = pcVar6;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        local_8 = local_8 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, local_8 < param_1));
      if (local_8 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar6;
          pcVar4 = pcVar4 + -1;
          *pcVar6 = cVar5;
          pcVar6 = pcVar6 + 1;
        } while (pcVar6 < pcVar4);
        return 0;
      }
      *(undefined *)this = 0;
    }
    piVar3 = __errno();
    iVar7 = 0x22;
  }
  *piVar3 = iVar7;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return iVar7;
}


