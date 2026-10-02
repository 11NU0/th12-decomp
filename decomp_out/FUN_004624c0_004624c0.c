/* int __stdcall FUN_004624c0(void) @ 004624c0  304 bytes */
#include "th12.h"

int FUN_004624c0(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int local_8;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
    DAT_004cf218 = DAT_004cf218 + '\x01';
  }
switchD_00462570_caseD_6:
  puVar2 = *(undefined4 **)(unaff_EBX + 0x18);
  local_8 = 0;
LAB_00462500:
  do {
    do {
      if (puVar2 == (undefined4 *)0x0) {
LAB_004625d5:
        if ((DAT_004cee78 & 0x8000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
          DAT_004cf218 = DAT_004cf218 + -1;
        }
        return local_8;
      }
      pvVar1 = (void *)*puVar2;
      puVar2 = (undefined4 *)puVar2[1];
    } while (*(int *)((int)pvVar1 + 8) == 0);
    if ((*(byte *)((int)pvVar1 + 4) & 2) != 0) {
LAB_00462525:
      if (*(int *)(unaff_EBX + 0x48) == 0) {
        if ((DAT_004cee78 & 0x8000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
          DAT_004cf218 = DAT_004cf218 + -1;
        }
        uVar3 = (**(code **)((int)pvVar1 + 8))();
        if ((DAT_004cee78 & 0x8000) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
          DAT_004cf218 = DAT_004cf218 + '\x01';
        }
        switch(uVar3) {
        case 0:
          FUN_00462890(pvVar1,unaff_EBX);
          local_8 = local_8 + 1;
          goto LAB_00462500;
        default:
          goto switchD_00462570_caseD_1;
        case 2:
          goto switchD_00462570_caseD_2;
        case 3:
          local_8 = 1;
          goto LAB_004625d5;
        case 4:
        case 8:
          local_8 = 0;
          goto LAB_004625d5;
        case 5:
          local_8 = -1;
          goto LAB_004625d5;
        case 6:
          goto switchD_00462570_caseD_6;
        case 7:
          break;
        }
      }
      if (*(code **)((int)pvVar1 + 0x10) != (code *)0x0) {
        (**(code **)((int)pvVar1 + 0x10))();
      }
    }
switchD_00462570_caseD_1:
    local_8 = local_8 + 1;
  } while( true );
switchD_00462570_caseD_2:
  if ((*(byte *)((int)pvVar1 + 4) & 2) == 0) goto code_r0x0046257d;
  goto LAB_00462525;
code_r0x0046257d:
  local_8 = local_8 + 1;
  goto LAB_00462500;
}


