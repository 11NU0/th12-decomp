/* undefined __stdcall FUN_0041ca70(void) @ 0041ca70  95 bytes */

#include "th12.h"

void __stdcall FUN_0041ca70(void)

{
  void *pvVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)(in_EAX + 0xc);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  DAT_004b43e0 = 0;
  return;
}


