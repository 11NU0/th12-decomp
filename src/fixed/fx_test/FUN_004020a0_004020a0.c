/* undefined __cdecl FUN_004020a0(char * param_1) @ 004020a0  254 bytes */

#include "th12.h"

void __cdecl FUN_004020a0(char *param_1)

{
  byte *pbVar1;
  int iVar2;
  float unaff_ESI;
  undefined4 *unaff_EDI;
  byte local_248 [256];
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  byte local_110 [260];
  uint local_c;
  
  local_c = DAT_004ad138 ^ (uint)local_248;
  _vsprintf((char *)local_110,param_1,&stack0x00000008);
  iVar2 = 0;
  do {
    pbVar1 = local_110 + iVar2;
    local_248[iVar2] = *pbVar1;
    iVar2 = iVar2 + 1;
  } while (*pbVar1 != 0);
  local_140 = unaff_EDI[2];
  local_138 = *(undefined4 *)((int)unaff_ESI + 0x18f84);
  local_148 = *unaff_EDI;
  local_144 = unaff_EDI[1];
  local_134 = *(undefined4 *)((int)unaff_ESI + 0x18f88);
  local_128 = *(undefined4 *)((int)unaff_ESI + 0x18f98);
  local_13c = *(undefined4 *)((int)unaff_ESI + 0x18f80);
  local_12c = *(undefined4 *)((int)unaff_ESI + 0x18f8c);
  local_11c = *(undefined4 *)((int)unaff_ESI + 0x18fa0);
  local_124 = *(undefined4 *)((int)unaff_ESI + 0x18f94);
  local_120 = *(undefined4 *)((int)unaff_ESI + 0x18f9c);
  local_118 = *(undefined4 *)((int)unaff_ESI + 0x18fa4);
  local_114 = *(undefined4 *)((int)unaff_ESI + 0x18fa8);
  FUN_004018f0(unaff_ESI,local_248);
  ___security_check_cookie_4(local_c ^ (uint)local_248);
  return;
}


