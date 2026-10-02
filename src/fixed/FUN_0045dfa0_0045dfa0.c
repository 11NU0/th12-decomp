/* undefined4 * __stdcall FUN_0045dfa0(undefined4 * param_1) @ 0045dfa0  2673 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef struct local_4__u { undefined4 _; undefined1 _0_1_; undefined1 _1_3_; } local_4__u;
undefined4 * __stdcall FUN_0045dfa0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int unaff_EBP;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = ((void *)0x00497477);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(param_1 + 0x2f,0x4b4,0x1000,FUN_004027e0,FUN_004026e0);
  local_4 = 0;
  FUN_004027e0(param_1 + 0x12d460);
  ((local_4__u *)&local_4)->_0_1_ = 1;
  _eh_vector_constructor_iterator_(param_1 + 0x2215b2,0x4b4,0x20,FUN_004027e0,FUN_004026e0);
  local_4 = CONCAT31(((local_4__u *)&local_4)->_1_3_,2);
  _memset(param_1,0,0x88ed54);
  _DAT_004d47dc = 0x3f800000;
  _DAT_004d47c4 = 0x3f800000;
  _DAT_004d47ac = 0x3f800000;
  iVar2 = 0x1000;
  _DAT_004d4794 = 0x3f800000;
  _DAT_004d4798 = 0;
  _DAT_004d479c = 0;
  _DAT_004d47b4 = 0;
  _DAT_004d47c8 = 0;
  _DAT_004d47fc = 0;
  _DAT_004d4800 = 0;
  _DAT_004d481c = 0;
  _DAT_004d4834 = 0;
  _DAT_004d47b0 = 0x3f800000;
  _DAT_004d47cc = 0x3f800000;
  _DAT_004d47e0 = 0x3f800000;
  _DAT_004d47e4 = 0x3f800000;
  _DAT_004d4848 = 0x3f800000;
  _DAT_004d482c = 0x3f800000;
  _DAT_004d4810 = 0x3f800000;
  _DAT_004d47f4 = 0x3f800000;
  _DAT_004d4818 = 0x3f800000;
  _DAT_004d4838 = 0x3f800000;
  _DAT_004d4850 = 0x3f800000;
  _DAT_004d4854 = 0x3f800000;
  param_1[0x12d593] = 0;
  param_1[0x12d58f] = 0;
  *(undefined *)((int)param_1 + 0x12d590) = 0;
  *(undefined *)((int)param_1 + 0x4b5641) = 0;
  param_1[0x12d58e] = 1;
  *(undefined *)((int)param_1 + 0x4b5642) = 0;
  *(undefined *)((int)param_1 + 0x12d591) = 0xff;
  *(undefined *)((int)param_1 + 0x4b5643) = 0;
  *param_1 = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  do {
    FUN_00402520();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = ((void *)0x00460c30);
  puVar1[8] = param_1;
  FUN_00462380();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460c40);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462380();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460c50);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460c60);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460c70);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460c80);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460c90);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460d10);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460d20);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460d30);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460d40);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460d50);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460d60);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460d70);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460d80);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460d90);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460da0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460db0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460dc0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460dd0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460de0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460df0);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460e40);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460e20);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460e10);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460e00);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460e30);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = FUN_00460e70;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460f00);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x00460f50);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = param_1;
  FUN_00462420();
  (**(code **)(*DAT_004ce8f0 + 0x170))(DAT_004ce8f0,0);
  *unaff_FS_OFFSET = unaff_EBP;
  return param_1;
}


