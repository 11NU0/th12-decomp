/* int __fastcall FUN_0042f000(undefined4 * param_1, int * param_2) @ 0042f000  169 bytes */

#include "th12.h"

int __fastcall FUN_0042f000(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int extraout_ECX;
  
  if (((param_1[0x164] & 0x180) == 0x80) && (param_1[0x200] == 0)) {
    DAT_004cee40 = 3;
  }
  FUN_00453fa0(param_1,param_2);
  FUN_004319f0();
  FUN_00462ec0();
  iVar1 = FUN_004603d0(extraout_ECX);
  if (iVar1 != 0) {
    return 4;
  }
  if (((DAT_004cf42c == 0) || (DAT_004cf42c = DAT_004cf42c + -1, DAT_004cf42c < 1)) &&
     ((DAT_004d48c4 & 0x800000) != 0)) {
    DAT_004cf428 = (DAT_004cf428 | 2) ^ ((DAT_004cf428 & 0xfffffffc) + 4 ^ (DAT_004cf428 | 2)) & 0xc
    ;
  }
  if (param_1[0x203] == 0) {
    iVar1 = FUN_004311e0();
    return iVar1;
  }
  return (-(uint)(param_1[0x203] != 2) & 0xfffffffd) + 4;
}


