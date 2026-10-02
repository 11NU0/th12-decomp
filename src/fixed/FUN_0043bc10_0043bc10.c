/* undefined __fastcall FUN_0043bc10(undefined4 param_1, char * param_2, int param_3) @ 0043bc10  1850 bytes */
#include "th12.h"

void __fastcall FUN_0043bc10(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  tm *ptVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  int *piVar13;
  HANDLE pvVar14;
  int *_Size;
  byte *local_11c;
  int *local_118;
  int *local_114;
  byte *local_110;
  byte *local_10c;
  byte *local_108;
  char local_104 [256];
  uint local_4;
  
  iVar3 = DAT_004b4518;
  local_4 = DAT_004ad138 ^ (uint)&local_11c;
  pcVar11 = *(char **)((int)DAT_004b4518 + 0x1c);
  local_108 = (byte *)0x0;
  local_10c = (byte *)0x0;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    *pcVar11 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  pcVar11 = param_2 + 1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  for (iVar5 = (int)param_2 - (int)pcVar11; iVar5 < 8; iVar5 = iVar5 + 1) {
    *(undefined *)(iVar5 + *(int *)((int)iVar3 + 0x1c)) = 0x20;
  }
  if (((*(byte *)((int)iVar3 + 0x1dc) & 1) == 0) && (param_3 != 0)) {
    iVar5 = **(int **)((int)iVar3 + 0xa0);
    **(undefined2 **)((int)iVar5 + 0x1518) = 0xffff;
    *(undefined2 *)(*(int *)((int)iVar5 + 0x1518) + 2) = 0xffff;
    *(undefined2 *)(*(int *)((int)iVar5 + 0x1518) + 4) = 0xffff;
    *(int *)((int)iVar5 + 0x1518) = *(int *)((int)iVar5 + 0x1518) + 6;
    if (899 < (*(int *)((int)iVar5 + 0x1518) - iVar5) / 6) {
      uVar6 = FUN_0043cbb0();
      *(undefined4 *)((int)iVar3 + 0xa0) = uVar6;
    }
  }
  FUN_0046d585("replay");
  _sprintf(local_104,"replay/%s",param_1);
  local_118 = (int *)((int)iVar3 + 0x44);
  local_110 = (byte *)0x0;
  _Size = (int *)0x70;
  local_11c = (byte *)0x0;
  piVar13 = (int *)((int)iVar3 + 0x20);
  do {
    if (*piVar13 != 0) {
      if (local_108 == (byte *)0x0) {
        local_108 = local_11c;
      }
      if ((*(byte *)((int)iVar3 + 0x1dc) & 1) == 0) {
        *(undefined4 *)(*piVar13 + 8) = 0;
      }
      _Size = _Size + 0x28;
      for (piVar2 = (int *)*local_118; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        iVar5 = *piVar2;
        _Size = (int *)((int)_Size +
                       ((*(int *)((int)iVar5 + 0x18a0) + ((*(int *)((int)iVar5 + 0x1518) - iVar5) / 6) * 6) -
                       iVar5) + -0x151c);
        if ((*(byte *)((int)iVar3 + 0x1dc) & 1) == 0) {
          *(int *)(*piVar13 + 8) =
               *(int *)(*piVar13 + 8) +
               ((*(int *)((int)iVar5 + 0x18a0) + ((*(int *)((int)iVar5 + 0x1518) - iVar5) / 6) * 6) - iVar5) +
               -0x151c;
          *(int *)(*piVar13 + 4) =
               *(int *)(*piVar13 + 4) + (*(int *)(*piVar2 + 0x1518) - *piVar2) / 6;
        }
        local_114 = _Size;
      }
      local_110 = (byte *)((int)local_110 + 1);
      local_10c = local_11c;
    }
    local_118 = local_118 + 3;
    local_11c = local_11c + 1;
    piVar13 = piVar13 + 1;
  } while ((int)local_11c < 8);
  *(byte **)(*(int *)((int)iVar3 + 0x1c) + 0x58) = local_110;
  iVar5 = DAT_004b43e0;
  *(undefined4 *)(*(int *)((int)iVar3 + 0x1c) + 0x14) = DAT_004b0c44;
  local_11c = (byte *)(100.0 - (float)((float10)*(double *)((int)iVar5 + 0x24) /
                                      (float10)*(double *)((int)iVar5 + 0x2c)) * 100.0);
  *(byte **)(*(int *)((int)iVar3 + 0x1c) + 0x54) = local_11c;
  local_110 = (byte *)_malloc((size_t)_Size);
  local_118 = (int *)((int)iVar3 + 0x44);
  local_11c = (byte *)((int)iVar3 + 0x20);
  puVar8 = *(undefined4 **)((int)iVar3 + 0x1c);
  pbVar7 = local_110;
  for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pbVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    pbVar7 = pbVar7 + 4;
  }
  iVar5 = 0x70;
  local_114 = (int *)0x8;
  do {
    if (*(undefined4 **)local_11c != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)local_11c;
      pbVar7 = local_110 + iVar5;
      for (iVar12 = 0x28; iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined4 *)pbVar7 = *puVar8;
        puVar8 = puVar8 + 1;
        pbVar7 = pbVar7 + 4;
      }
      iVar5 = iVar5 + 0xa0;
      for (puVar8 = (undefined4 *)*local_118; puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)puVar8[1]) {
        _Src = (void *)*puVar8;
        _memcpy(local_110 + iVar5,_Src,((*(int *)((int)_Src + 0x1518) - (int)_Src) / 6) * 6);
        iVar5 = iVar5 + ((*(int *)((int)_Src + 0x1518) - (int)_Src) / 6) * 6;
      }
      for (piVar13 = (int *)*local_118; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[1]) {
        iVar12 = *piVar13;
        _memcpy(local_110 + iVar5,(void *)((int)iVar12 + 0x151c),
                (*(int *)((int)iVar12 + 0x18a0) - iVar12) - 0x151c);
        iVar5 = iVar5 + -0x151c + (*(int *)((int)iVar12 + 0x18a0) - iVar12);
      }
    }
    local_118 = local_118 + 3;
    local_11c = local_11c + 4;
    local_114 = (int *)((int)local_114 + -1);
  } while (local_114 != (int *)0x0);
  pbVar7 = (( byte * (__stdcall *)())FUN_0044c3f0)(local_110,iVar5,(int *)&local_114);
  local_11c = pbVar7;
  _free(local_110);
  piVar13 = local_114;
  FUN_00463af0(pbVar7,(uint)local_114,':',0x40,(size_t)local_114);
  FUN_00463af0(pbVar7,(uint)piVar13,-0x1f,0x800,(size_t)piVar13);
  *(int *)(*(int *)((int)iVar3 + 0x18) + 0x20) = iVar5;
  *(int **)(*(int *)((int)iVar3 + 0x18) + 0x1c) = piVar13;
  *(int *)(*(int *)((int)iVar3 + 0x18) + 0xc) = *(int *)(*(int *)((int)iVar3 + 0x18) + 0x1c) + 0x24;
  FUN_00463fb0();
  if (DAT_004ae590 != (HANDLE)0xffffffff) {
    WriteFile(DAT_004ae590,*(LPCVOID *)((int)iVar3 + 0x18),0x24,(LPDWORD)&local_114,(LPOVERLAPPED)0x0);
    if ((local_114 != (int *)0x24) && (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
      DAT_004cf21a = DAT_004cf21a + -1;
    }
    if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
        (WriteFile(DAT_004ae590,local_11c,(DWORD)piVar13,(LPDWORD)&local_118,(LPOVERLAPPED)0x0),
        piVar13 != local_118)) && (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
      DAT_004cf21a = DAT_004cf21a + -1;
    }
  }
  if (local_11c != (byte *)0x0) {
    _free(local_11c);
  }
  puVar8 = (undefined4 *)_malloc(0xffff);
  _memset(puVar8,0,0xffff);
  pcVar11 = (char *)((int)puVar8 + 3);
  *puVar8 = 0x52455355;
  *(undefined *)((int)puVar8 + 2) = 0;
  iVar5 = _sprintf(pcVar11,&DAT_004a12f0);
  pcVar4 = pcVar11 + iVar5;
  iVar5 = _sprintf(pcVar4,"Version %s\r\n","1.00b");
  pcVar4 = pcVar4 + iVar5;
  iVar5 = _sprintf(pcVar4,"Name %s\r\n",*(undefined4 *)((int)iVar3 + 0x1c));
  pcVar4 = pcVar4 + iVar5;
  ptVar9 = __localtime64((__time64_t *)(*(int *)((int)iVar3 + 0x1c) + 0xc));
  iVar5 = _sprintf(pcVar4,"Date %.2d/%.2d/%.2d %.2d:%.2d\r\n",ptVar9->tm_year % 100,
                   ptVar9->tm_mon + 1,ptVar9->tm_mday,ptVar9->tm_hour,ptVar9->tm_min);
  pcVar4 = pcVar4 + iVar5;
  iVar5 = _sprintf(pcVar4,"Chara %s\r\n");
  iVar12 = _sprintf(pcVar4 + iVar5,"Rank %s\r\n",
                    (&PTR_s_Easy_004aee38)[*(int *)(*(int *)((int)iVar3 + 0x1c) + 100)]);
  pcVar4 = pcVar4 + iVar5 + iVar12;
  if (*(int *)(*(int *)((int)iVar3 + 0x1c) + 0x68) < 8) {
    if (local_108 == local_10c) {
      if (local_108 == (byte *)0x7) {
        iVar5 = _sprintf(pcVar4,"Extra Stage\r\n");
      }
      else {
        iVar5 = _sprintf(pcVar4,"Stage %d\r\n");
      }
    }
    else {
      iVar5 = _sprintf(pcVar4,&DAT_004a13b4,local_108);
    }
  }
  else if (local_108 == (byte *)0x7) {
    iVar5 = _sprintf(pcVar4,"Extra Stage Clear\r\n");
  }
  else {
    iVar5 = _sprintf(pcVar4,"Stage All Clear\r\n");
  }
  pcVar4 = pcVar4 + iVar5;
  iVar5 = _sprintf(pcVar4,"Score %d\r\n");
  iVar12 = _sprintf(pcVar4 + iVar5,"Slow Rate %2.2f\r\n",
                    (double)*(float *)(*(int *)((int)iVar3 + 0x1c) + 0x54));
  pvVar14 = DAT_004ae590;
  pcVar4 = pcVar4 + iVar5 + iVar12 + 1;
  uVar10 = (int)pcVar4 - (int)puVar8 & 0x80000003;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
  }
  if (uVar10 != 0) {
    pcVar4 = pcVar4 + (4 - uVar10);
  }
  pbVar7 = (byte *)(pcVar4 + -(int)puVar8);
  puVar8[1] = pbVar7;
  if (((pvVar14 != (HANDLE)0xffffffff) &&
      (WriteFile(pvVar14,puVar8,(DWORD)pbVar7,(LPDWORD)&local_10c,(LPOVERLAPPED)0x0),
      pbVar7 != local_10c)) && (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + -1;
  }
  _memset(puVar8,0,0xffff);
  *puVar8 = 0x52455355;
  *(undefined *)((int)puVar8 + 2) = 1;
  iVar5 = _sprintf(pcVar11,&DAT_004a13e8);
  pvVar14 = DAT_004ae590;
  iVar5 = (int)puVar8 + iVar5 + 0xd;
  uVar10 = iVar5 - (int)puVar8 & 0x80000003;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
  }
  if (uVar10 != 0) {
    iVar5 = iVar5 + (4 - uVar10);
  }
  pbVar7 = (byte *)(iVar5 - (int)puVar8);
  puVar8[1] = pbVar7;
  if (((pvVar14 != (HANDLE)0xffffffff) &&
      (WriteFile(pvVar14,puVar8,(DWORD)pbVar7,(LPDWORD)&local_10c,(LPOVERLAPPED)0x0),
      pvVar14 = DAT_004ae590, pbVar7 != local_10c)) &&
     (CloseHandle(DAT_004ae590), pvVar14 = DAT_004ae590, (DAT_004cee78 & 0x8000) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + -1;
    pvVar14 = DAT_004ae590;
  }
  _free(puVar8);
  if ((pvVar14 != (HANDLE)0xffffffff) && (CloseHandle(pvVar14), (DAT_004cee78 & 0x8000) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + -1;
  }
  *(uint *)((int)iVar3 + 0x1dc) = *(uint *)((int)iVar3 + 0x1dc) | 1;
  ___security_check_cookie_4(local_4 ^ (uint)&local_11c);
  return;
}


