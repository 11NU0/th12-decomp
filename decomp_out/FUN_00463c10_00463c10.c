/* byte * __stdcall FUN_00463c10(size_t * param_1, int param_2) @ 00463c10  466 bytes */
#include "th12.h"

byte * FUN_00463c10(size_t *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *in_EAX;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  HANDLE hFile;
  size_t sStack_4;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + '\x01';
  }
  if (param_2 == 0) {
    pcVar3 = _strrchr(in_EAX,0x5c);
    pcVar4 = in_EAX;
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3 + 1;
    }
    pcVar4 = _strrchr(pcVar4,0x2f);
    if (pcVar4 != (char *)0x0) {
      in_EAX = pcVar4 + 1;
    }
    puVar1 = DAT_004d4c90;
    iVar2 = DAT_004d4c94;
    if (DAT_004d4c90 != (undefined4 *)0x0) {
      for (; 0 < iVar2; iVar2 = iVar2 + -1) {
        iVar5 = __stricmp(in_EAX,(char *)*puVar1);
        if (iVar5 == 0) {
          sStack_4 = puVar1[2];
          goto LAB_00463c9a;
        }
        puVar1 = puVar1 + 4;
      }
    }
    sStack_4 = 0;
LAB_00463c9a:
    if (param_1 != (size_t *)0x0) {
      *param_1 = sStack_4;
    }
    if (sStack_4 != 0) {
      FUN_004654b0();
      pbVar6 = (byte *)_malloc(sStack_4);
      if (pbVar6 != (byte *)0x0) {
        FUN_0044b7b0(0x4d4c90,pbVar6);
        FUN_00431800();
        return pbVar6;
      }
    }
  }
  else {
    FUN_004654b0();
    hFile = CreateFileA(in_EAX,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      FUN_004654b0();
    }
    else {
      sStack_4 = GetFileSize(hFile,(LPDWORD)0x0);
      pbVar6 = (byte *)_malloc(sStack_4);
      if (pbVar6 != (byte *)0x0) {
        ReadFile(hFile,pbVar6,sStack_4,&sStack_4,(LPOVERLAPPED)0x0);
        if (param_1 != (size_t *)0x0) {
          *param_1 = sStack_4;
        }
        CloseHandle(hFile);
        if ((DAT_004cee78 & 0x8000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
          DAT_004cf21a = DAT_004cf21a + -1;
        }
        return pbVar6;
      }
      FUN_004654b0();
      CloseHandle(hFile);
    }
  }
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + -1;
  }
  return (byte *)0x0;
}


