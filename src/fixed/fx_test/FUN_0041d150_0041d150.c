/* uint * __stdcall FUN_0041d150(uint * param_1) @ 0041d150  242 bytes */

#include "th12.h"

typedef struct local_4__u { undefined4 _; undefined1 _0_1_; undefined1 _1_3_; } local_4__u;
uint * __stdcall FUN_0041d150(uint *param_1)

{
  local_4__u *local_4__u_alias;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049716f;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(param_1 + 4,0x4b4,8,FUN_004027e0,FUN_004026e0);
  local_4 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x96c,0x4b4,8,FUN_004027e0,FUN_004026e0);
  local_4__u_alias = (local_4__u *)&local_4;
  local_4__u_alias->_0_1_ = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x12d4,0x4b4,2,FUN_004027e0,FUN_004026e0);
  local_4__u_alias = (local_4__u *)&local_4;
  local_4 = CONCAT31(local_4__u_alias->_1_3_,2);
  _eh_vector_constructor_iterator_(param_1 + 0x152e,0x4b4,4,FUN_004027e0,FUN_004026e0);
  FUN_004027e0(param_1 + 0x19e3);
  param_1[0x1b34] = param_1[0x1b34] & 0xfffffffe;
  param_1[0x1b4b] = param_1[0x1b4b] & 0xfffffffe;
  _memset(param_1,0,0x6d50);
  *param_1 = *param_1 | 2;
  DAT_004b43e4 = param_1;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


