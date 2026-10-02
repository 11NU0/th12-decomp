/* int __cdecl __setenvp(void) @ 0047ac02  219 bytes */
#include "th12.h"

/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2008 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_004d6434 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_004b38d0;
  if (DAT_004b38d0 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = (undefined4 *)__calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_004b38d0;
    DAT_004b3d80 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_004b38d0);
          DAT_004b38d0 = (char *)0x0;
          *puVar1 = 0;
          DAT_004d6428 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = (char *)__calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_004b3d80);
            DAT_004b3d80 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}


