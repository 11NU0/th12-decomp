/* undefined4 __stdcall FUN_00437600(void) @ 00437600  84 bytes */
#include "th12.h"

undefined4 FUN_00437600(void)

{
  void *this;
  int in_EAX;
  
  this = DAT_004ce8cc;
  if (*(int *)(in_EAX + 0xa28) != 2) {
    *(float *)(in_EAX + 0x444) = *(float *)(in_EAX + 0x97c) + 32.0 + 192.0;
    *(float *)(in_EAX + 0x448) = *(float *)(in_EAX + 0x980) + 16.0;
    *(undefined4 *)(in_EAX + 0x44c) = *(undefined4 *)(in_EAX + 0x984);
    FUN_0045c900(this,this);
  }
  return 1;
}


