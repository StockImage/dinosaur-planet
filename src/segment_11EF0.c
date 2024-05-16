#include "common.h"
#if 0
#pragma GLOBAL_ASM("asm/nonmatchings/segment_11EF0/NOTosContSetch.s")
#else

extern u8 __osContLastCmd; // Could be s8 

s32 NOTosContSetch(OSMesgQueue* arg0, s32 arg1) {
    s32 sp1C;

    __osSiGetAccess();
    __osSiRawStartDma(1, arg1);
    osRecvMesg(arg0, NULL, 1);
    sp1C = __osSiRawStartDma(0, arg1);
    osRecvMesg(arg0, NULL, 1);
    __osContLastCmd = 0xFE;
    __osSiRelAccess();
    return sp1C;
}

#endif