/* bool __stdcall __isindst_nolock(void) @ 00476da8  469 bytes */

#include "th12.h"

/* Library Function - Single Match
    __isindst_nolock
   
   Library: Visual Studio 2008 Release */

bool __stdcall __isindst_nolock(void)

{
  bool bVar1;
  errno_t eVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *unaff_EDI;
  uint uVar7;
  uint uVar8;
  int local_c;
  int local_8;
  
  local_8 = 0;
  eVar2 = __get_daylight(&local_8);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  uVar7 = unaff_EDI[5];
  if ((uVar7 != DAT_004adae0) || (uVar7 != DAT_004adaec)) {
    if (DAT_004b41c4 == 0) {
      iVar6 = 2;
      local_c = 1;
      if ((int)uVar7 < 0x6b) {
        iVar6 = 1;
        local_c = 5;
      }
      _cvtdate((void *)0x2,1,1,uVar7,iVar6,0,0,0,0,0);
      _cvtdate((void *)0x2,0,1,unaff_EDI[5],local_c,0,0,0,0,0);
    }
    else {
      if (DAT_004b41b0 != 0) {
        uVar8 = (uint)DAT_004b41b6;
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)DAT_004b41b4;
        uVar8 = 0;
        uVar4 = (uint)DAT_004b41b6;
      }
      _cvtdate((void *)(uint)DAT_004b41b8,1,(uint)(DAT_004b41b0 == 0),uVar7,uVar4,uVar3,uVar8,
               (uint)DAT_004b41ba,(uint)DAT_004b41bc,(uint)DAT_004b41be);
      if (DAT_004b415c != 0) {
        uVar8 = (uint)DAT_004b4162;
        uVar3 = 0;
        uVar4 = 0;
        uVar7 = unaff_EDI[5];
      }
      else {
        uVar3 = (uint)DAT_004b4160;
        uVar8 = 0;
        uVar4 = (uint)DAT_004b4162;
        uVar7 = unaff_EDI[5];
      }
      _cvtdate((void *)(uint)DAT_004b4164,0,(uint)(DAT_004b415c == 0),uVar7,uVar4,uVar3,uVar8,
               (uint)DAT_004b4166,(uint)DAT_004b4168,(uint)DAT_004b416a);
    }
  }
  iVar6 = unaff_EDI[7];
  if (DAT_004adae4 < DAT_004adaf0) {
    if ((iVar6 < DAT_004adae4) || (DAT_004adaf0 < iVar6)) {
      return false;
    }
    if ((DAT_004adae4 < iVar6) && (iVar6 < DAT_004adaf0)) {
      return true;
    }
  }
  else {
    if (iVar6 < DAT_004adaf0) {
      return true;
    }
    if (DAT_004adae4 < iVar6) {
      return true;
    }
    if ((DAT_004adaf0 < iVar6) && (iVar6 < DAT_004adae4)) {
      return false;
    }
  }
  iVar5 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar6 == DAT_004adae4) {
    bVar1 = DAT_004adae8 <= iVar5;
  }
  else {
    bVar1 = iVar5 < DAT_004adaf4;
  }
  return bVar1;
}


