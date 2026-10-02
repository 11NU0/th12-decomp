/* undefined4 __stdcall FUN_00424cc0(int param_1) @ 00424cc0  2460 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00424cc0(int param_1)

{
  char cVar1;
  char *_Dest;
  int iVar2;
  char *pcVar3;
  tm *ptVar4;
  int *piVar5;
  char *pcVar6;
  DWORD nNumberOfBytesToWrite;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 uVar8;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  char *extraout_EDX;
  char *extraout_EDX_00;
  char *extraout_EDX_01;
  ulonglong uVar9;
  int local_90;
  int local_8c;
  int *local_88;
  DWORD local_80;
  DWORD DStack_7c;
  DWORD DStack_78;
  DWORD DStack_74;
  DWORD DStack_70;
  DWORD DStack_6c;
  DWORD DStack_68;
  DWORD DStack_64;
  DWORD DStack_60;
  DWORD DStack_5c;
  DWORD DStack_58;
  DWORD DStack_54;
  DWORD DStack_50;
  DWORD DStack_4c;
  DWORD local_48 [17];
  
  _Dest = (char *)_malloc(0x1000);
  FUN_0046d585("hint");
  iVar2 = FUN_00463fb0();
  if (iVar2 == 0) {
    _sprintf(_Dest,"# ========================================================= \r\n");
    pcVar3 = _Dest;
    uVar8 = extraout_ECX;
    do {
      cVar1 = *pcVar3;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00464130(uVar8,_Dest);
    _sprintf(_Dest,&DAT_004a0280);
    pcVar3 = _Dest;
    uVar8 = extraout_ECX_00;
    do {
      cVar1 = *pcVar3;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00464130(uVar8,_Dest);
    _sprintf(_Dest,"#\r\n");
    pcVar3 = _Dest;
    uVar8 = extraout_ECX_01;
    do {
      cVar1 = *pcVar3;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00464130(uVar8,_Dest);
    _sprintf(_Dest,&DAT_004a02a8);
    pcVar3 = _Dest;
    uVar8 = extraout_ECX_02;
    do {
      cVar1 = *pcVar3;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00464130(uVar8,_Dest);
    _sprintf(_Dest,&DAT_004a02e0);
    pcVar3 = _Dest;
    uVar8 = extraout_ECX_03;
    do {
      cVar1 = *pcVar3;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00464130(uVar8,_Dest);
    _sprintf(_Dest,"#\r\n");
    pcVar3 = _Dest;
    uVar8 = extraout_ECX_04;
    do {
      cVar1 = *pcVar3;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00464130(uVar8,_Dest);
    __time64((__time64_t *)local_48);
    ptVar4 = __localtime64((__time64_t *)local_48);
    _sprintf(_Dest,"#                                Time-stamp: <%.4d/%.2d/%.2d %.2d:%.2d>\r\n",
             ptVar4->tm_year + 0x76c,ptVar4->tm_mon + 1,ptVar4->tm_mday,ptVar4->tm_hour,
             ptVar4->tm_min);
    pcVar3 = _Dest;
    uVar8 = extraout_ECX_05;
    do {
      cVar1 = *pcVar3;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00464130(uVar8,_Dest);
    _sprintf(_Dest,"\r\n\r\n");
    pcVar3 = _Dest;
    uVar8 = extraout_ECX_06;
    do {
      cVar1 = *pcVar3;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00464130(uVar8,_Dest);
    _sprintf(_Dest,"Version = %s\r\n\r\n");
    pcVar3 = _Dest;
    uVar8 = extraout_ECX_07;
    do {
      cVar1 = *pcVar3;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00464130(uVar8,_Dest);
    local_88 = (int *)(param_1 + 0x7c);
    local_90 = 0;
    do {
      piVar5 = (int *)*local_88;
      local_8c = 0;
      if (piVar5 != (int *)0x0) {
        do {
          iVar2 = *piVar5;
          piVar5 = (int *)piVar5[1];
          if (*(int *)(iVar2 + 0x70) != 0) {
            if (local_8c == 0) {
              _sprintf(_Dest,"# ================================== \r\n");
              pcVar3 = _Dest;
              do {
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                  (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&local_80,
                             (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != local_80)) &&
                 (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
                DAT_004cf21a = DAT_004cf21a + -1;
              }
              _sprintf(_Dest,"Stage : %d\r\n\r\n");
              pcVar3 = _Dest;
              do {
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                  (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_7c,
                             (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_7c)) &&
                 (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
                DAT_004cf21a = DAT_004cf21a + -1;
              }
            }
            _sprintf(_Dest,"Tips\r\n");
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_78,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_78)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            if (0 < *(int *)(iVar2 + 0x70)) {
              _sprintf(_Dest,"\tRemain\t: %d\r\n");
            }
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_74,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_74)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            _sprintf(_Dest,"\tText\t: \"%s\"\r\n");
            pcVar3 = _Dest + 1;
            pcVar6 = _Dest;
            uVar8 = extraout_ECX_08;
            do {
              cVar1 = *pcVar6;
              uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),cVar1);
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            nNumberOfBytesToWrite = (int)pcVar6 - (int)pcVar3;
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,nNumberOfBytesToWrite,&DStack_70,(LPOVERLAPPED)0x0),
                uVar8 = extraout_ECX_09, pcVar3 = extraout_EDX, nNumberOfBytesToWrite != DStack_70))
               && (CloseHandle(DAT_004ae590), uVar8 = extraout_ECX_10, pcVar3 = extraout_EDX_00,
                  (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
              uVar8 = extraout_ECX_11;
              pcVar3 = extraout_EDX_01;
            }
            uVar9 = FUN_004931e0(uVar8,pcVar3);
            uVar9 = FUN_004931e0(extraout_ECX_12,(int)(uVar9 >> 0x20));
            _sprintf(_Dest,"\tPos\t\t: %d, %d\r\n",(int)uVar9);
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_6c,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_6c)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            _sprintf(_Dest,"\tCount\t: %d\r\n");
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_68,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_68)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            iVar7 = 0;
            do {
              if ((&DAT_004aef14)[iVar7 * 2] == *(int *)(iVar2 + 0x68)) break;
              iVar7 = iVar7 + 1;
            } while (iVar7 < 0x3d);
            _sprintf(_Dest,"\tBase\t: %s\r\n");
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_64,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_64)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            iVar7 = 0;
            do {
              if ((&DAT_004aeefc)[iVar7 * 2] == *(int *)(iVar2 + 100)) break;
              iVar7 = iVar7 + 1;
            } while (iVar7 < 3);
            _sprintf(_Dest,"\tAlign\t: %s\r\n");
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_60,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_60)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            _sprintf(_Dest,"\tTime\t: %d\r\n");
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_5c,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_5c)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            _sprintf(_Dest,"\tAlpha\t: %d\r\n");
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_58,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_58)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            _sprintf(_Dest,"\tColor\t: %d, %d, %d\r\n",(uint)*(byte *)(iVar2 + 0x86),
                     (uint)*(byte *)(iVar2 + 0x85));
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_54,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_54)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            _sprintf(_Dest,"\tScale\t: %.1f\r\n",(double)*(float *)(iVar2 + 0x7c));
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_50,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_50)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            _sprintf(_Dest,"End\r\n\r\n");
            pcVar3 = _Dest;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
                (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),&DStack_4c,
                           (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != DStack_4c)) &&
               (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
              DAT_004cf21a = DAT_004cf21a + -1;
            }
            local_8c = local_8c + 1;
            if (0xfe < local_8c) break;
          }
        } while (piVar5 != (int *)0x0);
        if (local_8c != 0) {
          _sprintf(_Dest,"StageEnd\r\n");
          pcVar3 = _Dest;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
              (WriteFile(DAT_004ae590,_Dest,(int)pcVar3 - (int)(_Dest + 1),local_48,
                         (LPOVERLAPPED)0x0), (int)pcVar3 - (int)(_Dest + 1) != local_48[0])) &&
             (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
            DAT_004cf21a = DAT_004cf21a + -1;
          }
        }
      }
      local_88 = local_88 + 3;
      local_90 = local_90 + 1;
    } while (local_90 < 8);
  }
  if ((DAT_004ae590 != (HANDLE)0xffffffff) &&
     (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + -1;
  }
  _free(_Dest);
  return 0;
}


