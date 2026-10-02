/* int __thiscall FUN_0040d770(void * this, int param_1) @ 0040d770  56 bytes */
#include "th12.h"

int __thiscall FUN_0040d770(void *this,int param_1)

{
  int in_EAX;
  
  *(int *)(param_1 + 0xa8) =
       ((in_EAX + 0x16 + (int)this) * 1000 + (in_EAX + 0x42) % 1000) * 100 +
       ((int)this + 0x21) % 100;
  return ((int)this + 0x21) / 100;
}


