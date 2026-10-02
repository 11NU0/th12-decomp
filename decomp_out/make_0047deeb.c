/* DNameStatusNode * __cdecl make(DNameStatus param_1) @ 0047deeb  134 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: static class DNameStatusNode * __cdecl DNameStatusNode::make(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DNameStatusNode * __cdecl DNameStatusNode::make(DNameStatus param_1)

{
  if ((_DAT_004b4364 & 1) == 0) {
    _DAT_004b4364 = _DAT_004b4364 | 1;
    _DAT_004b4334 = &PTR_LAB_0049ddd4;
    _DAT_004b4338 = 0;
    _DAT_004b433c = 0;
    _DAT_004b4340 = &PTR_LAB_0049ddd4;
    _DAT_004b4344 = 1;
    _DAT_004b4348 = 4;
    _DAT_004b434c = &PTR_LAB_0049ddd4;
    _DAT_004b4350 = 2;
    _DAT_004b4354 = 0;
    _DAT_004b4358 = &PTR_LAB_0049ddd4;
    _DAT_004b435c = 3;
    _DAT_004b4360 = 0;
  }
  if (param_1 < 4) {
    return (DNameStatusNode *)(&DAT_004b4334 + param_1 * 0xc);
  }
  return (DNameStatusNode *)&DAT_004b4358;
}


