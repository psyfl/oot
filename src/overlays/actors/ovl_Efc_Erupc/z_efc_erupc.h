#ifndef _Z_EFC_ERUPC_H_
#define _Z_EFC_ERUPC_H_

#include "ultra64.h"
#include "global.h"

struct EfcErupc;
typedef void (*EfcErupcActionFunc)(struct EfcErupc*, struct GlobalContext*);

typedef struct unkstruct {
    /* 0x0000 */ Vec3f unk_0;
    /* 0x000C */ Vec3f unk_C;
    /* 0x0018 */ Vec3f unk_18;
    /* 0x0024 */ unsigned char unk_24;
    /* 0x0025 */ u8 unk_25;
    /* 0x0026 */ char unk_26;
    /* 0x0027 */ s8 unk_27;
    /* 0x0028 */ s8 unk_28;
    /* 0x0029 */ char unk_29;
    /* 0x002A */ s16 unk_2A;
    /* 0x002C */ char unk_2C[0x4];
    /* 0x0030 */ f32 unk_30;
    /* 0x0034 */ char unk_34[0x8];
} unkstruct; // size = 0x3C

typedef struct EfcErupc {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ s16 unk_14C;
    /* 0x014E */ s16 unk_14E;
    /* 0x0150 */ s16 unk_150;
    /* 0x0152 */ s16 unk_152;
    /* 0x0154 */ s16 unk_154;
    /* 0x0156 */ s16 unk_156;
    /* 0x0158 */ unkstruct unk_158[100];
    /* 0x18C8 */ EfcErupcActionFunc actionFunc;
} EfcErupc; // size = 0x18CC

extern const ActorInit Efc_Erupc_InitVars;

#endif
