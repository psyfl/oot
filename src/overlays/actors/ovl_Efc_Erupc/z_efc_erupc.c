#include "z_efc_erupc.h"

#define FLAGS 0x00000030

#define THIS ((EfcErupc*)thisx)

void EfcErupc_Init(Actor* thisx, GlobalContext* globalCtx);
void EfcErupc_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EfcErupc_Update(Actor* thisx, GlobalContext* globalCtx);
void EfcErupc_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_8099CD2C(Actor* thisx, GlobalContext* globalCtx);
void func_8099D71C(void* arg0);

// typedef void (*EfcErupcActionFunc)(struct EfcErupc*, struct GlobalContext*);

const ActorInit Efc_Erupc_InitVars = {
    ACTOR_EFC_ERUPC,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_EFC_ERUPC,
    sizeof(EfcErupc),
    (ActorFunc)EfcErupc_Init,
    (ActorFunc)EfcErupc_Destroy,
    (ActorFunc)EfcErupc_Update,
    (ActorFunc)EfcErupc_Draw,
};

s32 D_8099D770[] = { 0xFF8000FF, 0x0000FFFF, 0x00FF0000 };

s32 D_8099D77C[] = { 0xFF8000FF, 0x00000000, 0x00640000, 0x00000000, 0x00000000 };

extern UNK_TYPE D_06001720;
extern UNK_TYPE D_06002570;
extern UNK_TYPE D_06002760;
extern UNK_TYPE D_060027D8;

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099CCB0.s")
// EfcErupc_SetupAction
//matching
void func_8099CCB0(EfcErupc* this, s32 actionFunc) {
    this->actionFunc = actionFunc;
}

//matching
void EfcErupc_Init(Actor* thisx, GlobalContext* globalCtx) {
    EfcErupc* this = THIS;
    s16 temp;

    func_8099CCB0(this, func_8099CD2C);
    Actor_SetScale(&this->actor, 1.0f);
    func_8099D71C(&this->unk_156[0x2]);
    this->unk_150 = 0;
    temp = this->unk_150;
    this->unk_152 = 5;
    this->unk_154 = -100;
    this->unk_14E = temp;
    this->unk_14C = temp;
}

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/EfcErupc_Destroy.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099CD2C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/EfcErupc_Update.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/EfcErupc_Draw.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099D334.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099D52C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099D650.s")

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099D71C.s")
//matching
void func_8099D71C(void* arg0) {
    short i;
    for (i = 0; i < 100; i++) {
        arg0 = ((char*)arg0) + 0x3C;
        *(((char*)arg0) - ((char)0x18)) = 0;
    }
}
