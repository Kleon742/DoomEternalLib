struct aiProjectileExtraInfo_t
{
    struct explicitShot_t
    {
        // comment {{ units = m }}
        idRange < float > spread_vertical; // Offset: 0x0

        // comment {{ units = m }}
        idRange < float > spread_horizontal; // Offset: 0x8

        // if true, lerp spread according to distance to target; otherwise use random lerp
        bool lerpSpreadWithDistance; // Offset: 0x10

        // if lerping over distance, clamp lerp at these distances {{ units = m }}
        idRange < float > lerpDistanceRange; // Offset: 0x14

    }; // Size: 0x1C

    // comment {{ units = m }}
    idDeclProjectile* projectileDecl; // Offset: 0x0

    // comment {{ units = m }}
    idRange < int > numShots; // Offset: 0x8

    // comment {{ units = m }}
    idRange < float > spread_vertical; // Offset: 0x10

    // comment {{ units = m }}
    idRange < float > spread_horizontal; // Offset: 0x18

    // if randomness isn't enough
    idList < aiProjectileExtraInfo_t::explicitShot_t , TAG_IDLIST , false > explicitShots; // Offset: 0x20

    // comment
    bool enabled; // Offset: 0x38

    // optional list of required conditions for this projectile info to apply
    idList < idTypeInfoObjectPtr < idAICondition > , TAG_AI_FSM , false > requiredConditions; // Offset: 0x40

}; // Size: 0x58
