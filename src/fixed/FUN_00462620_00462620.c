/* int __stdcall FUN_00462620(void) @ 00462620  259 bytes */
#include "th12.h"

int __stdcall FUN_00462620(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int local_8;
  
  iVar3 = DAT_004ce89c;
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
    DAT_004cf218 = DAT_004cf218 + '\x01';
  }
  puVar1 = *(undefined4 **)((int)iVar3 + 0x3c);
  local_8 = 0;
  do {
    do {
      if (puVar1 == (undefined4 *)0x0) {
LAB_004626fd:
        if ((DAT_004cee78 & 0x8000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
          DAT_004cf218 = DAT_004cf218 + -1;
        }
        return local_8;
      }
      pvVar2 = (void *)*puVar1;
      puVar1 = (undefined4 *)puVar1[1];
    } while (*(int *)((int)pvVar2 + 8) == 0);
    if ((*(byte *)((int)pvVar2 + 4) & 2) != 0) {
LAB_00462674:
      if ((DAT_004cee78 & 0x8000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
        DAT_004cf218 = DAT_004cf218 + -1;
      }
      uVar4 = (**(code **)((int)pvVar2 + 8))();
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
        DAT_004cf218 = DAT_004cf218 + '\x01';
      }
      switch(uVar4) {
      case 0:
        FUN_00462890(pvVar2,iVar3);
      default:
        break;
      case 2:
        goto switchD_004626b9_caseD_2;
      case 3:
        local_8 = 1;
        goto LAB_004626fd;
      case 4:
        local_8 = 0;
        goto LAB_004626fd;
      case 5:
        local_8 = -1;
        goto LAB_004626fd;
      }
    }
switchD_004626b9_caseD_1:
    local_8 = local_8 + 1;
  } while( true );
switchD_004626b9_caseD_2:
  if ((*(byte *)((int)pvVar2 + 4) & 2) == 0) goto switchD_004626b9_caseD_1;
  goto LAB_00462674;
}


