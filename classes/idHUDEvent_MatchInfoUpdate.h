struct idHUDEvent_MatchInfoUpdate
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

        int team; // Offset: 0x14

        int playerNum; // Offset: 0x18

        bool isDemon; // Offset: 0x1C

        bool isAwaitingSpawn; // Offset: 0x1D

        bool skipUpdate; // Offset: 0x1E

        idMaterial2* icon; // Offset: 0x20

        idMaterial2* iconDead; // Offset: 0x28

        // XXX: This is a completely arbitrary length
        char gamerTag[17]; // Offset: 0x30

        bool isTalking; // Offset: 0x41

        bool isMuted; // Offset: 0x42

        bool isAFK; // Offset: 0x43

        idDeclPVPUpgrade::upgradeData_t* powerUpgrade; // Offset: 0x48

        idHUDEvent_MatchInfoUpdate::playerInfo_t::activeEffect_t effects[5]; // Offset: 0x50

        int numEffects; // Offset: 0xF0

    }; // Size: 0xF8

    struct roundScoreInfo_t
    {
        int slayerTeamScore; // Offset: 0x0

        int demonTeamScore; // Offset: 0x4

        int roundNumber; // Offset: 0x8

        int roundTime; // Offset: 0xC

        bool isPreRound; // Offset: 0x10

        bool isPostRound; // Offset: 0x11

    }; // Size: 0x14

    struct matchInfo_t
    {
        idHUDEvent_MatchInfoUpdate::roundScoreInfo_t scoreInfo; // Offset: 0x0

        idHUDEvent_MatchInfoUpdate::playerInfo_t localPlayerInfo; // Offset: 0x18

        idHUDEvent_MatchInfoUpdate::playerInfo_t slayerTeamPlayersInfo[2]; // Offset: 0x110

        idHUDEvent_MatchInfoUpdate::playerInfo_t demonTeamPlayersInfo[2]; // Offset: 0x300

        int numSlayerPlayers; // Offset: 0x4F0

        int numDemonPlayers; // Offset: 0x4F4

        int matchTime; // Offset: 0x4F8

        bool isTutorialMatch; // Offset: 0x4FC

    }; // Size: 0x500

    idHUDEvent_MatchInfoUpdate::matchInfo_t info; // Offset: 0x0

}; // Size: 0x500
