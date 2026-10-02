/* void __cdecl __freeptd(_ptiddata _Ptd) @ 004755b0  110 bytes */
#include "th12.h"

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2008 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_004adac8 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_004adacc), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_004adac8;
      pcVar2 = (code *)TlsGetValue(DAT_004adacc);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_004adac8;
    pcVar2 = (code *)__decode_pointer(DAT_004b4108);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_004adacc != 0xffffffff) {
    TlsSetValue(DAT_004adacc,(LPVOID)0x0);
  }
  return;
}


