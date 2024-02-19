struct idProjectile_EMP : idProjectile_Rocket
{
    struct empInfo_t
    {
        bool active; // Offset: 0x0

        idManagedClassPtr < idEntity > ai; // Offset: 0x8

        int meleeHitsToShatter; // Offset: 0x28

        int numMeleeHits; // Offset: 0x2C

        int diminishedLevel; // Offset: 0x30

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > removeInfluenceTime; // Offset: 0x38

        bool isUpgradedTime; // Offset: 0x40

    }; // Size: 0x48

    struct aiDiminishingReturnInfo_t
    {
        // stun that will influence time based on the consecutive attacks will be scaled by this amount
        float diminishingReturnsScale; // Offset: 0x0

    }; // Size: 0x4

    struct aiStunInfo_t
    {
        struct stunScalePerDifficulty_t
        {
            // difficulty
            gameDifficulty_t difficulty; // Offset: 0x0

            // stun scale
            float stunScale; // Offset: 0x4

        }; // Size: 0x8

        // specific AI type
        aiMonsterType_t aiType; // Offset: 0x0

        // stun influence time (lifetimeSec) is scaled by this amount
        float stunScale; // Offset: 0x8

        // stun influence time per difficulty
        idList < idProjectile_EMP::aiStunInfo_t::stunScalePerDifficulty_t , TAG_IDLIST , false > stunScalePerDifficulty; // Offset: 0x10

        // list of specific diminishing return values that will affect specific AI
        idList < idProjectile_EMP::aiDiminishingReturnInfo_t , TAG_IDLIST , false > aiDiminishingReturnInfo; // Offset: 0x28

        // melee hits to shatter while stunned
        int meleeHitsToShatter; // Offset: 0x40

        // Window (in sec) when to apply diminishing returns
        float diminishingReturnsWindow; // Offset: 0x44

        // decls that can trigger shatter behavior on this ai type
        idList < const idDeclDamage * , TAG_IDLIST , false > shatterDamageDecls; // Offset: 0x48

    }; // Size: 0x60

    // min influence radius of EMP ( 0 to minInfluenceRadius give 100% influence time ) {{ units = m }}
    float minInfluenceRadius; // Offset: 0x3038

    // max influence radius of EMP ( minInfluenceRadius to maxInfluenceRadius applies a scaled influence time) {{ units = m }}
    float maxInfluenceRadius; // Offset: 0x303C

    // sound made while boring into enemy
    idSoundEvent* empActiveSound; // Offset: 0x3040

    // fx to use on AI when under EMP
    fxCondition_t fxAiEMP; // Offset: 0x3048

    // time to stay alive (in sec)
    float lifetimeSec; // Offset: 0x304C

    // allows lifetime to be 'charged' by weapon
    float externalStunScale; // Offset: 0x3050

    fxCondition_t explodeFxCondition; // Offset: 0x3054

    // list of specific AI, with scaled influence times
    idList < idProjectile_EMP::aiStunInfo_t , TAG_IDLIST , false > aiStunInfo; // Offset: 0x3058

    idStaticList < idProjectile_EMP::empInfo_t , 20 , false , TAG_IDLIST > empList; // Offset: 0x3070

    float influenceInnerRadiusScale; // Offset: 0x3628

    float influenceOuterRadiusScale; // Offset: 0x362C

    float influenceTimeSec; // Offset: 0x3630

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentEMPLaunchWindow; // Offset: 0x3638

    idUpgradeMod_Equipment::freezeEMPUpgradeData_t* freezeEMPUpgradeData; // Offset: 0x3640

}; // Size: 0x3648
