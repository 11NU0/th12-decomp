/* undefined __stdcall _GetLcidFromLanguage(void) @ 00485fc5  60 bytes */
#include "th12.h"

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2008 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar1 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    iVar2 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar2 = 2;
  }
  unaff_ESI[3] = iVar2;
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((*(byte *)(unaff_ESI + 2) & 4) == 0) {
    unaff_ESI[2] = 0;
  }
  return;
}


