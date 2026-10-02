/* undefined __stdcall FUN_0044f560(HINSTANCE param_1) @ 0044f560  2117 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f560(HINSTANCE param_1)

{
  HINSTANCE hInstance;
  DWORD DVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  BOOL BVar6;
  byte bVar7;
  undefined4 extraout_ECX;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *extraout_EDX_03;
  int *piVar8;
  int *extraout_EDX_04;
  int *extraout_EDX_05;
  int iVar9;
  LPCRITICAL_SECTION p_Var10;
  undefined4 *puVar11;
  float10 fVar12;
  undefined8 uVar13;
  int local_134;
  HINSTANCE local_130;
  tagMSG tStack_12c;
  BYTE aBStack_110 [16];
  byte bStack_100;
  uint local_c;
  
  local_c = DAT_004ad138 ^ (uint)&local_134;
  local_130 = param_1;
  local_134 = 0;
  DAT_004cf3f8 = param_1;
  timeBeginPeriod(1);
  DAT_004ce898 = (undefined4 *)operator_new(4);
  if (DAT_004ce898 == (undefined4 *)0x0) {
    DAT_004ce898 = (undefined4 *)0x0;
  }
  else {
    *DAT_004ce898 = 0;
  }
  DAT_004cee78 = DAT_004cee78 | 0x8000;
  p_Var10 = (LPCRITICAL_SECTION)&DAT_004cf0f8;
  iVar9 = 0xc;
  do {
    InitializeCriticalSection(p_Var10);
    p_Var10 = p_Var10 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_00464220(&DAT_004b0ec8,&DAT_004a24cc);
  DAT_004d4ea8 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,"Touhou 12 App");
  DVar1 = GetLastError();
  if (DVar1 == 0xb7) {
    FUN_00464300(&DAT_004a2984);
  }
  else {
    iVar9 = FUN_00451530();
    hInstance = local_130;
    if (iVar9 != -1) {
      _DAT_004ce8e8 = local_130;
      FUN_0044ffb0();
      iVar9 = FUN_0042feb0(0x4ce8e8);
      if (iVar9 == 0) {
        GetKeyboardState(aBStack_110);
        if (((_DAT_004ceae8 & 0x100) != 0) || ((bStack_100 & 0x80) != 0)) {
          DialogBoxParamA(hInstance,(LPCSTR)0xcb,(HWND)0x0,(DLGPROC)&LAB_004518c0,0);
        }
        if ((DAT_004cf428 & 0x60) == 0) {
          DAT_004cf428 = DAT_004cf428 ^ ((uint)DAT_004ceacd * 4 ^ DAT_004cf428) & 0xc;
          FUN_004516a0();
          goto LAB_0044f6aa;
        }
      }
    }
  }
  do {
    do {
      do {
        while( true ) {
          DAT_004d4770 = 2;
          FUN_00453030();
          FUN_00453500();
          puVar2 = DAT_004ce8cc;
          if (DAT_004ce8cc != (undefined4 *)0x0) {
            FUN_0045ea40((int)DAT_004ce8cc);
            FUN_0046ca4f(puVar2);
          }
          DAT_004ce8cc = (undefined4 *)0x0;
          if (DAT_004cea94 != (int *)0x0) {
            (**(code **)(*DAT_004cea94 + 8))(DAT_004cea94);
            DAT_004cea94 = (int *)0x0;
          }
          if (DAT_004cea98 != (int *)0x0) {
            (**(code **)(*DAT_004cea98 + 8))(DAT_004cea98);
            DAT_004cea98 = (int *)0x0;
          }
          if (DAT_004cea9c != (int *)0x0) {
            (**(code **)(*DAT_004cea9c + 8))(DAT_004cea9c);
            DAT_004cea9c = (int *)0x0;
          }
          if (DAT_004ce8f0 != (int *)0x0) {
            (**(code **)(*DAT_004ce8f0 + 8))(DAT_004ce8f0);
            DAT_004ce8f0 = (int *)0x0;
          }
          if (DAT_004ce8ec != (int *)0x0) {
            (**(code **)(*DAT_004ce8ec + 8))(DAT_004ce8ec);
            DAT_004ce8ec = (int *)0x0;
          }
          if (DAT_004cf3f0 != (HWND)0x0) {
            ShowWindow(DAT_004cf3f0,0);
            MoveWindow(DAT_004cf3f0,0,0,0,0,0);
            DestroyWindow(DAT_004cf3f0);
            DAT_004cf3f0 = (HWND)0x0;
          }
          do {
            iVar9 = ShowCursor(1);
          } while (iVar9 < 0);
          if (local_134 != 2) {
            FUN_00463e80(&DAT_004ceab0);
            timeEndPeriod(1);
            FUN_0044f2c0();
            DAT_004cee78 = DAT_004cee78 & 0xffff7fff;
            iVar9 = 0xc;
            p_Var10 = (LPCRITICAL_SECTION)&DAT_004cf0f8;
            do {
              DeleteCriticalSection(p_Var10);
              p_Var10 = p_Var10 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            SystemParametersInfoA(0x11,DAT_004cf41c,(PVOID)0x0,2);
            SystemParametersInfoA(0x55,DAT_004cf420,(PVOID)0x0,2);
            SystemParametersInfoA(0x56,DAT_004cf424,(PVOID)0x0,2);
            WINNLSEnableIME(0,1);
            if (DAT_004ce898 != (undefined4 *)0x0) {
              FUN_0046ca4f(DAT_004ce898);
            }
            ___security_check_cookie_4(local_c ^ (uint)&local_134);
            return;
          }
          PTR_DAT_004b2ec8 = &DAT_004b0ec8;
          DAT_004b0ec8 = 0;
          FUN_00464220(&DAT_004b0ec8,&DAT_004a260c);
          if (DAT_004ce9fc == 0) {
            WINNLSEnableIME(0,1);
          }
          iVar9 = 0x3c;
          do {
            BVar6 = PeekMessageA(&tStack_12c,(HWND)0x0,0,0,1);
            if (BVar6 != 0) {
              TranslateMessage(&tStack_12c);
              DispatchMessageA(&tStack_12c);
            }
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          DAT_004cee78 = DAT_004cee78 & 0xfffffe7f;
LAB_0044f6aa:
          DAT_004ce89c = (undefined4 *)operator_new(0x4c);
          if (DAT_004ce89c == (undefined4 *)0x0) {
            DAT_004ce89c = (undefined4 *)0x0;
          }
          else {
            DAT_004ce89c[2] = 0;
            DAT_004ce89c[3] = 0;
            DAT_004ce89c[4] = 0;
            *DAT_004ce89c = 0;
            DAT_004ce89c[1] = DAT_004ce89c[1] & 0xfffffffe;
            DAT_004ce89c[5] = DAT_004ce89c;
            DAT_004ce89c[6] = 0;
            DAT_004ce89c[7] = 0;
            DAT_004ce89c[10] = DAT_004ce89c[10] & 0xfffffffe;
            DAT_004ce89c[0xb] = 0;
            DAT_004ce89c[0xc] = 0;
            DAT_004ce89c[0xd] = 0;
            DAT_004ce89c[9] = 0;
            DAT_004ce89c[0xe] = DAT_004ce89c + 9;
            DAT_004ce89c[0xf] = 0;
            DAT_004ce89c[0x10] = 0;
            DAT_004ce89c[0x12] = 0;
          }
          DAT_004ce8ec = (int *)Direct3DCreate9(0x20);
          if (DAT_004ce8ec != (int *)0x0) break;
          FUN_00464300(&DAT_004a2664);
        }
        iVar9 = FUN_00450a70();
      } while (iVar9 != 0);
      FUN_004629b0();
      FUN_00463980();
      FUN_00451d20();
      FUN_00464c40();
      FUN_00452fd0(DAT_004cf3f0);
      iVar9 = FUN_00450cc0();
    } while (iVar9 != 0);
    puVar2 = (undefined4 *)operator_new(0x88ed54);
    if (puVar2 == (undefined4 *)0x0) {
      DAT_004ce8cc = (undefined4 *)0x0;
    }
    else {
      DAT_004ce8cc = FUN_0045dfa0(puVar2);
    }
    if (DAT_004ce9fc == 0) {
      WINNLSEnableIME(0,0);
      do {
        iVar9 = ShowCursor(0);
      } while (-1 < iVar9);
      SetCursor((HCURSOR)0x0);
    }
    _DAT_004cf448 = 0;
    fVar12 = FUN_004508b0();
    _DAT_004cf440 = (double)fVar12;
    _DAT_004cf430 = (double)fVar12;
    _DAT_004cf438 = (double)fVar12;
    fVar12 = FUN_004508b0();
    _DAT_004cf458 = (double)fVar12;
    _DAT_004cf450 = (double)fVar12;
    SetForegroundWindow(DAT_004cf3f0);
    local_134 = FUN_0042f8c0();
    piVar8 = extraout_EDX;
    if (local_134 == 0) {
      DAT_004cf428 = DAT_004cf428 | 1;
      local_134 = 0;
      DAT_004cf404 = 0xfc;
joined_r0x0044f820:
      do {
        while( true ) {
          if (DAT_004cf3f4 != 0) goto LAB_0044fb2d;
          BVar6 = PeekMessageA(&tStack_12c,(HWND)0x0,0,0,1);
          if (BVar6 == 0) break;
          TranslateMessage(&tStack_12c);
          DispatchMessageA(&tStack_12c);
          piVar8 = extraout_EDX_00;
        }
        uVar13 = (**(code **)(*DAT_004ce8f0 + 0xc))(DAT_004ce8f0);
        piVar8 = (int *)((ulonglong)uVar13 >> 0x20);
        if ((int)uVar13 == 0) {
          if ((DAT_004cf428 & 2) == 0) {
            if ((DAT_004cf428 & 0x10) == 0) {
              if ((DAT_004cea10 == 1) && (DAT_004ceace == '\0')) {
                local_134 = FUN_00450600(0x4cf3f0);
                piVar8 = extraout_EDX_02;
              }
              else {
                local_134 = FUN_004503f0(0x4cf3f0);
                piVar8 = extraout_EDX_03;
              }
            }
            else {
              local_134 = FUN_00450080(0x4cf3f0);
              piVar8 = extraout_EDX_01;
            }
            if (local_134 != 0) break;
            DAT_004cee78 = DAT_004cee78 & 0xffffffef;
            goto joined_r0x0044f820;
          }
        }
        else if ((int)uVar13 != -0x7789f797) goto joined_r0x0044f820;
        DAT_004cf42c = 10;
        if ((DAT_004cf428 & 2) != 0) {
          if ((DAT_004cf428 & 0xc) == 0) {
            GetWindowRect(DAT_004cf3f0,(LPRECT)&DAT_004ce8f8);
            puVar2 = &DAT_004ce9dc;
            puVar11 = &DAT_004cea14;
            for (iVar9 = 0xe; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar11 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar11 = puVar11 + 1;
            }
            DAT_004cea10 = (-(uint)((DAT_004cf428 & 0x10) != 0) & 0x7fffffff) + 1;
            _DAT_004cea0c = 0x3c;
            DAT_004ce9fc = 0;
            DAT_004ce9e4 = (DAT_004ceaca != '\0') + 0x16;
          }
          else {
            DAT_004ce9e4 = DAT_004cea90;
            _DAT_004cea0c = 0;
            if ((DAT_004cf428 & 0x10) == 0) {
              DAT_004cea10 = (-(uint)(DAT_004cea8c != 0x3c) & 0x7fffffff) + 1;
            }
            else {
              DAT_004cea10 = -0x80000000;
            }
            DAT_004ce9fc = 1;
          }
        }
        FUN_00431700();
        FUN_0044f370();
        uVar13 = (**(code **)(*DAT_004ce8f0 + 0x40))(DAT_004ce8f0,&DAT_004ce9dc);
        piVar8 = (int *)((ulonglong)uVar13 >> 0x20);
        if ((int)uVar13 == 0) {
          FUN_00451200(extraout_ECX);
          FUN_0044f400();
          DAT_004cee78 = DAT_004cee78 | 0x10;
          _DAT_004cee5c = 3;
          if ((DAT_004cf428 & 2) != 0) {
            uVar3 = DAT_004cf428 >> 2 & 3;
            if (uVar3 == 0) {
              SetWindowLongA(DAT_004cf3f0,-0x10,-0x70000000);
              SetWindowPos(DAT_004cf3f0,(HWND)0x0,0,0,0x280,0x1e0,0x20);
              WINNLSEnableIME(0,0);
              do {
                iVar9 = ShowCursor(0);
              } while (-1 < iVar9);
              SetCursor((HCURSOR)0x0);
              DAT_004cf400 = 0;
            }
            else {
              if (uVar3 == 3) {
                iVar9 = GetSystemMetrics(7);
                iVar9 = iVar9 * 2 + 0x500;
                iVar4 = GetSystemMetrics(8);
                iVar4 = iVar4 * 2 + 0x3c0;
              }
              else if (uVar3 == 2) {
                iVar9 = GetSystemMetrics(7);
                iVar9 = iVar9 * 2 + 0x3c0;
                iVar4 = GetSystemMetrics(8);
                iVar4 = iVar4 * 2 + 0x2d0;
              }
              else {
                iVar9 = GetSystemMetrics(7);
                iVar9 = iVar9 * 2 + 0x280;
                iVar4 = GetSystemMetrics(8);
                iVar4 = iVar4 * 2 + 0x1e0;
              }
              iVar5 = GetSystemMetrics(4);
              SetWindowLongA(DAT_004cf3f0,-0x10,0x10cb0000);
              SetWindowPos(DAT_004cf3f0,(HWND)0x0,DAT_004ce8f8,(int)DAT_004ce8fc,iVar9,iVar5 + iVar4
                           ,0x60);
              ShowWindow(DAT_004cf3f0,1);
              WINNLSEnableIME(0,1);
              do {
                iVar9 = ShowCursor(1);
              } while (iVar9 < 0);
            }
          }
          FUN_00431630();
          DAT_004cf428 = DAT_004cf428 & 0xfffffffd;
          piVar8 = extraout_EDX_04;
          goto joined_r0x0044f820;
        }
      } while ((int)uVar13 == -0x7789f798);
    }
    else if (local_134 != -1) {
      local_134 = 2;
    }
LAB_0044fb2d:
    bVar7 = (byte)(DAT_004cf428 >> 2);
    DAT_004ceacd = bVar7 & 3;
    puVar2 = (undefined4 *)(CONCAT31((uint3)(DAT_004cf428 >> 10),bVar7) & 0xffffff03);
    if ((DAT_004cf428 >> 2 & 3) != 0) {
      GetWindowRect(DAT_004cf3f0,(LPRECT)&DAT_004ce8f8);
      DAT_004cead8 = DAT_004ce8f8;
      DAT_004ceadc = DAT_004ce8fc;
      puVar2 = DAT_004ce8fc;
      piVar8 = extraout_EDX_05;
    }
    FUN_0042f650(puVar2,piVar8);
    puVar2 = DAT_004ce89c;
    if (DAT_004ce89c != (undefined4 *)0x0) {
      FUN_0044f200((int)DAT_004ce89c);
      FUN_0046ca4f(puVar2);
    }
    DAT_004ce89c = (undefined4 *)0x0;
  } while( true );
}


