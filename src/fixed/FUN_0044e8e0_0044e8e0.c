/* undefined __stdcall FUN_0044e8e0(undefined4 param_1, int param_2, int param_3, uint param_4, char * param_5, int * param_6) @ 0044e8e0  392 bytes */
#include "th12.h"

void __stdcall FUN_0044e8e0(undefined4 param_1,int param_2,int param_3,uint param_4,char *param_5,int *param_6
                 )

{
  undefined4 stack0xffffffe0;
  char *pcVar1;
  uint uVar2;
  char cVar3;
  HDC hdc;
  int in_EAX;
  HGDIOBJ pvVar4;
  char *pcVar5;
  int iVar6;
  ushort *puVar7;
  int *unaff_retaddr;
  
  pvVar4 = DAT_004ce554;
  if (((in_EAX != 0) && (pvVar4 = DAT_004ce550, in_EAX != 1)) &&
     (pvVar4 = DAT_004cc54c, in_EAX != 2)) {
    pvVar4 = DAT_004b453c;
  }
  if (param_3 < 0x11) {
    param_3 = 0x11;
  }
  iVar6 = 0;
  puVar7 = DAT_004b0e68;
  if (0 < DAT_004b0e54) {
    do {
      *puVar7 = (ushort)(((param_4 >> 0x14 & 0xf) << 4 | param_4 >> 0xc & 0xf) << 4) |
                (ushort)(param_4 >> 4) & 0xf;
      iVar6 = iVar6 + 2;
      puVar7 = puVar7 + 1;
    } while (iVar6 < DAT_004b0e54);
  }
  hdc = DAT_004b0e5c;
  pvVar4 = SelectObject(DAT_004b0e5c,pvVar4);
  uVar2 = param_3 * 2 + 6;
  FUN_0044dc20(uVar2);
  SetBkMode(hdc,1);
  pcVar1 = param_5 + 1;
  pcVar5 = param_5;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  SetTextColor(hdc,param_4);
  TextOutA(hdc,param_2 * 2,0,param_5,(int)pcVar5 - (int)pcVar1);
  SelectObject(hdc,pvVar4);
  FUN_0044dc20(uVar2);
  FUN_0044d8b0(uVar2);
  SelectObject(hdc,pvVar4);
  (**(code **)(*param_6 + 0x48))(param_6,0,&param_3);
  D3DXLoadSurfaceFromMemory
            (unaff_retaddr,0,param_1,DAT_004b0e68,DAT_004b0e48,DAT_004b0e58,0,&stack0xffffffe0,4,0);
  if (unaff_retaddr != (int *)0x0) {
    (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
  }
  return;
}


