/* undefined __stdcall FUN_00462db0(void) @ 00462db0  267 bytes */
#include "th12.h"

void FUN_00462db0(void)

{
  MMRESULT MVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined auStack_158 [4];
  joyinfoex_tag local_154;
  undefined4 auStack_f0 [57];
  uint local_c;
  
  local_c = DAT_004ad138 ^ (uint)auStack_158;
  _memset(&DAT_004d4eb0,0,0x80);
  if ((DAT_004cee78 & 0x800) == 0) {
    _memset(&local_154,0,0x34);
    local_154.dwSize = 0x34;
    local_154.dwFlags = 0xff;
    MVar1 = joyGetPosEx(0,&local_154);
    if (MVar1 == 0) {
      uVar2 = 0;
      do {
        if ((local_154.dwButtons & 1) != 0) {
          *(undefined *)((int)&DAT_004d4eb0 + uVar2) = 0x80;
        }
        uVar2 = uVar2 + 1;
        local_154.dwButtons = local_154.dwButtons >> 1;
      } while (uVar2 < 0x20);
    }
  }
  else {
    iVar3 = (**(code **)(*DAT_004ce90c + 100))(DAT_004ce90c);
    if (iVar3 < 0) {
      iVar3 = 0;
      iVar4 = (**(code **)(*DAT_004ce90c + 0x1c))(DAT_004ce90c);
      do {
        if (iVar4 != -0x7ff8ffe2) break;
        iVar4 = (**(code **)(*DAT_004ce90c + 0x1c))(DAT_004ce90c);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 400);
    }
    else {
      (**(code **)(*DAT_004ce90c + 0x24))(DAT_004ce90c,0x110,&local_154.dwReserved2);
      puVar5 = auStack_f0;
      puVar6 = &DAT_004d4eb0;
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
  }
  ___security_check_cookie_4(local_c ^ (uint)auStack_158);
  return;
}


