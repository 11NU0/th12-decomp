/* undefined4 __stdcall FUN_00453ae0(void) @ 00453ae0  277 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00453ae0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EDI;
  
  if (((DAT_004cf4f8 != (int *)0x0) && (DAT_004ceacb != '\0')) && (DAT_004cf4e8 != 0)) {
    if ((DAT_004ceae8 & 0x10) == 0) {
      uVar1 = FUN_00453890(&DAT_004d3654 + unaff_EDI * 0x100);
      return uVar1;
    }
    if ((&DAT_004d0da8)[unaff_EDI] != 0) {
      FUN_00454b00();
      uVar3 = (uint)*(ushort *)(*(int *)(&DAT_004d0d68 + unaff_EDI * 4) + 0x2c);
      uVar4 = *(int *)(*(int *)(&DAT_004d0d68 + unaff_EDI * 4) + 0x24) * uVar3 * 4 >> 4;
      DAT_004d4758 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      DAT_004cf500 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004548a0,DAT_004ce940,0,
                                  &DAT_004cf4fc);
      iVar2 = FUN_00465aa0(&DAT_004d4754,*(undefined4 *)(&DAT_004d0de8 + unaff_EDI * 4),DAT_004cf4f8
                           ,*(undefined4 *)(&DAT_004d0e28 + unaff_EDI * 4),
                           *(undefined4 *)(&DAT_004d0d68 + unaff_EDI * 4),0,0,0,0,
                           uVar4 - uVar4 % uVar3,DAT_004d4758);
      if (-1 < iVar2) {
        _DAT_004d0e68 = unaff_EDI;
        return 0;
      }
    }
  }
  return 0xffffffff;
}


