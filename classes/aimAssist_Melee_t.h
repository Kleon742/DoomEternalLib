struct aimAssist_Melee_t
{
    struct monsterMeleeData_t
    {
        // type(s) of monsters that use this data
        aiMonsterType_t monsterTypes; // Offset: 0x0

        // (AI target) distance where lunge speed modifier = lungeMinSpeed {{ units = m }}
        float lungeMinDist; // Offset: 0x8

        // (AI target) distance where lunge speed modifier = lungeMaxSpeed {{ units = m }}
        float lungeMaxDist; // Offset: 0xC

        // how far from the target to stop lunging
        float lungeStopDist; // Offset: 0x10

        // (AI target) max Z distance allowed for the melee lunge to trigger {{ units = m }}
        float lungeMaxZDist; // Offset: 0x14

    }; // Size: 0x18

    // Enables snapping to closest target when NOT zooming (for some melee weapons)
    bool snapEnable; // Offset: 0x0

    // how many MS should the melee snap take to focus on the target
    milliToGameTime_t snapDurationMS; // Offset: 0x8

    // Enable aa when this is equipped in the left hand (for some melee weapons)
    bool leftHandEnable; // Offset: 0x18

    // Time (MS) from equipping where target must be aquired for AA
    int equipWindow; // Offset: 0x1C

    // the maximum angle the snap and lunge can happen. Used when distance is at lungeMinDistance
    float angleCheckMax; // Offset: 0x20

    // the minimum angle the snap and lunge can happen. Used when distance is at lungeMaxDistance
    float angleCheckMin; // Offset: 0x24

    // (default - can be overridden by monsterMeleeData below) distance where lunge speed modifier = lungeMinSpeed {{ units = m }}
    float lungeMinDist; // Offset: 0x28

    // (default - can be overridden by monsterMeleeData below) distance where lunge speed modifier = lungeMaxSpeed {{ units = m }}
    float lungeMaxDist; // Offset: 0x2C

    // how far from the target to stop lunging
    float lungeStopDist; // Offset: 0x30

    // per-AI melee data
    idList < aimAssist_Melee_t::monsterMeleeData_t , TAG_IDLIST , false > monsterMeleeData; // Offset: 0x38

    // per-AI chainsaw sync data
    idList < aimAssist_Melee_t::monsterMeleeData_t , TAG_IDLIST , false > monsterChainsawSyncData; // Offset: 0x50

    // Lunge - increases speed in forward direction (for some melee) Enable melee lunge for this weapon
    bool lungeEnable; // Offset: 0x68

    // Enable lunging that changes Z
    bool lunge3dEnable; // Offset: 0x69

    // max Z distance allowed for the melee lunge to trigger {{ units = m }}
    float lungeMaxZDist; // Offset: 0x6C

    // speed multiplier when at minDist to aa target
    float lungeMinSpeed; // Offset: 0x70

    // lunge speed multiplier for Z axis only (min)
    float lungeMinZSpeed; // Offset: 0x74

    // speed multiplier when at maxDist to aa target
    float lungeMaxSpeed; // Offset: 0x78

    // lunge speed multiplier for Z axis only (max)
    float lungeMaxZSpeed; // Offset: 0x7C

    // if the target is less than this far below zero out the fixup
    float lungeZDeadzoneDistanceBelow; // Offset: 0x80

    // if the target is less than this far above zero out the fixup
    float lungeZDeadzoneDistanceAbove; // Offset: 0x84

    // maximum duration of melee lunge, in MS, or 0 for unlimited
    milliToGameTime_t lungeMaxDurationMS; // Offset: 0x88

    // how far to lunge when there's no entity target to lunge toward
    float lungeNoTargetDist; // Offset: 0x98

}; // Size: 0xA0
