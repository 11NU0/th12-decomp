/* undefined4 __stdcall FUN_0044d640(void * param_1) @ 0044d640  393 bytes */
#include "th12.h"

typedef struct local_6c__u { undefined4 _; undefined4 bmiHeader; undefined4 bmiColors; } local_6c__u;
uint __stdcall FUN_0044d640(void *param_1)

{
  local_6c__u *local_6c__u_alias;
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  HBITMAP h;
  HDC hdc;
  BITMAPINFO local_6c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  pvVar3 = param_1;
  FUN_0044d5b0();
  _memset(&local_6c,0,0x6c);
  uVar4 = 0;
  pvVar2 = DAT_004aeb20;
  while ((pvVar2 != (void *)0xffffffff && (pvVar2 != pvVar3))) {
    uVar4 = uVar4 + 1;
    pvVar2 = (&DAT_004aeb20)[uVar4 * 6];
  }
  if ((pvVar3 == (void *)0xffffffff) || (iVar1 = uVar4 * 0x18, iVar1 == -0x4aeb20)) {
    return uVar4 & 0xffffff00;
  }
  iVar5 = *(int *)((int)iVar1 + 0x4aeb24) * 0x400;
  iVar5 = ((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) + 3;
  ((local_6c__u *)&local_6c)->bmiHeader.biBitCount = *(WORD *)((int)iVar1 + 0x4aeb24);
  iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
  ((local_6c__u *)&local_6c)->bmiHeader.biPlanes = 1;
  ((local_6c__u *)&local_6c)->bmiHeader.biSizeImage = iVar5 << 8;
  ((local_6c__u *)&local_6c)->bmiHeader.biSize = 0x6c;
  ((local_6c__u *)&local_6c)->bmiHeader.biWidth = 0x400;
  ((local_6c__u *)&local_6c)->bmiHeader.biHeight = -0x41;
  if ((pvVar3 != (void *)0x18) && (pvVar3 != (void *)0x16)) {
    ((local_6c__u *)&local_6c)->bmiColors[0] = *(RGBQUAD *)((int)iVar1 + 0x4aeb2c);
    local_40 = *(undefined4 *)((int)iVar1 + 0x4aeb30);
    local_3c = *(undefined4 *)((int)iVar1 + 0x4aeb34);
    local_38 = *(undefined4 *)((int)iVar1 + 0x4aeb28);
    ((local_6c__u *)&local_6c)->bmiHeader.biCompression = 3;
  }
  h = CreateDIBSection((HDC)0x0,&local_6c,0,&param_1,(HANDLE)0x0,0);
  if (h == (HBITMAP)0x0) {
    return 0;
  }
  _memset(param_1,0,((local_6c__u *)&local_6c)->bmiHeader.biSizeImage);
  hdc = CreateCompatibleDC((HDC)0x0);
  DAT_004b0e60 = SelectObject(hdc,h);
  DAT_004b0e5c = hdc;
  DAT_004b0e64 = h;
  DAT_004b0e58 = iVar5 * 4;
  DAT_004b0e48 = pvVar3;
  DAT_004b0e68 = param_1;
  local_6c__u_alias = (local_6c__u *)&local_6c;
  DAT_004b0e54 = local_6c__u_alias->bmiHeader.biSizeImage;
  DAT_004b0e4c = 0x400;
  DAT_004b0e50 = 0x40;
  return CONCAT31((int3)((uint)DAT_004b0e60 >> 8),1);
}


