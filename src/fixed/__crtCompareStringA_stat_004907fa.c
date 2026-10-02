/* int __cdecl __crtCompareStringA_stat(localeinfo_struct * param_1, ulong param_2, ulong param_3, char * param_4, int param_5, char * param_6, int param_7, int param_8) @ 004907fa  880 bytes */
#include "th12.h"

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2008 Release */

typedef struct local_1c__u { undefined4 _; undefined4 MaxCharSize; undefined4 LeadByte; } local_1c__u;
int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  undefined4 stack0xfffffffc;
  undefined4 stack0xffffffcc;
  undefined4 stack0xffffffc4;
  undefined4 stack0x00000000;
  uint _Size;
  char *lpMultiByteStr;
  int iVar1;
  DWORD DVar2;
  local_1c__u *local_1c__u_alias;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  PCNZWCH pWVar5;
  uint uVar6;
  LPWSTR lpWideCharStr;
  char *pcVar7;
  int *in_ECX;
  byte *in_EDX;
  byte *_Memory;
  int unaff_EDI;
  PCNZCH _Memory_00;
  byte *local_28;
  PCNZWCH local_24;
  char *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  lpMultiByteStr = param_4;
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_004b43b0 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_004b43b0 = 2;
      }
    }
    else {
      DAT_004b43b0 = 1;
    }
  }
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_00490b58;
  }
  else {
    param_3 = strncnt((char *)param_3,unaff_EDI);
  }
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_00490b58;
  }
  else {
    param_5 = strncnt((char *)param_5,unaff_EDI);
  }
  if ((DAT_004b43b0 == 2) || (DAT_004b43b0 == 0)) {
    _Memory_00 = (PCNZCH)0x0;
    _Memory = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp((LCID)param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_00490b58;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      _Memory = (byte *)___convertcp((UINT)param_6,(UINT)pcVar7,(char *)in_EDX,&param_3,(LPSTR)0x0,0
                                    );
      if (_Memory == (byte *)0x0) goto LAB_00490b58;
      _Memory_00 = (PCNZCH)___convertcp((UINT)param_6,(UINT)pcVar7,lpMultiByteStr,(uint *)&param_5,
                                        (LPSTR)0x0,0);
      local_28 = _Memory;
      local_20 = _Memory_00;
      if (_Memory_00 == (PCNZCH)0x0) {
        _free(_Memory);
        goto LAB_00490b58;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (_Memory != (byte *)0x0) {
      _free(_Memory);
      _free(_Memory_00);
    }
    goto LAB_00490b58;
  }
  if (DAT_004b43b0 != 1) goto LAB_00490b58;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_00490b58;
    if (0 < (int)param_3) {
      if (1 < ((local_1c__u *)&local_1c)->MaxCharSize) {
  local_1c__u_alias = (local_1c__u *)&local_1c;
        pBVar4 = local_1c__u_alias->LeadByte;
        while (((((local_1c__u *)&local_1c)->LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          ((local_1c__u *)&local_1c)->LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00490b58;
    }
    if (0 < param_5) {
      if (1 < ((local_1c__u *)&local_1c)->MaxCharSize) {
  local_1c__u_alias = (local_1c__u *)&local_1c;
        pBVar4 = local_1c__u_alias->LeadByte;
        while (((((local_1c__u *)&local_1c)->LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               (((byte)*lpMultiByteStr < *pBVar4 || (pBVar4[1] < (byte)*lpMultiByteStr))))) {
          pBVar4 = pBVar4 + 2;
          ((local_1c__u *)&local_1c)->LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00490b58;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_00490b58;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      pWVar5 = (PCNZWCH)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined *)0x3c) {
LAB_004909d1:
        local_24 = pWVar5 + 4;
      }
    }
    else {
      pWVar5 = (PCNZWCH)_malloc(uVar6);
      local_24 = pWVar5;
      if (pWVar5 != (PCNZWCH)0x0) {
        pWVar5[0] = L'\xdddd';
        pWVar5[1] = L'\0';
        goto LAB_004909d1;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_00490b58;
  iVar1 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_3,local_24,cchWideChar);
  if ((iVar1 != 0) &&
     (uVar6 = MultiByteToWideChar((UINT)param_6,9,lpMultiByteStr,param_5,(LPWSTR)0x0,0), uVar6 != 0)
     ) {
    if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar6 * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined *)0x3c) goto LAB_00490a92;
        lpWideCharStr = (LPWSTR)&stack0xffffffcc;
      }
      else {
        lpWideCharStr = (LPWSTR)_malloc(_Size);
        if (lpWideCharStr != (LPWSTR)0x0) {
          lpWideCharStr[0] = L'\xdddd';
          lpWideCharStr[1] = L'\0';
          lpWideCharStr = lpWideCharStr + 4;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar1 = MultiByteToWideChar((UINT)param_6,1,lpMultiByteStr,param_5,lpWideCharStr,uVar6);
      if (iVar1 != 0) {
        CompareStringW((LCID)param_1,param_2,local_24,cchWideChar,lpWideCharStr,uVar6);
      }
      __freea(lpWideCharStr);
    }
  }
LAB_00490a92:
  __freea(local_24);
LAB_00490b58:
  iVar1 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


