/* undefined __stdcall FUN_00462a80(void) @ 00462a80  812 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00462a80(void)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  joyinfoex_tag local_154 [6];
  uint local_c;
  
  local_c = DAT_004ad138 ^ (uint)local_154;
  if ((DAT_004cee78 & 0x800) == 0) {
    _memset(local_154,0,0x34);
    local_154[0].dwSize = 0x34;
    local_154[0].dwFlags = 0xff;
    MVar1 = joyGetPosEx(0,local_154);
    if (MVar1 == 0) {
      ___security_check_cookie_4(local_c ^ (uint)local_154);
      return;
    }
  }
  else {
    iVar2 = (**(code **)(*DAT_004ce90c + 100))(DAT_004ce90c);
    if (iVar2 < 0) {
      iVar3 = 0;
      iVar2 = (**(code **)(*DAT_004ce90c + 0x1c))(DAT_004ce90c);
      if (iVar2 == -0x7ff8ffe2) {
        while( true ) {
          (**(code **)(*DAT_004ce90c + 0x1c))(DAT_004ce90c);
          iVar2 = FUN_004654b0();
          iVar3 = iVar3 + 1;
          if (399 < iVar3) break;
          if (iVar2 != -0x7ff8ffe2) {
            ___security_check_cookie_4(local_c ^ (uint)local_154);
            return;
          }
        }
      }
    }
    else {
      _memset(&local_154[0].dwReserved2,0,0x110);
      iVar2 = (**(code **)(*DAT_004ce90c + 0x24))(DAT_004ce90c,0x110,&local_154[0].dwReserved2);
      if (-1 < iVar2) {
        ___security_check_cookie_4(local_c ^ (uint)local_154);
        return;
      }
    }
  }
  ___security_check_cookie_4(local_c ^ (uint)local_154);
  return;
}


