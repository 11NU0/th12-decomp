/* void __cdecl __NMSG_WRITE(int param_1) @ 00472f8d  410 bytes */
#include "th12.h"

/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2008 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  char *_Dst;
  HANDLE hFile;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == (&DAT_004ad3f8)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar1 = local_8;
  if (local_8 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 != 1) && ((iVar2 = __set_error_mode(3), iVar2 != 0 || (DAT_004ad134 != 1)))) {
      if (param_1 == 0xfc) {
        return;
      }
      eVar3 = _strcpy_s(&DAT_004b3da8,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_004b3ec5 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_004b3dc1,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_004b3dc1,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_004b3dc1);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_004b3dc1);
        _Dst = (char *)((int)&DAT_004b3d84 + sVar5 + 2);
        eVar3 = _strncpy_s(_Dst,(int)&DAT_004b40bc - (int)_Dst,"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_004b3da8,0x314,"\n\n");
      if (eVar3 == 0) {
        eVar3 = _strcat_s(&DAT_004b3da8,0x314,
                          (&PTR_s_R6002___floating_point_support_n_004ad3fc)[local_8 * 2]);
        if (eVar3 == 0) {
          ___crtMessageBoxA(&DAT_004b3da8,"Microsoft Visual C++ Runtime Library",0x12010);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    hFile = GetStdHandle(0xfffffff4);
    if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_c;
      sVar5 = _strlen((&PTR_s_R6002___floating_point_support_n_004ad3fc)[uVar1 * 2]);
      WriteFile(hFile,(&PTR_s_R6002___floating_point_support_n_004ad3fc)[uVar1 * 2],sVar5,
                lpNumberOfBytesWritten,lpOverlapped);
    }
  }
  return;
}


