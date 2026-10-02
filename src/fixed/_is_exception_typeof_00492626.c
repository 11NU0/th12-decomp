/* int __cdecl _is_exception_typeof(type_info * param_1, _EXCEPTION_POINTERS * param_2) @ 00492626  134 bytes */
#include "th12.h"

/* Library Function - Single Match
    int __cdecl _is_exception_typeof(class type_info const &,struct _EXCEPTION_POINTERS *)
   
   Library: Visual Studio 2008 Release */

int __cdecl _is_exception_typeof(type_info *param_1,_EXCEPTION_POINTERS *param_2)

{
  PEXCEPTION_RECORD pEVar1;
  ULONG_PTR UVar2;
  char *_Str2;
  char *_Str1;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == (_EXCEPTION_POINTERS *)0x0) {
    _inconsistency();
  }
  pEVar1 = param_2->ExceptionRecord;
  if (pEVar1 == (PEXCEPTION_RECORD)0x0) {
    _inconsistency();
  }
  if (((pEVar1->ExceptionCode != 0xe06d7363) || (pEVar1->NumberParameters != 3)) ||
     ((UVar2 = pEVar1->ExceptionInformation[0], UVar2 != 0x19930520 &&
      ((UVar2 != 0x19930521 && (UVar2 != 0x19930522)))))) {
    _inconsistency();
  }
  piVar4 = *(int **)(pEVar1->ExceptionInformation[2] + 0xc);
  iVar5 = *piVar4;
  while( true ) {
    piVar4 = piVar4 + 1;
    if (iVar5 < 1) {
      return 0;
    }
    _Str2 = (char *)(*(int *)(*piVar4 + 4) + 8);
    _Str1 = (char *)FUN_0046ce35((int)param_1);
    iVar3 = _strcmp(_Str1,_Str2);
    if (iVar3 == 0) break;
    iVar5 = iVar5 + -1;
  }
  return 1;
}


