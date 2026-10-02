/* undefined __stdcall _GetLcidFromLangCountry(void) @ 00485f5e  103 bytes */
#include "th12.h"

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2008 Release */

void __stdcall _GetLcidFromLangCountry(void)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar2 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar2 == 3);
  sVar2 = _strlen((char *)unaff_ESI[1]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (uint)(sVar2 == 3);
  if (unaff_ESI[4] == 0) {
    iVar3 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar3 = 2;
  }
  unaff_ESI[3] = iVar3;
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  uVar1 = unaff_ESI[2];
  if ((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) || ((uVar1 & 7) == 0)) {
    unaff_ESI[2] = 0;
  }
  return;
}


