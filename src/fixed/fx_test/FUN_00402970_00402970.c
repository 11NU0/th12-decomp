/* uint * __stdcall FUN_00402970(uint * param_1) @ 00402970  186 bytes */

#include "th12.h"

uint * __stdcall FUN_00402970(uint *param_1)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004971ab;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  param_1[0xd] = param_1[0xd] & 0xfffffffe;
  param_1[0x12] = param_1[0x12] & 0xfffffffe;
  param_1[0x24] = param_1[0x24] & 0xfffffffe;
  param_1[0x37] = param_1[0x37] & 0xfffffffe;
  param_1[0x4a] = param_1[0x4a] & 0xfffffffe;
  param_1[0x6d] = param_1[0x6d] & 0xfffffffe;
  _eh_vector_constructor_iterator_(param_1 + 0x73,0x4b4,8,FUN_004027e0,FUN_004026e0);
  local_4 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x9e5,0x4b4,3,FUN_004027e0,FUN_004026e0);
  param_1[0xd74] = param_1[0xd74] & 0xfffffffe;
  _memset(param_1,0,0x3724);
  *param_1 = *param_1 | 2;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


