/* undefined __fastcall _parse_cmdline(undefined4 param_1, byte * param_2, undefined4 * param_3, byte * param_4, int * param_5) @ 0047acef  410 bytes */

#include "th12.h"

/* Library Function - Single Match
    _parse_cmdline
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __fastcall
__fastcall _parse_cmdline(undefined4 param_1,byte *param_2,undefined4 *param_3,byte *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_5 = 1;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_4;
    param_3 = param_3 + 1;
  }
  bVar2 = false;
  pbVar5 = param_4;
  do {
    if (*param_2 == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = param_2 + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *param_2;
        param_4 = pbVar5 + 1;
      }
      bVar6 = *param_2;
      pbVar7 = param_2 + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_4 != (byte *)0x0) {
          *param_4 = *pbVar7;
          param_4 = param_4 + 1;
        }
        pbVar7 = param_2 + 2;
      }
      pbVar5 = param_4;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_0047ad83;
      }
    }
    param_2 = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_0047ad83:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = pbVar5;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_4 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_4 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_4 = param_4 + 1;
          }
          *param_4 = *pbVar7;
          param_4 = param_4 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_4;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_4 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  *param_5 = *param_5 + 1;
  return;
}


