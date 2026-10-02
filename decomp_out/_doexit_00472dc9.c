/* undefined __cdecl _doexit(int param_1, int param_2, int param_3) @ 00472dc9  285 bytes */
#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00472ee6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2008 Release */

void __cdecl _doexit(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_2c;
  int *local_24;
  int *local_20;
  
  __lock(8);
  if (DAT_004b3da0 != 1) {
    _DAT_004b3d9c = 1;
    DAT_004b3d98 = (undefined)param_3;
    if (param_2 == 0) {
      piVar1 = (int *)__decode_pointer(DAT_004d6430);
      if (piVar1 != (int *)0x0) {
        piVar2 = (int *)__decode_pointer(DAT_004d642c);
        local_2c = piVar1;
        local_24 = piVar2;
        local_20 = piVar1;
        while (piVar2 = piVar2 + -1, piVar1 <= piVar2) {
          iVar3 = __encoded_null();
          if (*piVar2 != iVar3) {
            if (piVar2 < piVar1) break;
            pcVar4 = (code *)__decode_pointer(*piVar2);
            iVar3 = __encoded_null();
            *piVar2 = iVar3;
            (*pcVar4)();
            piVar5 = (int *)__decode_pointer(DAT_004d6430);
            piVar6 = (int *)__decode_pointer(DAT_004d642c);
            if ((local_20 != piVar5) || (piVar1 = local_2c, local_24 != piVar6)) {
              piVar2 = piVar6;
              piVar1 = piVar5;
              local_2c = piVar5;
              local_24 = piVar6;
              local_20 = piVar5;
            }
          }
        }
      }
      __initterm((undefined4 *)&DAT_00498364);
    }
    __initterm((undefined4 *)&DAT_0049836c);
  }
  FUN_00472ee0();
  if (param_3 == 0) {
    DAT_004b3da0 = 1;
    FUN_0046eba8(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}


