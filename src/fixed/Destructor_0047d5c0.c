/* undefined __fastcall Destructor(int param_1) @ 0047d5c0  40 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall HeapManager_Destructor(void)
    public: void __thiscall _HeapManager_Destructor(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __fastcall Destructor(int param_1)

{
  if (*(int *)((int)param_1 + 4) != 0) {
    while (*(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 8), *(int *)((int)param_1 + 8) != 0) {
      *(undefined4 *)((int)param_1 + 8) = **(undefined4 **)((int)param_1 + 0xc);
      (**(code **)((int)param_1 + 4))(*(undefined4 *)((int)param_1 + 0xc));
    }
  }
  return;
}


