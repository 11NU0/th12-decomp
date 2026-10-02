/* int __cdecl __setargv(void) @ 0047ae89  187 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2008 Release */

int __cdecl __setargv(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  uint _Size;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  if (DAT_004d6434 == 0) {
    ___initmbctable();
  }
  DAT_004b42e4 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_004b41e0,0x104);
  DAT_004b3d90 = &DAT_004b41e0;
  if ((DAT_004d645c == (byte *)0x0) || (local_8 = DAT_004d645c, *DAT_004d645c == 0)) {
    local_8 = &DAT_004b41e0;
  }
  _parse_cmdline(extraout_ECX,local_8,(undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) &&
       (puVar2 = (undefined4 *)__malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      _parse_cmdline(_Size,local_8,puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_004b3d74 = local_c - 1;
      _DAT_004b3d78 = puVar2;
      return 0;
    }
  }
  return -1;
}


