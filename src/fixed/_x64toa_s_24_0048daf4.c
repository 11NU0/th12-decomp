/* int __stdcall @x64toa_s@24(uint param_1, uint param_2, uint param_3, uint param_4, char * param_5) @ 0048daf4  248 bytes */
#include "th12.h"

/* Library Function - Single Match
    @x64toa_s@24
   
   Library: Visual Studio 2008 Release */

int __stdcall _x64toa_s_24(uint param_1,uint param_2,uint param_3,uint param_4,char *param_5)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  uint extraout_ECX;
  char *pcVar4;
  char *unaff_EDI;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  uint local_8;
  
  if ((unaff_EDI == (char *)0x0) || (param_3 == 0)) {
LAB_0048db04:
    piVar2 = __errno();
    iVar8 = 0x16;
  }
  else {
    *unaff_EDI = '\0';
    if ((param_5 != (char *)0x0) + 1 < param_3) {
      if (param_4 - 2 < 0x23) {
        bVar6 = param_5 != (char *)0x0;
        param_5 = unaff_EDI;
        if (bVar6) {
          bVar5 = param_1 != 0;
          param_1 = -param_1;
          *unaff_EDI = '-';
          param_5 = unaff_EDI + 1;
          param_2 = -(param_2 + bVar5);
        }
        local_8 = (uint)bVar6;
        uVar7 = (ulonglong)param_1;
        pcVar1 = param_5;
        do {
          pcVar4 = pcVar1;
          uVar7 = __aulldvrm((uint)uVar7,param_2,param_4,0);
          param_2 = (uint)(uVar7 >> 0x20);
          if (extraout_ECX < 10) {
            cVar3 = (char)extraout_ECX + '0';
          }
          else {
            cVar3 = (char)extraout_ECX + 'W';
          }
          *pcVar4 = cVar3;
          local_8 = local_8 + 1;
        } while ((uVar7 != 0) && (pcVar1 = pcVar4 + 1, local_8 < param_3));
        if (local_8 < param_3) {
          pcVar4[1] = '\0';
          do {
            cVar3 = *pcVar4;
            *pcVar4 = *param_5;
            pcVar4 = pcVar4 + -1;
            *param_5 = cVar3;
            param_5 = param_5 + 1;
          } while (param_5 < pcVar4);
          return 0;
        }
        *unaff_EDI = '\0';
        piVar2 = __errno();
        iVar8 = 0x22;
        *piVar2 = 0x22;
        goto LAB_0048db0e;
      }
      goto LAB_0048db04;
    }
    piVar2 = __errno();
    iVar8 = 0x22;
  }
  *piVar2 = iVar8;
LAB_0048db0e:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return iVar8;
}


