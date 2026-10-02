/* undefined4 __stdcall FUN_004629b0(void) @ 004629b0  105 bytes */

#include "th12.h"

typedef struct local_34__u { undefined4 _; undefined4 dwSize; undefined4 dwFlags; } local_34__u;
undefined4 __stdcall FUN_004629b0(void)

{
  local_34__u *local_34__u_alias;
  MMRESULT MVar1;
  joyinfoex_tag local_34;
  
  local_34__u_alias = (local_34__u *)&local_34;
  local_34__u_alias->dwSize = 0x34;
  local_34__u_alias = (local_34__u *)&local_34;
  local_34__u_alias->dwFlags = 0xff;
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


