/* undefined __stdcall FUN_0045ee00(void) @ 0045ee00  1813 bytes */
#include "th12.h"

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0045ee00(void)

{
  ushort uVar1;
  undefined4 *in_EAX;
  byte *pbVar2;
  uint uVar3;
  undefined4 unaff_EBX;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int *unaff_ESI;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_44 [5];
  uint uStack_30;
  uint uStack_2c;
  
  local_44[0] = 0;
  (**(code **)(*(int *)*in_EAX + 0x48))((int *)*in_EAX);
  (**(code **)(*unaff_ESI + 0x30))(unaff_ESI,&uStack_30);
  (**(code **)(local_44[0] + 0x34))(local_44,&stack0xffffffb4,0);
  switch(unaff_EBX) {
  case 0:
  case 0x15:
    uVar7 = 0;
    if (uStack_2c != 0) {
      do {
        uVar8 = 0;
        if (uStack_30 != 0) {
          pbVar2 = &stack0xffffffba;
          puVar5 = (ushort *)local_44;
          do {
            uVar4 = 0;
            if (pbVar2[5] == 0) {
              uVar6 = 0;
              uVar3 = 0;
              uVar9 = 0;
              if ((uVar8 != 0) && (pbVar2[1] != 0)) {
                uVar9 = (uint)pbVar2[-1];
                uVar4 = (uint)*pbVar2;
                uVar3 = (uint)pbVar2[-2];
                uVar6 = 1;
              }
              if ((uVar8 < uStack_30 - 1) && (pbVar2[9] != 0)) {
                uVar9 = uVar9 + pbVar2[7];
                uVar4 = uVar4 + pbVar2[8];
                uVar3 = uVar3 + pbVar2[6];
                uVar6 = uVar6 + 1;
              }
              if ((uVar7 != 0) && (*(byte *)((int)puVar5 + 3) != 0)) {
                uVar4 = uVar4 + *(byte *)(puVar5 + 1);
                uVar9 = uVar9 + *(byte *)((int)puVar5 + 1);
                uVar3 = uVar3 + *(byte *)puVar5;
                uVar6 = uVar6 + 1;
              }
              if ((uVar7 < uStack_2c - 1) && (*(byte *)((int)puVar5 + 3) != 0)) {
                uVar4 = uVar4 + *(byte *)(puVar5 + 1);
                uVar9 = uVar9 + *(byte *)((int)puVar5 + 1);
                uVar3 = uVar3 + *(byte *)puVar5;
                uVar6 = uVar6 + 1;
              }
              if (1 < uVar6) {
                uVar4 = uVar4 / uVar6;
                uVar9 = uVar9 / uVar6;
                uVar3 = uVar3 / uVar6;
              }
              pbVar2[4] = (byte)uVar4;
              pbVar2[3] = (byte)uVar9;
              *(byte *)puVar5 = (byte)uVar3;
            }
            uVar8 = uVar8 + 1;
            puVar5 = puVar5 + 2;
            pbVar2 = pbVar2 + 4;
          } while (uVar8 < uStack_30);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uStack_2c);
    }
    break;
  case 0x19:
    uVar7 = 0;
    if (uStack_2c != 0) {
      do {
        uVar8 = 0;
        puVar5 = (ushort *)local_44;
        if (uStack_30 != 0) {
          do {
            uVar4 = 0;
            if ((*puVar5 & 0x8000) == 0) {
              uVar3 = 0;
              uVar6 = 0;
              uVar9 = 0;
              if (uVar8 != 0) {
                uVar1 = puVar5[-1];
                if ((uVar1 & 0x8000) != 0) {
                  uVar3 = uVar1 >> 10 & 0x1f;
                  uVar4 = uVar1 >> 5 & 0x1f;
                  uVar9 = uVar1 & 0x1f;
                  uVar6 = 1;
                }
              }
              if (uVar8 < uStack_30 - 1) {
                uVar1 = puVar5[1];
                if ((uVar1 & 0x8000) != 0) {
                  uVar9 = uVar9 + (uVar1 & 0x1f);
                  uVar3 = uVar3 + (uVar1 >> 10 & 0x1f);
                  uVar4 = uVar4 + (uVar1 >> 5 & 0x1f);
                  uVar6 = uVar6 + 1;
                }
              }
              if (uVar7 != 0) {
                uVar1 = *puVar5;
                if ((uVar1 & 0x8000) != 0) {
                  uVar3 = uVar3 + (uVar1 >> 10 & 0x1f);
                  uVar9 = uVar9 + (uVar1 & 0x1f);
                  uVar4 = uVar4 + (uVar1 >> 5 & 0x1f);
                  uVar6 = uVar6 + 1;
                }
              }
              if (uVar7 < uStack_2c - 1) {
                uVar1 = *puVar5;
                if ((uVar1 & 0x8000) != 0) {
                  uVar3 = uVar3 + (uVar1 >> 10 & 0x1f);
                  uVar9 = uVar9 + (uVar1 & 0x1f);
                  uVar4 = uVar4 + (uVar1 >> 5 & 0x1f);
                  uVar6 = uVar6 + 1;
                }
              }
              if (1 < uVar6) {
                uVar3 = uVar3 / uVar6;
                uVar4 = uVar4 / uVar6;
                uVar9 = uVar9 / uVar6;
              }
              *puVar5 = ((ushort)((byte)uVar3 & 0x1f) << 5 | (ushort)uVar4 & 0x1f) << 5 |
                        *puVar5 & 0x8000 | (ushort)((byte)uVar9 & 0x1f);
            }
            uVar8 = uVar8 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar8 < uStack_30);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uStack_2c);
    }
    break;
  case 0x1a:
    uVar7 = 0;
    if (uStack_2c != 0) {
      do {
        uVar8 = 0;
        puVar5 = (ushort *)local_44;
        if (uStack_30 != 0) {
          do {
            uVar4 = 0;
            if ((*puVar5 & 0xf000) == 0) {
              uVar3 = 0;
              uVar6 = 0;
              uVar9 = 0;
              if (uVar8 != 0) {
                uVar1 = puVar5[-1];
                if ((uVar1 & 0xf000) != 0) {
                  uVar3 = uVar1 >> 8 & 0xf;
                  uVar4 = uVar1 >> 4 & 0xf;
                  uVar9 = uVar1 & 0xf;
                  uVar6 = 1;
                }
              }
              if (uVar8 < uStack_30 - 1) {
                uVar1 = puVar5[1];
                if ((uVar1 & 0xf000) != 0) {
                  uVar9 = uVar9 + (uVar1 & 0xf);
                  uVar3 = uVar3 + (uVar1 >> 8 & 0xf);
                  uVar4 = uVar4 + (uVar1 >> 4 & 0xf);
                  uVar6 = uVar6 + 1;
                }
              }
              if (uVar7 != 0) {
                uVar1 = *puVar5;
                if ((uVar1 & 0xf000) != 0) {
                  uVar3 = uVar3 + (uVar1 >> 8 & 0xf);
                  uVar9 = uVar9 + (uVar1 & 0xf);
                  uVar4 = uVar4 + (uVar1 >> 4 & 0xf);
                  uVar6 = uVar6 + 1;
                }
              }
              if (uVar7 < uStack_2c - 1) {
                uVar1 = *puVar5;
                if ((uVar1 & 0xf000) != 0) {
                  uVar3 = uVar3 + (uVar1 >> 8 & 0xf);
                  uVar9 = uVar9 + (uVar1 & 0xf);
                  uVar4 = uVar4 + (uVar1 >> 4 & 0xf);
                  uVar6 = uVar6 + 1;
                }
              }
              if (1 < uVar6) {
                uVar3 = uVar3 / uVar6;
                uVar4 = uVar4 / uVar6;
                uVar9 = uVar9 / uVar6;
              }
              *puVar5 = ((ushort)((byte)uVar3 & 0xf) << 4 | (ushort)uVar4 & 0xf) << 4 |
                        *puVar5 & 0xf000 | (ushort)((byte)uVar9 & 0xf);
            }
            uVar8 = uVar8 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar8 < uStack_30);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uStack_2c);
    }
    break;
  case 0x1d:
    uVar7 = 0;
    if (uStack_2c != 0) {
      do {
        uVar8 = 0;
        puVar5 = (ushort *)local_44;
        if (uStack_30 != 0) {
          do {
            uVar4 = 0;
            if (*(byte *)((int)puVar5 + 1) == 0) {
              uVar3 = 0;
              uVar6 = 0;
              uVar9 = 0;
              if ((uVar8 != 0) && (*(byte *)((int)puVar5 + -1) != 0)) {
                uVar1 = puVar5[-1];
                uVar3 = uVar1 >> 5 & 7;
                uVar4 = uVar1 >> 2 & 7;
                uVar9 = uVar1 & 3;
                uVar6 = 1;
              }
              if ((uVar8 < uStack_30 - 1) && (*(byte *)((int)puVar5 + 3) != 0)) {
                uVar1 = puVar5[1];
                uVar9 = uVar9 + (uVar1 & 3);
                uVar3 = uVar3 + (uVar1 >> 5 & 7);
                uVar4 = uVar4 + (uVar1 >> 2 & 7);
                uVar6 = uVar6 + 1;
              }
              if ((uVar7 != 0) && (*(byte *)((int)puVar5 + 1) != 0)) {
                uVar1 = *puVar5;
                uVar3 = uVar3 + (uVar1 >> 5 & 7);
                uVar9 = uVar9 + (uVar1 & 3);
                uVar4 = uVar4 + (uVar1 >> 2 & 7);
                uVar6 = uVar6 + 1;
              }
              if ((uVar7 < uStack_2c - 1) && (*(byte *)((int)puVar5 + 1) != 0)) {
                uVar1 = *puVar5;
                uVar3 = uVar3 + (uVar1 >> 5 & 7);
                uVar9 = uVar9 + (uVar1 & 3);
                uVar4 = uVar4 + (uVar1 >> 2 & 7);
                uVar6 = uVar6 + 1;
              }
              if (1 < uVar6) {
                uVar3 = uVar3 / uVar6;
                uVar4 = uVar4 / uVar6;
                uVar9 = uVar9 / uVar6;
              }
              *puVar5 = ((ushort)((byte)uVar3 & 7) << 3 | (ushort)uVar4 & 7) << 2 | *puVar5 & 0xff00
                        | (ushort)((byte)uVar9 & 3);
            }
            uVar8 = uVar8 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar8 < uStack_30);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uStack_2c);
    }
  }
  (**(code **)(*unaff_ESI + 0x38))(unaff_ESI);
  (**(code **)(iRam00000000 + 8))(0);
  return;
}


