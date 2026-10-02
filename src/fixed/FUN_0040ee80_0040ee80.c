/* undefined __fastcall FUN_0040ee80(void * param_1) @ 0040ee80  1222 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0040f2f2) */
/* WARNING: Removing unreachable block (ram,0x0040f305) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef struct local_150__u { undefined4 _; undefined4 cFileName; } local_150__u;
void __fastcall FUN_0040ee80(void *param_1)

{
  local_150__u *local_150__u_alias;
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  HANDLE hFindFile;
  BOOL BVar4;
  void *pvVar5;
  CHAR *pCVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  char *pcVar7;
  int iVar8;
  int iVar9;
  HANDLE pvStack_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_18c;
  _WIN32_FIND_DATAA local_150;
  uint local_c;
  
  uVar3 = DAT_004d49d0;
  local_c = DAT_004ad138 ^ (uint)&pvStack_1a4;
  iVar8 = *(int *)((int)param_1 + 0x30);
  if (iVar8 == 0) {
    FUN_0040e850();
    iVar8 = 0;
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
      pvStack_1a4 = FindFirstFileA("../../data/*.ecl",&local_150);
      if (0 < iVar8) {
        do {
  local_150__u_alias = (local_150__u *)&local_150;
          pCVar6 = local_150__u_alias->cFileName;
          do {
            cVar2 = *pCVar6;
            pCVar6 = pCVar6 + 1;
          } while (cVar2 != '\0');
          pvVar5 = _malloc((size_t)(pCVar6 + (1 - (int)(((local_150__u *)&local_150)->cFileName + 1))));
          *(void **)(*(int *)((int)param_1 + 0x34) + iVar9 * 4) = pvVar5;
          pcVar7 = *(char **)(*(int *)((int)param_1 + 0x34) + iVar9 * 4);
  local_150__u_alias = (local_150__u *)&local_150;
          pCVar6 = local_150__u_alias->cFileName;
          do {
            cVar2 = *pCVar6;
            *pcVar7 = cVar2;
            pCVar6 = pCVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          BVar4 = FindNextFileA(pvStack_1a4,&local_150);
        } while ((BVar4 != 0) && (iVar9 = iVar9 + 1, iVar9 < iVar8));
      }
      FindClose(pvStack_1a4);
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
    *(undefined4 *)((int)param_1 + 0x77c) = 0;
    *(undefined4 *)((int)param_1 + 0x788) = 1000;
    *(undefined4 *)((int)param_1 + 0x780) = 0x42000000;
    *(undefined4 *)((int)param_1 + 0x784) = 0;
  }
  else if (iVar8 == 1) {
    *(undefined4 *)((int)param_1 + 0x40) = *(undefined4 *)((int)param_1 + 0x3c);
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
    }
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
    }
    iVar8 = *(int *)((int)param_1 + 0x3c);
    if (iVar8 == 0) {
      pvVar5 = *(void **)((int)param_1 + 0x114);
      *(void **)((int)param_1 + 0x118) = pvVar5;
      if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
        FUN_00464970(1);
        pvVar5 = extraout_ECX_01;
      }
      if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
        FUN_00464970(-1);
        pvVar5 = extraout_ECX_02;
      }
      if ((DAT_004d48c4 & 0x80001) != 0) {
        FUN_0041e000(pvVar5);
        FUN_004364d0(extraout_ECX_03);
        FUN_004098e0(extraout_ECX_04);
        FUN_00406bd0();
        FUN_00425c00();
        FUN_0043ddf0();
        FUN_00413170();
        *(uint *)((int)param_1 + 0x78c) = *(uint *)((int)param_1 + 0x78c) & 0xfffffffd;
        FUN_00464cb0(param_1);
        *(undefined4 *)((int)param_1 + 0x30) = 2;
      }
    }
    else if (iVar8 == 1) {
      if (DAT_004b43dc != 0) {
        *(undefined4 *)((int)param_1 + 0x1f0) = *(undefined4 *)((int)param_1 + 0x1ec);
        if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
          FUN_00464970(1);
        }
        if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
          FUN_00464970(-1);
        }
        if ((_DAT_004d48c8 & 0x80001) != 0) {
          FUN_0040ea10();
          FUN_00436100();
          FUN_0040e810();
          FUN_00409630(extraout_ECX_00);
          FUN_00412ee0();
          FUN_0040e940(DAT_004b43dc);
          FUN_0041d560();
          FUN_0040e810();
          FUN_0040e8b0();
          _memset(&local_1a0,0,0x50);
          local_1a0 = 0;
          local_19c = 0;
          local_198 = 0;
          local_18c = 10000;
          FUN_00412990(*(byte **)(*(int *)(*(int *)((int)DAT_004b43dc + 100) + 0x8c) +
                                 *(int *)((int)param_1 + 0x1ec) * 8),&local_1a0);
          *(undefined4 *)((int)param_1 + 0x30) = 4;
        }
      }
    }
    else if ((iVar8 == 2) && ((DAT_004d48c4 & 0x80001) != 0)) {
      FUN_0040f720(3);
    }
  }
  else if (iVar8 == 4) {
    DAT_004d49d0 = _DAT_004d48b8;
    _DAT_004d49d4 = uVar3;
    FUN_0040f690(0x4d48b8);
    iVar8 = DAT_004b4514;
    _DAT_004d49dc = DAT_004d48c4;
    if ((DAT_004d48c4 & 0x100) != 0) {
      if (*(int *)((int)DAT_004b4514 + 8) != 0) {
        puVar1 = (uint *)(*(int *)((int)DAT_004b4514 + 8) + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
      }
      if (*(int *)((int)iVar8 + 0xc) != 0) {
        puVar1 = (uint *)(*(int *)((int)iVar8 + 0xc) + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
      }
      FUN_00436100();
      iVar9 = DAT_004b43c8;
      iVar8 = extraout_ECX;
      if (*(int *)((int)DAT_004b43c8 + 8) != 0) {
        iVar8 = *(int *)((int)DAT_004b43c8 + 8);
        *(uint *)((int)iVar8 + 4) = *(uint *)((int)iVar8 + 4) & 0xfffffffd;
      }
      if (*(int *)((int)iVar9 + 0xc) != 0) {
        puVar1 = (uint *)(*(int *)((int)iVar9 + 0xc) + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
      }
      FUN_00409630(iVar8);
      iVar8 = DAT_004b43dc;
      if (*(int *)((int)DAT_004b43dc + 8) != 0) {
        puVar1 = (uint *)(*(int *)((int)DAT_004b43dc + 8) + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
      }
      if (*(int *)((int)iVar8 + 0xc) != 0) {
        puVar1 = (uint *)(*(int *)((int)iVar8 + 0xc) + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
      }
      FUN_0040e940(iVar8);
      iVar8 = DAT_004b44f0;
      if (*(int *)((int)DAT_004b44f0 + 8) != 0) {
        puVar1 = (uint *)(*(int *)((int)DAT_004b44f0 + 8) + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
      }
      if (*(int *)((int)iVar8 + 0xc) != 0) {
        puVar1 = (uint *)(*(int *)((int)iVar8 + 0xc) + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
      }
      _memset((void *)((int)iVar8 + 0x14),0,0x666fc0);
      *(undefined4 *)((int)iVar8 + 0x666fd8) = 0;
      *(undefined4 *)((int)iVar8 + 0x666fe0) = 0;
      *(undefined4 *)((int)param_1 + 0x30) = 1;
    }
  }
  ___security_check_cookie_4(local_c ^ (uint)&pvStack_1a4);
  return;
}


