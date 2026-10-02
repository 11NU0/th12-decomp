/* undefined __stdcall FUN_00462740(int param_1) @ 00462740  106 bytes */
#include "th12.h"

void FUN_00462740(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_EAX;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x18);
  while (puVar1 != (undefined4 *)0x0) {
    pvVar2 = (void *)*puVar1;
    puVar1 = (undefined4 *)puVar1[1];
    if (pvVar2 != (void *)0x0) {
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
        DAT_004cf218 = DAT_004cf218 + '\x01';
      }
      FUN_00462890(pvVar2,param_1);
      if ((DAT_004cee78 & 0x8000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
        DAT_004cf218 = DAT_004cf218 + -1;
      }
    }
  }
  return;
}


