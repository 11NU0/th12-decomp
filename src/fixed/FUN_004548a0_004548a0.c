/* undefined4 __stdcall FUN_004548a0(void) @ 004548a0  177 bytes */
#include "th12.h"

typedef struct local_1c__u { undefined4 _; undefined4 message; } local_1c__u;
undefined4 __stdcall FUN_004548a0(void)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  tagMSG local_1c;
  
  bVar1 = false;
  do {
    DVar2 = MsgWaitForMultipleObjects(1,(HANDLE *)&DAT_004d4758,0,0xffffffff,0x4bf);
    if (DAT_004d4754 == 0) {
      bVar1 = true;
    }
    if (DVar2 == 0) {
      if ((DAT_004d4754 != 0) && (*(int *)((int)DAT_004d4754 + 0x30) != 0)) {
        *(undefined4 *)((int)DAT_004d4754 + 0x78) = 1;
        FUN_004667d0(DAT_004d4754);
        *(undefined4 *)((int)DAT_004d4754 + 0x78) = 0;
      }
    }
    else if (DVar2 == 1) {
      iVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      while (iVar3 != 0) {
        if (((local_1c__u *)&local_1c)->message == 0x12) {
          bVar1 = true;
        }
        iVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      }
    }
  } while (!bVar1);
  return 0;
}


