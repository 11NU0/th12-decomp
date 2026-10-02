/* undefined __fastcall Destructor(int param_1) @ 0047d5c0  40 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall HeapManager::Destructor(void)
    public: void __thiscall _HeapManager::Destructor(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __fastcall Destructor(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    while (*(int *)(param_1 + 0xc) = *(int *)(param_1 + 8), *(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = **(undefined4 **)(param_1 + 0xc);
      (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return;
}


