/* undefined __thiscall FUN_0044bda0(void * this, LPCSTR param_1, char * param_2) @ 0044bda0  238 bytes */
#include "th12.h"

void __thiscall FUN_0044bda0(void *this,LPCSTR param_1,char *param_2)

{
  char cVar1;
  HANDLE hFile;
  DWORD dwCreationDisposition;
  int local_10c;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_10c;
                    /* WARNING: Load size is inaccurate */
  dwCreationDisposition = 0;
  local_10c = 0;
  (**(code **)(*this + 4))();
  cVar1 = *param_2;
  if (cVar1 == '\0') {
LAB_0044be26:
    if (*param_2 != '\0') {
      FUN_0044c050(acStack_108);
      hFile = CreateFileA(acStack_108,*(DWORD *)((int)this + 8),1,(LPSECURITY_ATTRIBUTES)0x0,
                          dwCreationDisposition,0x8000080,(HANDLE)0x0);
      *(HANDLE *)((int)this + 4) = hFile;
      if ((hFile != (HANDLE)0xffffffff) && (local_10c != 0)) {
        SetFilePointer(hFile,0,(PLONG)0x0,2);
      }
    }
  }
  else {
    do {
      if (cVar1 == 'r') {
        *(undefined4 *)((int)this + 8) = 0x80000000;
        dwCreationDisposition = 3;
        goto LAB_0044be26;
      }
      if (cVar1 == 'w') {
        DeleteFileA(param_1);
        dwCreationDisposition = 2;
LAB_0044be1f:
        *(undefined4 *)((int)this + 8) = 0x40000000;
        goto LAB_0044be26;
      }
      if (cVar1 == 'a') {
        local_10c = 1;
        dwCreationDisposition = 4;
        goto LAB_0044be1f;
      }
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  ___security_check_cookie_4(local_4 ^ (uint)&local_10c);
  return;
}


