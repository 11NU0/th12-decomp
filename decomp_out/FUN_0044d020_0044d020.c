/* undefined4 __thiscall FUN_0044d020(void * this, LPCSTR param_1) @ 0044d020  169 bytes */
#include "th12.h"

undefined4 __thiscall FUN_0044d020(void *this,LPCSTR param_1)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID _Src;
  undefined4 uVar1;
  DWORD _Size;
  void *_Dst;
  BOOL BVar2;
  
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 4))();
  hResInfo = FindResourceA((HMODULE)0x0,param_1,(LPCSTR)0xa);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource((HMODULE)0x0,hResInfo);
    if (hResData != (HGLOBAL)0x0) {
      _Src = LockResource(hResData);
      if (_Src == (LPVOID)0x0) {
        FreeResource((HGLOBAL)0x0);
                    /* WARNING: Load size is inaccurate */
        uVar1 = (**(code **)(*this + 4))();
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      _Size = SizeofResource((HMODULE)0x0,hResInfo);
      *(DWORD *)((int)this + 4) = _Size;
      _Dst = _malloc(_Size);
      *(void **)((int)this + 0xc) = _Dst;
      if (_Dst != (void *)0x0) {
        _memcpy(_Dst,_Src,*(size_t *)((int)this + 4));
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0xc);
        BVar2 = FreeResource(hResData);
        return CONCAT31((int3)((uint)BVar2 >> 8),1);
      }
    }
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (**(code **)(*this + 4))();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


