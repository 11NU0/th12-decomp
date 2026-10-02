/* DWORD __fastcall FUN_0044c310(char * param_1) @ 0044c310  202 bytes */
#include "th12.h"

DWORD __fastcall FUN_0044c310(char *param_1)

{
  int iVar1;
  DWORD DVar2;
  int *unaff_FS_OFFSET;
  undefined **local_18;
  HANDLE local_14;
  undefined4 local_10;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = ((void *)0x00496fa8);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = FUN_0044c130(param_1);
  DVar2 = 0;
  if (iVar1 != 0) {
    _strchr(param_1,0x2f);
    DVar2 = FUN_0044b8e0();
    *unaff_FS_OFFSET = local_c;
    return DVar2;
  }
  local_18 = &PTR_FUN_004a22dc;
  local_14 = (HANDLE)0xffffffff;
  local_10 = 0;
  local_4 = 0;
  FUN_0044bda0(&local_18,param_1,"r");
  if (local_14 != (HANDLE)0xffffffff) {
    DVar2 = GetFileSize(local_14,(LPDWORD)0x0);
  }
  local_18 = &PTR_FUN_004a22dc;
  if (local_14 != (HANDLE)0xffffffff) {
    CloseHandle(local_14);
  }
  *unaff_FS_OFFSET = local_c;
  return DVar2;
}


