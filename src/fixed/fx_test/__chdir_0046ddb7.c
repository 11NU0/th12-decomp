/* int __cdecl __chdir(char * _Path) @ 0046ddb7  312 bytes */

#include "th12.h"

/* Library Function - Single Match
    __chdir
   
   Library: Visual Studio 2008 Release */

int __cdecl __chdir(char *_Path)

{
  byte bVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  BOOL BVar5;
  DWORD DVar6;
  byte *lpBuffer;
  uint uVar7;
  int iVar8;
  CHAR local_114;
  undefined local_113;
  undefined local_112;
  undefined local_111;
  byte local_110 [264];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  lpBuffer = local_110;
  bVar2 = false;
  if (_Path == (char *)0x0) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_0046dee1;
  }
  BVar5 = SetCurrentDirectoryA(_Path);
  if (BVar5 == 0) {
LAB_0046debe:
    DVar6 = GetLastError();
    __dosmaperr(DVar6);
  }
  else {
    DVar6 = GetCurrentDirectoryA(0x105,(LPSTR)local_110);
    if (0x104 < (int)DVar6) {
      lpBuffer = (byte *)__calloc_crt(DVar6 + 1,1);
      if ((lpBuffer == (byte *)0x0) || (bVar2 = true, DVar6 == 0)) goto LAB_0046debe;
      DVar6 = GetCurrentDirectoryA(DVar6 + 1,(LPSTR)lpBuffer);
    }
    if (DVar6 == 0) goto LAB_0046debe;
    bVar1 = *lpBuffer;
    if (((bVar1 != 0x5c) && (bVar1 != 0x2f)) || (bVar1 != lpBuffer[1])) {
      local_114 = '=';
      uVar7 = __mbctoupper((uint)*lpBuffer);
      local_113 = (undefined)uVar7;
      local_112 = 0x3a;
      local_111 = 0;
      BVar5 = SetEnvironmentVariableA(&local_114,(LPCSTR)lpBuffer);
      if (BVar5 == 0) goto LAB_0046debe;
    }
  }
  if (bVar2) {
    _free(lpBuffer);
  }
LAB_0046dee1:
  iVar8 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}


