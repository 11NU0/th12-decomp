/* undefined __cdecl ___convertcp(UINT param_1, UINT param_2, char * param_3, uint * param_4, LPSTR param_5, int param_6) @ 0048d678  436 bytes */

#include "th12.h"

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2008 Release */

void __cdecl
typedef struct local_1c__u { undefined4 _; undefined4 MaxCharSize; } local_1c__u;
__cdecl ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  local_1c__u *local_1c__u_alias;
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  LPCWSTR pWVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_0048d81a;
  BVar2 = GetCPInfo(param_1,&local_1c);
  local_1c__u_alias = (local_1c__u *)&local_1c;
  if ((((BVar2 == 0) || (local_1c__u_alias->MaxCharSize != 1)) ||
  local_1c__u_alias = (local_1c__u *)&local_1c;
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c__u_alias->MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = uVar6 == 0;
    if (bVar7) goto LAB_0048d81a;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      pWVar4 = (LPCWSTR)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined *)0x44) {
LAB_0048d75a:
        local_20 = pWVar4 + 4;
      }
    }
    else {
      pWVar4 = (LPCWSTR)_malloc(_Size);
      local_20 = pWVar4;
      if (pWVar4 != (LPCWSTR)0x0) {
        pWVar4[0] = L'\xdddd';
        pWVar4[1] = L'\0';
        goto LAB_0048d75a;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = (LPSTR)__calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_0048d81a:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


