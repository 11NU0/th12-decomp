/* undefined __cdecl FUN_00460800(COLORREF param_1, COLORREF param_2, undefined4 param_3, uint param_4, char * param_5) @ 00460800  225 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0046089b) */

void __cdecl
FUN_00460800(COLORREF param_1,COLORREF param_2,undefined4 param_3,uint param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 extraout_ECX;
  uint uVar5;
  uint uVar6;
  int unaff_ESI;
  ulonglong uVar7;
  uint local_8c;
  char local_88 [132];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_8c;
  uVar6 = 0x11;
  if (*(byte *)(unaff_ESI + 0x49c) != 0) {
    uVar6 = (uint)*(byte *)(unaff_ESI + 0x49c);
  }
  _vsprintf(local_88,param_5,&stack0x00000018);
  pcVar4 = local_88;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = *(int *)(unaff_ESI + 0x3f4);
  uVar5 = *(uint *)(unaff_ESI + 0x480) >> 3 & 1;
  local_8c = (uVar6 - 1) * ((int)pcVar4 - (int)(local_88 + 1)) >> 1;
  uVar7 = FUN_004931e0(local_8c,param_1);
  puVar3 = *(undefined4 **)(iVar2 + 8);
  FUN_004606b0(extraout_ECX,puVar3,(int *)*puVar3,iVar2,(int)uVar7,param_1,param_2,uVar5,param_4);
  *(uint *)(unaff_ESI + 0x47c) = *(uint *)(unaff_ESI + 0x47c) | 1;
  ___security_check_cookie_4(local_4 ^ (uint)&local_8c);
  return;
}


