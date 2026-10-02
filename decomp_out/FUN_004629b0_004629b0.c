/* undefined4 __stdcall FUN_004629b0(void) @ 004629b0  105 bytes */
#include "th12.h"

undefined4 FUN_004629b0(void)

{
  MMRESULT MVar1;
  joyinfoex_tag local_34;
  
  local_34.dwSize = 0x34;
  local_34.dwFlags = 0xff;
  MVar1 = joyGetPosEx(0,&local_34);
  if (MVar1 != 0) {
    MVar1 = joyGetPosEx(1,&local_34);
    if (MVar1 != 0) {
      FUN_00464220(&DAT_004b0ec8,&DAT_004a3570);
      return 1;
    }
  }
  joyGetDevCapsA(0,(LPJOYCAPSA)&DAT_004ce570,0x194);
  return 0;
}


