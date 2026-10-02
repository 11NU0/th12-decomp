/* undefined4 __stdcall FUN_0040c3b0(void) @ 0040c3b0  207 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0040c3b0(void)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x930) <= *(int *)(in_EAX + 0x90c)) {
    *(uint *)(in_EAX + 0x528) = *(uint *)(in_EAX + 0x528) & 0xfffffff5;
    return 1;
  }
  fVar1 = *(float *)(in_EAX + 0x928) * DAT_004b2ed0;
  fVar2 = DAT_004b2ed0 * *(float *)(in_EAX + 0x92c);
  *(float *)(in_EAX + 0x4bc) =
       *(float *)(in_EAX + 0x4bc) + DAT_004b2ed0 * *(float *)(in_EAX + 0x924);
  *(float *)(in_EAX + 0x4c0) = *(float *)(in_EAX + 0x4c0) + fVar1;
  *(float *)(in_EAX + 0x4c4) = fVar2 + *(float *)(in_EAX + 0x4c4);
  if ((*(uint *)(in_EAX + 0x918) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x910) = 0;
    *(undefined4 *)(in_EAX + 0x90c) = 0;
    *(undefined4 *)(in_EAX + 0x908) = 0xfff0bdc1;
    *(float **)(in_EAX + 0x914) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x918) = *(uint *)(in_EAX + 0x918) | 1;
  }
  *(undefined4 *)(in_EAX + 0x910) = 0;
  *(undefined4 *)(in_EAX + 0x90c) = 0;
  *(undefined4 *)(in_EAX + 0x908) = 0xffffffff;
  return 0;
}


