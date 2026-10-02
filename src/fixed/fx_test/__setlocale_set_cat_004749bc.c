/* undefined __thiscall __setlocale_set_cat(void * this, int param_1) @ 004749bc  767 bytes */

#include "th12.h"

/* Library Function - Single Match
    __setlocale_set_cat
   
   Library: Visual Studio 2008 Release */

void __thiscall __setlocale_set_cat(void *this,int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  _ptiddata p_Var3;
  int iVar4;
  int iVar5;
  errno_t eVar6;
  wchar_t *pwVar7;
  BOOL BVar8;
  uint uVar9;
  LONG LVar10;
  int unaff_ESI;
  wchar_t *pwVar11;
  undefined local_1c8 [8];
  int local_1c0;
  undefined4 local_1b8;
  ushort local_1b4 [4];
  uint local_1ac;
  undefined *local_1a8;
  void *local_1a0;
  undefined4 local_19c;
  uint *local_198;
  undefined4 *local_194;
  size_t local_190;
  WORD local_18c [128];
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  p_Var3 = __getptd();
  pwVar11 = (p_Var3->_setloc_data)._cacheout + 9;
  iVar4 = __expandlocale((char *)this,local_8c,0x83,local_1b4,&local_19c);
  if (iVar4 != 0) {
    iVar4 = param_1 * 0x10 + unaff_ESI;
    iVar5 = _strcmp(local_8c,*(char **)(iVar4 + 0x48));
    if (iVar5 != 0) {
      local_190 = _strlen(local_8c);
      local_190 = local_190 + 5;
      local_194 = (undefined4 *)__malloc_crt(local_190);
      if (local_194 != (undefined4 *)0x0) {
        local_1a8 = *(undefined **)(iVar4 + 0x48);
        local_198 = (uint *)(unaff_ESI + 0xc + param_1 * 4);
        local_1ac = *local_198;
        local_1a0 = (void *)((param_1 + 6) * 6 + unaff_ESI);
        _memcpy(local_1c8,local_1a0,6);
        local_1b8 = *(undefined4 *)(unaff_ESI + 4);
        eVar6 = _strcpy_s((char *)(local_194 + 1),local_190 - 4,local_8c);
        if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(iVar4 + 0x48) = local_194 + 1;
        *local_198 = (uint)local_1b4[0];
        _memcpy(local_1a0,local_1b4,6);
        if (param_1 == 2) {
          local_190 = 0;
          *(undefined4 *)(unaff_ESI + 4) = local_19c;
          pwVar7 = pwVar11;
          iVar5 = *(int *)((p_Var3->_setloc_data)._cacheout + 0x19);
          local_1a0 = *(void **)((p_Var3->_setloc_data)._cacheout + 0x1b);
          do {
            if (*(int *)(unaff_ESI + 4) == *(int *)pwVar7) {
              if (local_190 != 0) {
                pwVar7 = pwVar11 + local_190 * 4;
                *(int *)pwVar11 = *(int *)pwVar7;
                *(int *)((p_Var3->_setloc_data)._cacheout + 0xb) = *(int *)(pwVar7 + 2);
                *(int *)pwVar7 = iVar5;
                *(void **)(pwVar7 + 2) = local_1a0;
              }
              break;
            }
            local_1c0 = *(int *)pwVar7;
            local_190 = local_190 + 1;
            *(int *)pwVar7 = iVar5;
            pvVar2 = *(void **)(pwVar7 + 2);
            *(void **)(pwVar7 + 2) = local_1a0;
            pwVar7 = pwVar7 + 4;
            iVar5 = local_1c0;
            local_1a0 = pvVar2;
          } while ((int)local_190 < 5);
          if (local_190 == 5) {
            BVar8 = ___crtGetStringTypeA
                              ((_locale_t)0x0,1,
                               "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                               ,0x7f,local_18c,*(int *)(unaff_ESI + 4),*(BOOL *)(unaff_ESI + 0x14));
            if (BVar8 == 0) {
              *(undefined4 *)((p_Var3->_setloc_data)._cacheout + 0xb) = 0;
            }
            else {
              uVar9 = 0;
              do {
                local_18c[uVar9] = local_18c[uVar9] & 0x1ff;
                uVar9 = uVar9 + 1;
              } while (uVar9 < 0x7f);
              iVar5 = _memcmp(local_18c,PTR_DAT_004ad9d0,0xfe);
              *(uint *)((p_Var3->_setloc_data)._cacheout + 0xb) = (uint)(iVar5 == 0);
            }
            *(int *)pwVar11 = *(int *)(unaff_ESI + 4);
          }
          *(undefined4 *)(unaff_ESI + 0xa8) =
               *(undefined4 *)((p_Var3->_setloc_data)._cacheout + 0xb);
        }
        if (param_1 == 1) {
          *(undefined4 *)(unaff_ESI + 8) = local_19c;
        }
        iVar5 = (**(code **)(&DAT_0049d438 + param_1 * 0xc))();
        if (iVar5 == 0) {
          if (local_1a8 != &DAT_004ad9d8) {
            puVar1 = (undefined4 *)((param_1 + 5) * 0x10 + unaff_ESI);
            LVar10 = InterlockedDecrement((LONG *)*puVar1);
            if (LVar10 == 0) {
              _free((void *)*puVar1);
              _free(*(void **)(iVar4 + 0x54));
              *(undefined4 *)(iVar4 + 0x4c) = 0;
            }
          }
          *local_194 = 1;
          *(undefined4 **)((param_1 + 5) * 0x10 + unaff_ESI) = local_194;
        }
        else {
          *(undefined **)(iVar4 + 0x48) = local_1a8;
          _free(local_194);
          *local_198 = local_1ac;
          *(undefined4 *)(unaff_ESI + 4) = local_1b8;
        }
      }
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


