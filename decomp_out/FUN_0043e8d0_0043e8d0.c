/* undefined __fastcall FUN_0043e8d0(void * param_1, int * param_2) @ 0043e8d0  934 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0043ec1c) */
/* WARNING: Removing unreachable block (ram,0x0043ec2f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043e8d0(void *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE hFindFile;
  BOOL BVar4;
  void *pvVar5;
  CHAR *pCVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  HANDLE pvStack_154;
  _WIN32_FIND_DATAA local_150;
  uint local_c;
  
  local_c = DAT_004ad138 ^ (uint)&pvStack_154;
  iVar9 = *(int *)((int)param_1 + 0x30);
  iVar8 = 0;
  if (iVar9 == 0) {
    FUN_0043e380();
    hFindFile = FindFirstFileA("../../data/*.ecl",&local_150);
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        iVar8 = iVar8 + 1;
        BVar4 = FindNextFileA(hFindFile,&local_150);
      } while (BVar4 != 0);
    }
    FindClose(hFindFile);
    iVar9 = 0;
    *(int *)((int)param_1 + 0x38) = iVar8;
    if (iVar8 != 0) {
      pvVar5 = _malloc(iVar8 * 4);
      *(void **)((int)param_1 + 0x34) = pvVar5;
      pvStack_154 = FindFirstFileA("../../data/*.ecl",&local_150);
      if (0 < iVar8) {
        do {
          pCVar6 = local_150.cFileName;
          do {
            cVar1 = *pCVar6;
            pCVar6 = pCVar6 + 1;
          } while (cVar1 != '\0');
          pvVar5 = _malloc((size_t)(pCVar6 + (1 - (int)(local_150.cFileName + 1))));
          *(void **)(*(int *)((int)param_1 + 0x34) + iVar9 * 4) = pvVar5;
          pcVar7 = *(char **)(*(int *)((int)param_1 + 0x34) + iVar9 * 4);
          pCVar6 = local_150.cFileName;
          do {
            cVar1 = *pCVar6;
            *pcVar7 = cVar1;
            pCVar6 = pCVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          BVar4 = FindNextFileA(pvStack_154,&local_150);
        } while ((BVar4 != 0) && (iVar9 = iVar9 + 1, iVar9 < iVar8));
      }
      FindClose(pvStack_154);
    }
    *(undefined4 *)((int)param_1 + 0x44) = 3;
    *(undefined4 *)((int)param_1 + 0x10c) = 1;
    iVar9 = *(int *)((int)param_1 + 0x44);
    if (iVar9 == 0) {
      *(undefined4 *)((int)param_1 + 0x3c) = 0;
    }
    else if (iVar9 < 1) {
      *(int *)((int)param_1 + 0x3c) = iVar9 + -1;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x3c) = 0;
    }
    *(int *)((int)param_1 + 0x11c) = iVar8;
    *(undefined4 *)((int)param_1 + 0x1e4) = 1;
    if (iVar8 == 0) {
      *(undefined4 *)((int)param_1 + 0x114) = 0;
    }
    else if (iVar8 < 1) {
      *(int *)((int)param_1 + 0x114) = iVar8 + -1;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x114) = 0;
    }
    *(undefined4 *)((int)param_1 + 500) = 1;
    *(undefined4 *)((int)param_1 + 700) = 1;
    *(undefined4 *)((int)param_1 + 0x1ec) = 0;
    *(undefined4 *)((int)param_1 + 0x30) = 1;
    *(undefined4 *)((int)param_1 + 0x2c4) = 0;
    *(undefined4 *)((int)param_1 + 0x2d0) = 1000;
    *(undefined4 *)((int)param_1 + 0x2c8) = 0x42000000;
    *(undefined4 *)((int)param_1 + 0x2cc) = 0;
  }
  else if (iVar9 == 1) {
    *(undefined4 *)((int)param_1 + 0x40) = *(undefined4 *)((int)param_1 + 0x3c);
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
    }
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
    }
    iVar9 = *(int *)((int)param_1 + 0x3c);
    if (iVar9 == 0) {
      *(undefined4 *)((int)param_1 + 0x118) = *(undefined4 *)((int)param_1 + 0x114);
      if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
        FUN_00464970(1);
      }
      if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
        FUN_00464970(-1);
      }
      if ((DAT_004d48c4 & 0x80001) != 0) {
        *(uint *)((int)param_1 + 0x2d4) = *(uint *)((int)param_1 + 0x2d4) & 0xfffffffd;
        FUN_00464cb0(param_1);
        *(undefined4 *)((int)param_1 + 0x30) = 2;
      }
    }
    else if (iVar9 == 1) {
      if (*(int *)((int)param_1 + 0x2d8) != 0) {
        *(undefined4 *)((int)param_1 + 0x1f0) = *(undefined4 *)((int)param_1 + 0x1ec);
        if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
          FUN_00464970(1);
        }
        if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
          FUN_00464970(-1);
        }
        if ((_DAT_004d48c8 & 0x80001) != 0) {
          if (*(int **)((int)param_1 + 0x2dc) != (int *)0x0) {
            (**(code **)(**(int **)((int)param_1 + 0x2dc) + 0x14))(1);
            *(undefined4 *)((int)param_1 + 0x2dc) = 0;
          }
          puVar3 = FUN_00469570(*(byte **)(*(int *)(*(int *)((int)param_1 + 0x2d8) + 0x8c) +
                                          *(int *)((int)param_1 + 0x1ec) * 8));
          *(undefined4 **)((int)param_1 + 0x2dc) = puVar3;
          *(undefined4 *)((int)param_1 + 0x30) = 4;
        }
      }
    }
    else if ((iVar9 == 2) && ((DAT_004d48c4 & 0x80001) != 0)) {
      FUN_0040f720(3);
    }
  }
  else if (iVar9 == 4) {
    FUN_00468d90(param_1,param_2,1.0);
    piVar2 = *(int **)((int)param_1 + 0x2dc);
    if (piVar2 != (int *)0x0) {
      if (*(int *)(piVar2[1] + 4) != 0) goto LAB_0043ec5c;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))(1);
      }
    }
    *(undefined4 *)((int)param_1 + 0x2dc) = 0;
    *(undefined4 *)((int)param_1 + 0x30) = 1;
  }
LAB_0043ec5c:
  ___security_check_cookie_4(local_c ^ (uint)&pvStack_154);
  return;
}


