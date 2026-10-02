/* undefined4 __stdcall FUN_00424240(undefined4 param_1, undefined4 param_2, int param_3) @ 00424240  1997 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00424240(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *_Str;
  int iVar7;
  void *pvVar8;
  float *pfVar9;
  char *pcVar10;
  float fVar11;
  float *pfVar12;
  byte *pbVar13;
  int iVar14;
  float *pfVar15;
  bool bVar16;
  double dVar17;
  int local_28;
  size_t local_24;
  char *local_20;
  int local_1c;
  char *local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  int local_8;
  float fStack_4;
  
  local_28 = -1;
  local_1c = 0;
  pbVar4 = FUN_00463c10(&local_24,1);
  if (pbVar4 == (byte *)0x0) {
    return 0xffffffff;
  }
  local_10 = pbVar4;
  pcVar5 = (char *)_malloc(0x1000);
  local_20 = pcVar5;
  pbVar6 = (byte *)_malloc(0x1000);
  local_14 = pbVar6;
  _Str = (byte *)_malloc(0x1000);
  if (0 < (int)local_24) {
    local_8 = (int)pcVar5 - (int)pbVar6;
    local_c = (int)pbVar6 - (int)pcVar5;
    do {
      iVar14 = local_8;
      iVar7 = local_c;
      local_18 = FUN_00424a20(local_20);
      pbVar4 = pbVar6;
      do {
        bVar1 = pbVar4[iVar14];
        *pbVar4 = bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      pcVar5 = _strchr((char *)pbVar6,0x3a);
      if (pcVar5 == (char *)0x0) {
        FUN_00424b50();
        pcVar5 = local_20;
      }
      else {
        pcVar10 = pcVar5 + 1;
        iVar14 = (int)_Str - (int)pcVar10;
        do {
          cVar2 = *pcVar10;
          pcVar10[iVar14] = cVar2;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        *pcVar5 = '\0';
        FUN_00424b50();
        FUN_00424b50();
        pcVar5 = local_20;
      }
      do {
        cVar2 = *pcVar5;
        pcVar5[iVar7] = cVar2;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      pcVar5 = _strchr((char *)pbVar6,0x3a);
      if (pcVar5 != (char *)0x0) {
        pcVar10 = pcVar5 + 1;
        iVar7 = (int)_Str - (int)pcVar10;
        do {
          cVar2 = *pcVar10;
          pcVar10[iVar7] = cVar2;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        *pcVar5 = '\0';
        FUN_00424b50();
      }
      FUN_00424b50();
      pcVar5 = "Version";
      pbVar4 = pbVar6;
      do {
        bVar1 = *pbVar4;
        bVar16 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_004243a8:
          iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_004243b1;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar16 = bVar1 < ((byte *)pcVar5)[1];
        if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_004243a8;
        pbVar4 = pbVar4 + 2;
        pcVar5 = (char *)((byte *)pcVar5 + 2);
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_004243b1:
      if (iVar7 == 0) {
        pbVar13 = &DAT_004a015c;
        pbVar4 = _Str;
        do {
          bVar1 = *pbVar4;
          bVar16 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_004243e0:
            iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_004243e4;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar16 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_004243e0;
          pbVar4 = pbVar4 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_004243e4:
        if (iVar7 != 0) {
          FUN_004236f0();
          pcVar5 = local_20;
          pbVar4 = local_10;
          break;
        }
      }
      else {
        pcVar5 = "Stage";
        pbVar4 = pbVar6;
        do {
          bVar1 = *pbVar4;
          bVar16 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_00424450:
            iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00424454;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar16 = bVar1 < ((byte *)pcVar5)[1];
          if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00424450;
          pbVar4 = pbVar4 + 2;
          pcVar5 = (char *)((byte *)pcVar5 + 2);
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00424454:
        if (iVar7 == 0) {
          local_28 = FUN_0046d143((char *)_Str);
          local_1c = 0;
          if ((local_28 < 1) || (7 < local_28)) {
            local_28 = -1;
          }
        }
        else {
          pcVar5 = "StageEnd";
          pbVar4 = pbVar6;
          do {
            bVar1 = *pbVar4;
            bVar16 = bVar1 < (byte)*pcVar5;
            if (bVar1 != *pcVar5) {
LAB_004244b0:
              iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_004244b4;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar16 = bVar1 < ((byte *)pcVar5)[1];
            if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_004244b0;
            pbVar4 = pbVar4 + 2;
            pcVar5 = (char *)((byte *)pcVar5 + 2);
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_004244b4:
          if (iVar7 == 0) {
            local_28 = -1;
          }
          else {
            pbVar4 = &DAT_004a0174;
            do {
              bVar1 = *pbVar6;
              bVar16 = bVar1 < *pbVar4;
              if (bVar1 != *pbVar4) {
LAB_004244e8:
                iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_004244ec;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar16 = bVar1 < pbVar4[1];
              if (bVar1 != pbVar4[1]) goto LAB_004244e8;
              pbVar6 = pbVar6 + 2;
              pbVar4 = pbVar4 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_004244ec:
            if ((iVar7 == 0) && (0 < local_28)) {
              if (local_1c < 0xff) {
                pvVar8 = operator_new(0x88);
                if (pvVar8 == (void *)0x0) {
                  pfVar9 = (float *)0x0;
                }
                else {
                  pfVar9 = (float *)FUN_00423340();
                }
                local_1c = local_1c + 1;
                pfVar9[6] = 0.0;
joined_r0x0042453f:
                do {
                  if ((int)local_24 < 1) break;
                  local_18 = FUN_00424a20(local_20);
                  pbVar4 = local_14;
                  FUN_00424b00();
                  pbVar13 = &DAT_004a01a0;
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < *pbVar13;
                    if (bVar1 != *pbVar13) {
LAB_00424591:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_00424596;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < pbVar13[1];
                    if (bVar1 != pbVar13[1]) goto LAB_00424591;
                    pbVar6 = pbVar6 + 2;
                    pbVar13 = pbVar13 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_00424596:
                  if (iVar7 == 0) {
                    pcVar5 = _strchr((char *)_Str,0x2c);
                    if (pcVar5 != (char *)0x0) {
                      *pcVar5 = '\0';
                      FUN_00424b50();
                      FUN_00424b50();
                      fStack_4 = (float)FUN_0046d143((char *)_Str);
                      *pfVar9 = (float)(int)fStack_4;
                      fStack_4 = (float)FUN_0046d143(pcVar5 + 1);
                      pfVar9[1] = (float)(int)fStack_4;
                    }
                    goto joined_r0x0042453f;
                  }
                  pbVar13 = &DAT_004a01a4;
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < *pbVar13;
                    if (bVar1 != *pbVar13) {
LAB_00424616:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_0042461b;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < pbVar13[1];
                    if (bVar1 != pbVar13[1]) goto LAB_00424616;
                    pbVar6 = pbVar6 + 2;
                    pbVar13 = pbVar13 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_0042461b:
                  if (iVar7 == 0) {
                    pcVar5 = _strchr((char *)_Str,0x22);
                    if (pcVar5 != (char *)0x0) {
                      pcVar10 = _strrchr(pcVar5 + 1,0x22);
                      if (pcVar10 == (char *)0x0) break;
                      *pcVar10 = '\0';
                      _strncpy((char *)(pfVar9 + 7),pcVar5 + 1,0x41);
                    }
                    goto joined_r0x0042453f;
                  }
                  pcVar5 = "Count";
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < (byte)*pcVar5;
                    if (bVar1 != *pcVar5) {
LAB_00424688:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_0042468d;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < ((byte *)pcVar5)[1];
                    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00424688;
                    pbVar6 = pbVar6 + 2;
                    pcVar5 = (char *)((byte *)pcVar5 + 2);
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_0042468d:
                  if (iVar7 == 0) {
                    fVar11 = (float)FUN_0046d143((char *)_Str);
                    pfVar9[0x18] = fVar11;
                    goto joined_r0x0042453f;
                  }
                  pbVar13 = &DAT_004a01b4;
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < *pbVar13;
                    if (bVar1 != *pbVar13) {
LAB_004246d0:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_004246d5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < pbVar13[1];
                    if (bVar1 != pbVar13[1]) goto LAB_004246d0;
                    pbVar6 = pbVar6 + 2;
                    pbVar13 = pbVar13 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_004246d5:
                  if (iVar7 == 0) {
                    fVar11 = (float)FUN_0046d143((char *)_Str);
                    pfVar9[0x1b] = fVar11;
                    goto joined_r0x0042453f;
                  }
                  pbVar13 = &DAT_004a01bc;
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < *pbVar13;
                    if (bVar1 != *pbVar13) {
LAB_00424711:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_00424716;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < pbVar13[1];
                    if (bVar1 != pbVar13[1]) goto LAB_00424711;
                    pbVar6 = pbVar6 + 2;
                    pbVar13 = pbVar13 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_00424716:
                  if (iVar7 == 0) {
                    fVar11 = (float)FUN_004241b0(0x3d);
                    pfVar9[0x1a] = fVar11;
                    goto joined_r0x0042453f;
                  }
                  pcVar5 = "Align";
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < (byte)*pcVar5;
                    if (bVar1 != *pcVar5) {
LAB_00424755:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_0042475a;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < ((byte *)pcVar5)[1];
                    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00424755;
                    pbVar6 = pbVar6 + 2;
                    pcVar5 = (char *)((byte *)pcVar5 + 2);
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_0042475a:
                  if (iVar7 == 0) {
                    fVar11 = (float)FUN_004241b0(3);
                    pfVar9[0x19] = fVar11;
                    goto joined_r0x0042453f;
                  }
                  pcVar5 = "Remain";
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < (byte)*pcVar5;
                    if (bVar1 != *pcVar5) {
LAB_004247a0:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_004247a5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < ((byte *)pcVar5)[1];
                    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_004247a0;
                    pbVar6 = pbVar6 + 2;
                    pcVar5 = (char *)((byte *)pcVar5 + 2);
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_004247a5:
                  if (iVar7 == 0) {
                    fVar11 = (float)FUN_0046d143((char *)_Str);
                    pfVar9[0x1c] = fVar11;
                    goto joined_r0x0042453f;
                  }
                  pcVar5 = "Scale";
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < (byte)*pcVar5;
                    if (bVar1 != *pcVar5) {
LAB_004247e1:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_004247e6;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < ((byte *)pcVar5)[1];
                    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_004247e1;
                    pbVar6 = pbVar6 + 2;
                    pcVar5 = (char *)((byte *)pcVar5 + 2);
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_004247e6:
                  if (iVar7 == 0) {
                    dVar17 = _atof((char *)_Str);
                    fStack_4 = (float)dVar17;
                    pfVar9[0x1f] = fStack_4;
                    if (4.0 < fStack_4 == NAN(fStack_4)) {
                      if (fStack_4 < -4.0) {
                        pfVar9[0x1f] = -4.0;
                      }
                    }
                    else {
                      pfVar9[0x1f] = 4.0;
                    }
                    goto joined_r0x0042453f;
                  }
                  pcVar5 = "Color";
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < (byte)*pcVar5;
                    if (bVar1 != *pcVar5) {
LAB_00424860:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_00424865;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < ((byte *)pcVar5)[1];
                    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00424860;
                    pbVar6 = pbVar6 + 2;
                    pcVar5 = (char *)((byte *)pcVar5 + 2);
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_00424865:
                  if (iVar7 == 0) {
                    pcVar5 = _strchr((char *)_Str,0x2c);
                    if (pcVar5 != (char *)0x0) {
                      *pcVar5 = '\0';
                      pcVar10 = (char *)FUN_00424b50();
                      uVar3 = FUN_0046d143(pcVar10);
                      *(undefined *)((int)pfVar9 + 0x86) = uVar3;
                      pcVar10 = _strchr(pcVar5 + 1,0x2c);
                      if (pcVar10 != (char *)0x0) {
                        *pcVar10 = '\0';
                        FUN_00424b50();
                        uVar3 = FUN_0046d143(pcVar5 + 1);
                        *(undefined *)((int)pfVar9 + 0x85) = uVar3;
                        pcVar5 = (char *)FUN_00424b50();
                        uVar3 = FUN_0046d143(pcVar5);
                        *(undefined *)(pfVar9 + 0x21) = uVar3;
                      }
                    }
                    goto joined_r0x0042453f;
                  }
                  pcVar5 = "Alpha";
                  pbVar6 = pbVar4;
                  do {
                    bVar1 = *pbVar6;
                    bVar16 = bVar1 < (byte)*pcVar5;
                    if (bVar1 != *pcVar5) {
LAB_00424907:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_0042490c;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar16 = bVar1 < ((byte *)pcVar5)[1];
                    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00424907;
                    pbVar6 = pbVar6 + 2;
                    pcVar5 = (char *)((byte *)pcVar5 + 2);
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_0042490c:
                  if (iVar7 == 0) {
                    uVar3 = FUN_0046d143((char *)_Str);
                    *(undefined *)((int)pfVar9 + 0x87) = uVar3;
                    goto joined_r0x0042453f;
                  }
                  pbVar6 = &DAT_004a01ec;
                  do {
                    bVar1 = *pbVar4;
                    bVar16 = bVar1 < *pbVar6;
                    if (bVar1 != *pbVar6) {
LAB_00424948:
                      iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                      goto LAB_0042494d;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar4[1];
                    bVar16 = bVar1 < pbVar6[1];
                    if (bVar1 != pbVar6[1]) goto LAB_00424948;
                    pbVar4 = pbVar4 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_0042494d:
                } while (iVar7 != 0);
                pfVar12 = pfVar9 + 7;
                do {
                  cVar2 = *(char *)pfVar12;
                  pfVar12 = (float *)((int)pfVar12 + 1);
                } while (cVar2 != '\0');
                fStack_4 = (float)((int)pfVar12 - ((int)pfVar9 + 0x1d));
                fVar11 = (float)(int)fStack_4;
                if ((int)fStack_4 < 0) {
                  fVar11 = fVar11 + 4.2949673e+09;
                }
                pfVar9[0x20] = fVar11 * pfVar9[0x1f] * 15.0 * 0.5;
                FUN_004109f0(param_1,(int)(pfVar9 + 3));
                if (param_3 == 0) {
                  pvVar8 = operator_new(0x88);
                  if (pvVar8 == (void *)0x0) {
                    pfVar12 = (float *)0x0;
                  }
                  else {
                    pfVar12 = (float *)FUN_00423340();
                  }
                  pfVar15 = pfVar12;
                  for (iVar7 = 0x22; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *pfVar15 = *pfVar9;
                    pfVar9 = pfVar9 + 1;
                    pfVar15 = pfVar15 + 1;
                  }
                  pfVar12[3] = (float)pfVar12;
                  pfVar12[4] = 0.0;
                  pfVar12[5] = 0.0;
                  FUN_004109f0(param_1,(int)(pfVar12 + 3));
                }
              }
              else {
                local_28 = -1;
              }
            }
          }
        }
      }
      pcVar5 = local_20;
      pbVar6 = local_14;
      pbVar4 = local_10;
    } while (0 < (int)local_24);
  }
  _free(pcVar5);
  _free(pbVar6);
  _free(_Str);
  _free(pbVar4);
  return 0;
}


