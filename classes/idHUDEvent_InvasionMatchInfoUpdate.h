struct idHUDEvent_InvasionMatchInfoUpdate
{
    struct playerInfo_t
    {
        struct activeEffect_t
        {
            idMaterial2* icon; // Offset: 0x0

            unsigned int nameID; // Offset: 0x8

            float percentTime; // Offset: 0xC

            int timeLeft; // Offset: 0x10

            statusEffectType_t statusEffectType; // Offset: 0x14

            // always refers to a decl-defined idStr, so a char-pointer is safe here
            char* hudSpriteName; // Offset: 0x18

        }; // Size: 0x20

        int healthPips; // Offset: 0x0

        int armorPips; // Offset: 0x4

        float healthPercentage; // Offset: 0x8

        float armorPercentage; // Offset: 0xC

        float lowHealthPercentageThreshold; // Offset: 0x10

        int playerNum; // Offset: 0x14

        bool isDemon; // Offset: 0x18

        idMaterial2* icon; // Offset: 0x20

        idMaterial2* iconDead; // Offset: 0x28

        bool isGhost; // Offset: 0x30

        bool isDisguised; // Offset: 0x31

        idMaterial2* disguiseIcon; // Offset: 0x38

        bool showAsUnknown; // Offset: 0x40

        // XXX: This is a completely arbitrary length
        char gamerTag[17]; // Offset: 0x41

        bool isTalking; // Offset: 0x52

        bool isMuted; // Offset: 0x53

        idHUDEvent_InvasionMatchInfoUpdate::playerInfo_t::activeEffect_t effects[5]; // Offset: 0x58

        int numEffects; // Offset: 0xF8

    }; // Size: 0x100

    struct scoreInfo_t
    {
        int slayerLivesRemaining; // Offset: 0x0

        int invaderLivesRemaining; // Offset: 0x4

    }; // Size: 0x8

    struct matchInfo_t
    {
        idHUDEvent_InvasionMatchInfoUpdate::scoreInfo_t scoreInfo; // Offset: 0x0

        bool localPlayerIsSlayer; // Offset: 0x8

        idHUDEvent_InvasionMatchInfoUpdate::playerInfo_t slayerPlayerInfo; // Offset: 0x10

        idHUDEvent_InvasionMatchInfoUpdate::playerInfo_t invadersPlayersInfo[2]; // Offset: 0x110

        int numInvaders; // Offset: 0x310

        long long forceEndTime; // Offset: 0x318

        bool isTutorialMatch; // Offset: 0x320

    }; // Size: 0x328

    idHUDEvent_InvasionMatchInfoUpdate::matchInfo_t info; // Offset: 0x0

}; // Size: 0x328
