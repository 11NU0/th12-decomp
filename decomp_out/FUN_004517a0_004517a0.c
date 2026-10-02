/* undefined __stdcall FUN_004517a0(LPCSTR param_1) @ 004517a0  274 bytes */
#include "th12.h"

void FUN_004517a0(LPCSTR param_1)

{
  HRESULT HVar1;
  int iVar2;
  LPWSTR lpWideCharStr;
  int *unaff_EBX;
  int *unaff_EBP;
  int unaff_EDI;
  int *piVar3;
  int *piVar4;
  undefined auStack_154 [4];
  undefined4 *puStack_150;
  int aiStack_14c [82];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)auStack_154;
  if (unaff_EDI != 0) {
    CoInitialize((LPVOID)0x0);
    HVar1 = CoCreateInstance((IID *)&DAT_0049b88c,(LPUNKNOWN)0x0,1,(IID *)&DAT_00499c6c,&puStack_150
                            );
    if (-1 < HVar1) {
      piVar4 = aiStack_14c;
      piVar3 = (int *)&DAT_0049bcfc;
      iVar2 = (**(code **)*puStack_150)(puStack_150);
      if (-1 < iVar2) {
        lpWideCharStr = (LPWSTR)operator_new(0x208);
        MultiByteToWideChar(0,0,param_1,-1,lpWideCharStr,0x104);
        iVar2 = (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,lpWideCharStr,0);
        if (-1 < iVar2) {
          (**(code **)(*piVar3 + 0xc))(piVar3);
        }
        FUN_0046ca4f(lpWideCharStr);
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    CoUninitialize();
  }
  ___security_check_cookie_4(local_4 ^ (uint)auStack_154);
  return;
}


