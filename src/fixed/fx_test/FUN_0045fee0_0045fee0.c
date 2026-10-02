/* undefined __thiscall FUN_0045fee0(void * this, int * param_1) @ 0045fee0  221 bytes */

#include "th12.h"

void __thiscall FUN_0045fee0(void *this,int *param_1)

{
  byte *pbVar1;
  int unaff_EBX;
  size_t local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_10c;
  if (*param_1 == 7) {
    if ((*(char *)(param_1 + 8) == '\0') && (*(char *)(param_1[4] + (int)param_1) != '@')) {
      _sprintf(local_108,"%s",(char *)(param_1[4] + (int)param_1));
      pbVar1 = FUN_00463c10(&local_10c,1);
      if (pbVar1 == (byte *)0x0) {
        FUN_00464300(&DAT_004a3418);
      }
      else {
        *(size_t *)(unaff_EBX * 0x14 + 8 + *(int *)((int)this + 0x120)) = local_10c;
        *(byte **)(unaff_EBX * 0x14 + 4 + *(int *)((int)this + 0x120)) = pbVar1;
      }
    }
    ___security_check_cookie_4(local_4 ^ (uint)&local_10c);
    return;
  }
  FUN_00464300(&DAT_004a33f4);
  ___security_check_cookie_4(local_4 ^ (uint)&local_10c);
  return;
}


