/* undefined __thiscall FUN_0045fc90(void * this, uint param_1, int param_2) @ 0045fc90  451 bytes */
#include "th12.h"

void __thiscall FUN_0045fc90(void *this,uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  int *_Dst;
  byte *pbVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_110;
  int local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_110;
  local_110 = param_1;
  FUN_004622e0();
  if (param_2 < 0x20) {
    _sprintf(local_108,"%s",this);
    pbVar3 = FUN_00463c10((size_t *)0x0,0);
    local_10c = 0;
    _Dst = (int *)operator_new(0x138);
    if (_Dst == (int *)0x0) {
      _Dst = (int *)0x0;
    }
    else {
      _memset(_Dst,0,0x138);
    }
    *(int **)(&DAT_004b50c0 + param_2 * 4 + local_110) = _Dst;
    if (pbVar3 != (byte *)0x0) {
      *_Dst = param_2;
      _Dst[0x42] = (int)pbVar3;
      iVar6 = 4 - (int)this;
      do {
                    /* WARNING: Load size is inaccurate */
        cVar1 = *this;
        *(char *)((int)this + (int)_Dst + iVar6) = cVar1;
        this = (void *)((int)this + 1);
      } while (cVar1 != '\0');
      local_110 = (uint)*(ushort *)(pbVar3 + 6);
      uVar8 = (uint)*(ushort *)(pbVar3 + 4);
      iVar7 = 1;
      iVar6 = *(int *)(pbVar3 + 0x24);
      pbVar4 = pbVar3;
      while (iVar6 != 0) {
        pbVar4 = pbVar4 + iVar6;
        local_110 = local_110 + *(ushort *)(pbVar4 + 6);
        uVar8 = uVar8 + *(ushort *)(pbVar4 + 4);
        iVar7 = iVar7 + 1;
        iVar6 = *(int *)(pbVar4 + 0x24);
      }
      _Dst[0x43] = iVar7;
      pvVar5 = _malloc(iVar7 * 0x14);
      _Dst[0x48] = (int)pvVar5;
      _memset(pvVar5,0,iVar7 * 0x14);
      pvVar5 = _malloc(uVar8 * 0x48);
      uVar2 = local_110;
      _Dst[0x46] = (int)pvVar5;
      pvVar5 = _malloc(local_110 * 4);
      _Dst[0x45] = uVar8;
      _Dst[0x47] = (int)pvVar5;
      _Dst[0x44] = uVar2;
      for (; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + *(int *)(pbVar3 + 0x24)) {
        iVar6 = FUN_0045fee0(_Dst,(int *)pbVar3);
        if (iVar6 < 0) goto LAB_0045fe3d;
        local_10c = local_10c + 1;
        if (*(int *)(pbVar3 + 0x24) == 0) goto LAB_0045fe3d;
      }
      FUN_00464300(&DAT_004a33b8);
    }
  }
  else {
    FUN_00464300(&DAT_004a32c4);
  }
LAB_0045fe3d:
  ___security_check_cookie_4(local_4 ^ (uint)&local_110);
  return;
}


