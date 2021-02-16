#include "z_efc_erupc.h"

#define FLAGS 0x00000030

#define THIS ((EfcErupc *)thisx)

void EfcErupc_Init(Actor *thisx, GlobalContext *globalCtx);
void EfcErupc_Destroy(Actor *thisx, GlobalContext *globalCtx);
void EfcErupc_Update(Actor *thisx, GlobalContext *globalCtx);
void EfcErupc_Draw(Actor *thisx, GlobalContext *globalCtx);

//void func_8099CD2C(Actor* thisx, GlobalContext* globalCtx);
void func_8099CD2C(EfcErupc *this, GlobalContext *globalCtx);
void func_8099D71C(unkstruct *arg0);
void func_8099D52C(EfcErupc *thisx, GlobalContext *globalCtx); //not sure

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

s32 D_8099D770[] = {0xFF8000FF, 0x0000FFFF, 0x00FF0000};

s32 D_8099D77C[] = {0xFF8000FF, 0x00000000, 0x00640000, 0x00000000, 0x00000000};

extern UNK_TYPE D_06001720;
extern UNK_TYPE D_06002570;
extern UNK_TYPE D_06002760;
extern UNK_TYPE D_060027D8;

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099CCB0.s")
//matching
void EfcErupc_SetupAction(EfcErupc *this, EfcErupcActionFunc actionFunc)
{
    this->actionFunc = actionFunc;
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/EfcErupc_Init.s")
//matching
void EfcErupc_Init(Actor *thisx, GlobalContext *globalCtx)
{
    EfcErupc *this = THIS;
    s16 temp;

    EfcErupc_SetupAction(this, func_8099CD2C);
    Actor_SetScale(&this->actor, 1.0f);
    func_8099D71C(this->unk_158);

    this->unk_150 = 0;
    temp = this->unk_150;
    this->unk_152 = 5;
    this->unk_154 = -100;
    this->unk_14E = temp;
    this->unk_14C = temp;
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/EfcErupc_Destroy.s")
//blank function
void EfcErupc_Destroy(Actor *thisx, GlobalContext *globalCtx) {}

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099CD2C.s")

/*void func_8099CD2C(EfcErupc *this, GlobalContext *globalCtx) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    CsCmdActorAction *temp_v0;
    CsCmdActorAction *temp_v0_5;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1;
    s32 temp_s0;
    u16 temp_v1_2;
    u8 temp_a2;
    s32 phi_v1;
    s16 phi_v1_2;
    u8 phi_a2;
    s32 phi_s0;

    temp_a2 = globalCtx->csCtx.state;
    phi_a2 = temp_a2;
    if (temp_a2 != 0) {
        temp_v0 = globalCtx->csCtx.npcActions[1];
        phi_a2 = temp_a2;
        if (temp_v0 != 0) {
            if (temp_v0->action == 2) {
                temp_v1 = this->unk_150;
                phi_v1 = (s32) temp_v1;
                if (temp_v1 == 0x1E) {
                    func_800788CC((u16)0x1845U);
                    phi_v1 = (s32) this->unk_150;
                }
                if (phi_v1 < 0x41) {
                    temp_v0_2 = this->unk_154;
                    phi_v1_2 = (s16) phi_v1;
                    if ((s32) temp_v0_2 < 0xC8) {
                        this->unk_154 = temp_v0_2 + 0xA;
block_10:
                        phi_v1_2 = this->unk_150;
                    }
                } else {
                    temp_v0_3 = this->unk_154;
                    phi_v1_2 = (s16) phi_v1;
                    if ((s32) temp_v0_3 >= -0x63) {
                        this->unk_154 = temp_v0_3 - 0xA;
                        goto block_10;
                    }
                }
                this->unk_150 = phi_v1_2 + 1;
block_14:
                phi_a2 = globalCtx->csCtx.state;
            } else {
                temp_v0_4 = this->unk_154;
                phi_a2 = temp_a2;
                if ((s32) temp_v0_4 >= -0x63) {
                    this->unk_154 = temp_v0_4 - 0xA;
                    goto block_14;
                }
            }
        }
    }
    if (phi_a2 != 0) {
        temp_v0_5 = globalCtx->csCtx.npcActions[2];
        if (temp_v0_5 != 0) {
            temp_v1_2 = temp_v0_5->action;
            if (temp_v1_2 != 2) {
                if (temp_v1_2 != 3) {

                } else {
                    this->unk_14E = 0x1E;
                }
            } else {
                if (this->unk_14E == 0) {
                    func_800F3F3C((u8)6U);
                    gSaveContext.eventChkInf[2] = gSaveContext.eventChkInf[2] | 0x8000;
                }
                this->unk_14E = this->unk_14E + 1;
            }
            this->unk_14C = this->unk_14C + 1;
        }
    }
    sp64 = 0.0f;
    sp5C = 0.0f;
    sp78 = this->actor.world.pos.y + 300.0f;
    if ((s32) this->unk_152 > 0) {
        phi_s0 = 0;
loop_27:
        sp74 = Rand_CenteredFloat(100.0f) + this->actor.world.pos.x;
        sp7C = Rand_CenteredFloat(100.0f) + this->actor.world.pos.z;
        sp68 = Rand_CenteredFloat(100.0f);
        sp6C = Rand_ZeroFloat(100.0f);
        sp70 = Rand_CenteredFloat(100.0f);
        sp60 = (f32) this->unk_154 * 0.1f;
        func_8099D650(this + 0x158, &sp74, &sp68, &sp5C, 80.0f);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
        if (temp_s0 < (s32) this->unk_152) {
            goto loop_27;
        }
    }
}*/

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/EfcErupc_Update.s")
void EfcErupc_Update(Actor *thisx, GlobalContext *globalCtx)
{
    EfcErupc *this = THIS;

    this->actionFunc(this, globalCtx);
    func_8099D52C(this, globalCtx);
}

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/EfcErupc_Draw.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099D334.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099D52C.s")

/*void func_8099D52C(EfcErupc *this, GlobalContext *globalCtx)
{
    s32 sp8[3];
    s32 temp_a0;
    u8 temp_t1;
    char *temp_a1;
    unkstruct *phi_v0;
    short i;

    sp8[0] = (s32)D_8099D77C[0];
    sp8[1] = (s32)D_8099D77C[1];
    sp8[2] = (s32)D_8099D77C[2];
    phi_v0 = this->unk_158;

    for (i = 0; i < 100; i++, phi_v0++)
    {
        if (phi_v0->unk_24 != 0)
        {
            temp_t1 = phi_v0->unk_25 + 1;
            temp_a0 = temp_t1 & 0xFF;
            phi_v0->unk_25 = temp_t1;
            phi_v0->unk_0.x = phi_v0->unk_0.x + phi_v0->unk_C.x;
            phi_v0->unk_0.y = phi_v0->unk_0.y + phi_v0->unk_C.y;
            phi_v0->unk_0.z = phi_v0->unk_0.z + phi_v0->unk_C.z;
            phi_v0->unk_C.x += phi_v0->unk_18.x;
            phi_v0->unk_C.y += phi_v0->unk_18.y;
            phi_v0->unk_C.z += phi_v0->unk_18.z;
            if (temp_a0 < 0)
            {
                temp_a0 &= 0x3;
                if (temp_a0 != 0)
                {
                    temp_a0 -= 4;
                }
            }
            temp_a1 = sp8 + (temp_a0 * 3);
            phi_v0->unk_26 = temp_a1[0];
            phi_v0->unk_27 = (u8)temp_a1[1];
            phi_v0->unk_28 = (u8)temp_a1[2];
            phi_v0->unk_2A = phi_v0->unk_2A - 0x14;
            if ((s32)phi_v0->unk_2A <= 0)
            {
                phi_v0->unk_2A = 0;
                phi_v0->unk_24 = 0;
            }
        }
    }
}*/

/*void func_8099D52C(EfcErupc *this, GlobalContext *globalCtx)
{
    s32 sp8[3];
    s32 temp_a0_2;
    s32 temp_a0;
    u8 temp_t1;
    char *temp_a1;
    unkstruct *phi_v0;
    s16 phi_a0;
    short i;

    sp8[0] = (s32)D_8099D77C[0];
    sp8[1] = (s32)D_8099D77C[1];
    sp8[2] = (s32)D_8099D77C[2];
    phi_v0 = this->unk_158;

    for (i = 0; i < 100; i++, phi_v0++)
    {
        if (phi_v0->unk_24 != 0)
        {
            temp_t1 = phi_v0->unk_25 + 1;
            temp_a0 = temp_t1 & 0xFF;
            phi_v0->unk_25 = temp_t1;
            phi_v0->unk_0.x = phi_v0->unk_0.x + phi_v0->unk_C.x;
            phi_v0->unk_0.y = phi_v0->unk_0.y + phi_v0->unk_C.y;
            phi_v0->unk_0.z = phi_v0->unk_0.z + phi_v0->unk_C.z;
            phi_v0->unk_C.x += phi_v0->unk_18.x;
            phi_v0->unk_C.y += phi_v0->unk_18.y;
            phi_v0->unk_C.z += phi_v0->unk_18.z;
            temp_a0_2 = temp_a0 & 3;
            phi_a0 = temp_a0_2;
            if (temp_a0 < 0)
            {
                phi_a0 = temp_a0_2;
                if (temp_a0_2 != 0)
                {
                    phi_a0 = temp_a0_2 - 4;
                }
            }
            temp_a1 = &sp8 + (phi_a0 * 3);
            phi_v0->unk_26 = temp_a1[0];
            phi_v0->unk_27 = (u8)temp_a1[1];
            phi_v0->unk_2A = phi_v0->unk_2A - 0x14;
            phi_v0->unk_28 = (u8)temp_a1[2];
            if ((s32)phi_v0->unk_2A <= 0)
            {
                phi_v0->unk_2A = 0;
                phi_v0->unk_24 = 0;
            }
        }
    }
}*/

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099D650.s")
void func_8099D650(unkstruct *arg0, Vec3f *arg1, Vec3f *arg2, Vec3f *arg3, f32 arg4)
{
    short i;

    for (i = 0; i < 100; i++, arg0++)
    {
        if (arg0->unk_24 == false)
        {
            arg0->unk_24 = true;
            arg0->unk_0 = *arg1;
            arg0->unk_C = *arg2;
            arg0->unk_18 = *arg3;
            arg0->unk_30 = arg4 / 1000.0f;
            arg0->unk_2A = 0xFF;
            i = Rand_ZeroFloat(10.0f);
            arg0->unk_25 = i;
            break;
        }
    }
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Efc_Erupc/func_8099D71C.s")
void func_8099D71C(unkstruct *arg0)
{
    short i;
    for (i = 0; i < 100; i++, arg0++)
    {
        arg0->unk_24 = 0;
    }
}