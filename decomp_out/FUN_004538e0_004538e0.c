/* undefined4 __stdcall FUN_004538e0(int param_1) @ 004538e0  505 bytes */
#include "th12.h"

undefined4 FUN_004538e0(int param_1)

{
  byte bVar1;
  byte *in_EAX;
  byte *pbVar2;
  int iVar3;
  HANDLE hFile;
  void *lpBuffer;
  byte *pbVar4;
  bool bVar5;
  DWORD DStack_4;
  
  if ((&DAT_004d0da8)[param_1] != 0) {
    pbVar2 = &DAT_004d3654 + param_1 * 0x100;
    pbVar4 = in_EAX;
    do {
      bVar1 = *pbVar4;
      bVar5 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00453920:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00453925;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar5 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00453920;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00453925:
    if (iVar3 == 0) {
      return 0;
    }
  }
  pbVar4 = in_EAX;
  do {
    bVar1 = *pbVar4;
    pbVar4[(int)(&DAT_004d3654 + (param_1 * 0x100 - (int)in_EAX))] = bVar1;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  if (((DAT_004ceae8 & 0x10) == 0) || (DAT_004cf4f8 == 0)) {
    return 0;
  }
  if ((void *)(&DAT_004d0da8)[param_1] != (void *)0x0) {
    _free((void *)(&DAT_004d0da8)[param_1]);
    (&DAT_004d0da8)[param_1] = 0;
  }
  FUN_00454b00();
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + '\x01';
  }
  hFile = CreateFileA(&DAT_004d4654,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0)
  ;
  if (hFile != (HANDLE)0xffffffff) {
    iVar3 = FUN_00453670(in_EAX,0x4cf4e8);
    iVar3 = iVar3 * 0x34;
    SetFilePointer(hFile,*(LONG *)(iVar3 + 0x10 + DAT_004d0e6c),(PLONG)0x0,0);
    lpBuffer = _malloc(*(size_t *)(iVar3 + 0x14 + DAT_004d0e6c));
    if (lpBuffer != (void *)0x0) {
      ReadFile(hFile,lpBuffer,*(DWORD *)(iVar3 + 0x14 + DAT_004d0e6c),&DStack_4,(LPOVERLAPPED)0x0);
      CloseHandle(hFile);
      FUN_00431800();
      iVar3 = iVar3 + DAT_004d0e6c;
      (&DAT_004d0da8)[param_1] = lpBuffer;
      *(void **)(&DAT_004d0de8 + param_1 * 4) = lpBuffer;
      *(int *)(&DAT_004d0d68 + param_1 * 4) = iVar3;
      *(undefined4 *)(&DAT_004d0e28 + param_1 * 4) = *(undefined4 *)(iVar3 + 0x14);
      return 0;
    }
    CloseHandle(hFile);
    FUN_00454b00();
    FUN_00431800();
    return 0xffffffff;
  }
  FUN_00454b00();
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + -1;
  }
  return 0xffffffff;
}


