/* undefined4 __stdcall FUN_0040ed80(void) @ 0040ed80  111 bytes */
#include "th12.h"

undefined4 FUN_0040ed80(void)

{
  int iVar1;
  
  iVar1 = DAT_004b43d0;
  FUN_00436410();
  FUN_004097f0();
  FUN_00406b20();
  FUN_00425b10();
  FUN_0043dd50();
  FUN_004130e0(*(undefined4 *)(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x114) * 4));
  FUN_0041df40();
  *(undefined4 *)(iVar1 + 500) = *(undefined4 *)(*(int *)(DAT_004b43dc + 100) + 8);
  FUN_00464970(1);
  FUN_00464970(-1);
  *(undefined4 *)(iVar1 + 0x30) = 1;
  return 0;
}


