/* void __cdecl FindHandler(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4, _s_FuncInfo * param_5, uchar param_6, int param_7, EHRegistrationNode * param_8) @ 00492d00  839 bytes */

#include "th12.h"

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2008 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  _s_FuncInfo *p_Var1;
  uchar uVar2;
  bool bVar3;
  _ptiddata p_Var4;
  int iVar5;
  _s_TryBlockMapEntry *p_Var6;
  EHRegistrationNode *unaff_EBX;
  _s_FuncInfo *p_Var7;
  int *piVar8;
  int unaff_ESI;
  _s_FuncInfo *p_Var9;
  _s_ESTypeList *unaff_EDI;
  EHRegistrationNode *pEVar10;
  bad_exception in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  if (*(int *)(param_5 + 4) < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (*(int *)(param_5 + 4) <= local_c)) {
    _inconsistency();
  }
  p_Var9 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 != -0x1f928c9d) goto LAB_00493003;
  p_Var7 = (_s_FuncInfo *)0x19930520;
  if (*(int *)(param_1 + 0x10) != 3) goto LAB_00492e70;
  iVar5 = *(int *)(param_1 + 0x14);
  if (((iVar5 != 0x19930520) && (iVar5 != 0x19930521)) && (iVar5 != 0x19930522)) goto LAB_00492e70;
  if (*(int *)(param_1 + 0x1c) != 0) goto LAB_00492e70;
  p_Var4 = __getptd();
  if (p_Var4->_curexception != (void *)0x0) {
    p_Var4 = __getptd();
    param_1 = (EHExceptionRecord *)p_Var4->_curexception;
    p_Var4 = __getptd();
    param_3 = (_CONTEXT *)p_Var4->_curcontext;
    iVar5 = _ValidateRead(param_1,1);
    if (iVar5 == 0) {
      _inconsistency();
    }
    if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
        ((iVar5 = *(int *)(param_1 + 0x14), iVar5 == 0x19930520 ||
         ((iVar5 == 0x19930521 || (iVar5 == 0x19930522)))))) && (*(int *)(param_1 + 0x1c) == 0)) {
      _inconsistency();
    }
    p_Var4 = __getptd();
    if (p_Var4->_curexcspec == (void *)0x0) goto LAB_00492e70;
    p_Var4 = __getptd();
    piVar8 = (int *)p_Var4->_curexcspec;
    p_Var4 = __getptd();
    iVar5 = 0;
    p_Var4->_curexcspec = (void *)0x0;
    uVar2 = IsInExceptionSpec(param_1,unaff_EDI);
    if (uVar2 != '\0') goto LAB_00492e70;
    p_Var7 = (_s_FuncInfo *)0x0;
    if (0 < *piVar8) {
      do {
        bVar3 = type_info_operator_equal
                          (*(type_info **)(p_Var7 + piVar8[1] + 4),
                           (type_info *)&PTR_PTR__scalar_deleting_destructor__004ae4d8);
        if (bVar3) goto LAB_00492e41;
        iVar5 = iVar5 + 1;
        p_Var7 = p_Var7 + 0x10;
      } while (iVar5 < *piVar8);
    }
    do {
      terminate();
LAB_00492e41:
      ___DestructExceptionObject((int *)param_1);
      std_bad_exception::bad_exception((bad_exception *)&stack0xffffffd0,"bad exception");
      __CxxThrowException_8(&stack0xffffffd0,&DAT_004ab554);
LAB_00492e70:
      p_Var9 = (_s_FuncInfo *)param_1;
      if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
         ((p_Var1 = *(_s_FuncInfo **)(param_1 + 0x14), p_Var1 == p_Var7 ||
          ((p_Var1 == (_s_FuncInfo *)0x19930521 || (p_Var1 == (_s_FuncInfo *)0x19930522)))))) {
        if (*(int *)(param_5 + 0xc) != 0) {
          p_Var6 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
          for (; local_14 < local_20; local_14 = local_14 + 1) {
            if ((*(int *)p_Var6 <= local_c) && (local_c <= *(int *)(p_Var6 + 4))) {
              local_10 = *(byte **)(p_Var6 + 0x10);
              for (local_1c = *(int *)(p_Var6 + 0xc); 0 < local_1c; local_1c = local_1c + -1) {
                piVar8 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
                for (local_18 = *piVar8; 0 < local_18; local_18 = local_18 + -1) {
                  piVar8 = piVar8 + 1;
                  p_Var9 = (_s_FuncInfo *)*piVar8;
                  iVar5 = ___TypeMatch(local_10,(byte *)p_Var9,*(uint **)(param_1 + 0x1c));
                  if (iVar5 != 0) {
                    local_5 = '\x01';
                    CatchIt(param_1,(EHRegistrationNode *)param_3,(_CONTEXT *)param_4,param_5,p_Var9
                            ,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,
                            (_s_TryBlockMapEntry *)unaff_EDI,unaff_ESI,unaff_EBX,
                            (uchar)in_stack_ffffffd0);
                    goto LAB_00492f59;
                  }
                }
                local_10 = local_10 + 0x10;
              }
            }
LAB_00492f59:
            p_Var6 = p_Var6 + 0x14;
          }
        }
        if (param_6 != '\0') {
          ___DestructExceptionObject((int *)param_1);
        }
        if ((((local_5 != '\0') || ((*(uint *)param_5 & 0x1fffffff) < 0x19930521)) ||
            (*(int *)(param_5 + 0x1c) == 0)) ||
           (uVar2 = IsInExceptionSpec(param_1,unaff_EDI), uVar2 != '\0')) goto LAB_0049302f;
        __getptd();
        __getptd();
        p_Var4 = __getptd();
        p_Var4->_curexception = param_1;
        p_Var4 = __getptd();
        p_Var4->_curcontext = param_3;
        pEVar10 = param_8;
        if (param_8 == (EHRegistrationNode *)0x0) {
          pEVar10 = param_2;
        }
        _UnwindNestedFrames(pEVar10,param_1);
        ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
        FUN_004925ab(*(void **)(param_5 + 0x1c));
        p_Var9 = param_5;
      }
LAB_00493003:
      if (*(int *)(param_5 + 0xc) == 0) goto LAB_0049302f;
      p_Var7 = param_5;
    } while (param_6 != '\0');
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var9,param_2,param_3,param_4,param_5,local_c,param_7,param_8);
LAB_0049302f:
    p_Var4 = __getptd();
    if (p_Var4->_curexcspec != (void *)0x0) {
      _inconsistency();
    }
  }
  return;
}


