/* undefined __stdcall FUN_00454580(undefined4 param_1) @ 00454580  793 bytes */
#include "th12.h"

void __stdcall FUN_00454580(undefined4 param_1)

{
  undefined4 stack0xffffffa0;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  int *unaff_ESI;
  size_t sStack_54;
  undefined4 local_50;
  size_t sStack_4c;
  void *pvStack_48;
  undefined4 uStack_44;
  void *pvStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&sStack_54;
  local_50 = param_1;
  if (DAT_004cf4f8 == 0) {
    ___security_check_cookie_4(local_4 ^ (uint)&sStack_54);
    return;
  }
  if ((int *)*unaff_ESI != (int *)0x0) {
    (**(code **)(*(int *)*unaff_ESI + 8))();
    *unaff_ESI = 0;
  }
  iVar1 = 0;
  if (0 < unaff_ESI[3]) {
    piVar4 = &DAT_004d0e78;
    do {
      if (*(int *)(*piVar4 + 4) == *(int *)(unaff_ESI[2] + 4)) {
        (**(code **)(*DAT_004cf4e8 + 0x14))(DAT_004cf4e8,(&DAT_004d0e70)[iVar1 * 6]);
        ___security_check_cookie_4(uStack_10 ^ (uint)&stack0xffffffa0);
        return;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 6;
    } while (iVar1 < unaff_ESI[3]);
  }
  iVar1 = (&DAT_004d1410)[*(int *)(unaff_ESI[2] + 4)];
  while (iVar1 == 0) {
    Sleep(10);
    if (DAT_004d4770 == 2) goto LAB_00454886;
    iVar1 = (&DAT_004d1410)[*(int *)(unaff_ESI[2] + 4)];
  }
  pcVar3 = (char *)(&DAT_004d1410)[*(int *)(unaff_ESI[2] + 4)];
  iVar1 = _strncmp(pcVar3,"RIFF",4);
  if (iVar1 == 0) {
    iVar1 = _strncmp(pcVar3 + 8,"WAVE",4);
    if (iVar1 == 0) {
      pcVar2 = FUN_00453620(pcVar3 + 0xc,"fmt ");
      if (pcVar2 != (char *)0x0) {
        uStack_3c = *(undefined4 *)pcVar2;
        uStack_38 = *(undefined4 *)((int)pcVar2 + 4);
        uStack_34 = *(undefined4 *)((int)pcVar2 + 8);
        uStack_30 = *(undefined4 *)((int)pcVar2 + 0xc);
        uStack_2c = *(undefined2 *)((int)pcVar2 + 0x10);
        pcVar3 = FUN_00453620(pcVar3 + 0xc,"data");
        if (pcVar3 != (char *)0x0) {
          puStack_18 = &uStack_3c;
          uStack_1c = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_c = 0;
          uStack_8 = 0;
          uStack_28 = 0x24;
          uStack_24 = 0x80c8;
          uStack_20 = uStack_44;
          iVar1 = (**(code **)(*DAT_004cf4e8 + 0xc))(DAT_004cf4e8,&uStack_28);
          if ((-1 < iVar1) &&
             (iVar1 = (**(code **)(*(int *)*unaff_ESI + 0x2c))
                                ((int *)*unaff_ESI,0,uStack_44,&pvStack_48,&sStack_54,&pvStack_40,
                                 &sStack_4c,0), -1 < iVar1)) {
            _memcpy(pvStack_48,pcVar3,sStack_54);
            if (sStack_4c != 0) {
              _memcpy(pvStack_40,pcVar3 + sStack_54,sStack_4c);
            }
            (**(code **)(*(int *)*unaff_ESI + 0x4c))
                      ((int *)*unaff_ESI,pvStack_48,sStack_54,pvStack_40,sStack_4c);
            if ((void *)(&DAT_004d1410)[*(int *)(unaff_ESI[2] + 4)] != (void *)0x0) {
              _free((void *)(&DAT_004d1410)[*(int *)(unaff_ESI[2] + 4)]);
              (&DAT_004d1410)[*(int *)(unaff_ESI[2] + 4)] = 0;
            }
            FUN_00454b00();
LAB_00454886:
            ___security_check_cookie_4(local_4 ^ (uint)&sStack_54);
            return;
          }
          goto LAB_004547b9;
        }
      }
    }
    FUN_00464220(&DAT_004b0ec8,&DAT_004a3160);
  }
  else {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a313c);
  }
LAB_004547b9:
  if ((void *)(&DAT_004d1410)[*(int *)(unaff_ESI[2] + 4)] != (void *)0x0) {
    _free((void *)(&DAT_004d1410)[*(int *)(unaff_ESI[2] + 4)]);
    (&DAT_004d1410)[*(int *)(unaff_ESI[2] + 4)] = 0;
  }
  ___security_check_cookie_4(local_4 ^ (uint)&sStack_54);
  return;
}


