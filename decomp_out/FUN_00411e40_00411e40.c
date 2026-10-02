/* undefined __stdcall FUN_00411e40(void) @ 00411e40  64 bytes */
#include "th12.h"

void FUN_00411e40(void)

{
  int in_EAX;
  
  *(uint *)(in_EAX + 0x1028) = *(uint *)(in_EAX + 0x1028) & 0xfffffffe;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(int *)(in_EAX + 0x101c) = in_EAX;
  *(undefined4 *)(in_EAX + 0x1018) = 0xffffffff;
  *(undefined4 *)(in_EAX + 0x1020) = 0;
  *(int *)(in_EAX + 4) = in_EAX + 8;
  *(int *)(in_EAX + 0x1030) = in_EAX + 8;
  *(undefined4 *)(in_EAX + 0x1034) = 0;
  *(undefined4 *)(in_EAX + 0x1038) = 0;
  return;
}


