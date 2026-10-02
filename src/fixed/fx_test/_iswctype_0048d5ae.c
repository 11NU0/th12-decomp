/* int __cdecl _iswctype(wint_t _C, wctype_t _Type) @ 0048d5ae  118 bytes */

#include "th12.h"

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  WORD local_8 [2];
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    return (uint)(*(ushort *)(PTR_DAT_004adea4 + (uint)_C * 2) & _Type);
  }
  if (DAT_004b40dc == 0) {
    ___crtGetStringTypeW((localeinfo_struct *)&PTR_DAT_004adac0,1,(LPCWSTR)&_C,1,local_8);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}


