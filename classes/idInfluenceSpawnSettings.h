struct idInfluenceSpawnSettings : idBloatedEntity
{
    struct entitySettings_t
    {
        // name of entity that will use this data.
        idEntityDefRef entityType; // Offset: 0x0

        // can this influence while hidden
        bool canInfluenceHidden; // Offset: 0x8

        // influencers this entity applies while alive
        idList < const idDeclSpawnInfluencer * , TAG_IDLIST , false > influencerSet; // Offset: 0x10

    }; // Size: 0x28

    struct weaponSettings_t
    {
        // name of weapon that will use this data.
        idDeclWeaponRef weaponType; // Offset: 0x0

        // influencers this entity applies while equipped
        idList < const idDeclSpawnInfluencer * , TAG_IDLIST , false > influencerSet; // Offset: 0x8

    }; // Size: 0x20

    struct projectileSettings_t
    {
        // name of projectile that will use this data.
        idDeclProjectileRef projectileType; // Offset: 0x0

        // influencers this entity applies while equipped
        idList < const idDeclSpawnInfluencer * , TAG_IDLIST , false > influencerSet; // Offset: 0x8

    }; // Size: 0x20

    struct playerDeathSettings_t
    {
        // name of player type
        idEntityDefRef playerType; // Offset: 0x0

        // how long do influencers stick around?
        float influencerLifetime; // Offset: 0x8

        // influencers this entity applies while equipped
        idList < const idDeclSpawnInfluencer * , TAG_IDLIST , false > influencerSet; // Offset: 0x10

    }; // Size: 0x28

    struct influencerSumStyle_t
    {
        // Type of influencer
        spawnInfluenceScoreType_t influencerType; // Offset: 0x0

        // Type of summation
        spawnInfluenceSummationStyle_t summationStyle; // Offset: 0x4

        // Minimum total weight allowed for this type of influencer
        float minSummedWeight; // Offset: 0x8

        // Maximum total weight allowed for this type of influencer
        float maxSummedWeight; // Offset: 0xC

    }; // Size: 0x10

    typedef idList < const idDeclSpawnInfluencer * > influencerDeclSet_t;

    typedef idStaticList < idInfluenceSpawnSettings::influencerSumStyle_t , INFLUENCE_MAX > influencerSummationStyleList_t;

    // minimum random value added to score.
    float minScatter; // Offset: 0xB88

    // maximum random value added to score.
    float maxScatter; // Offset: 0xB8C

    // maximum angle between viewer forward direction and a spawn point, to allow a LOS test.
    float maxViewerToSpawnLOSAngle; // Offset: 0xB90

    // maximum distance between an enemy and a player's potential spawn point, to allow a LOS test. {{ units = m }}
    float enemyToSpawnLOSTestMaxDistance; // Offset: 0xB94

    // if an enemy sees the spawn point, how much influence to add? (negative for penalty.)
    float enemySpawnLOSInfluence; // Offset: 0xB98

    // maximum distance between an ally and a player's potential spawn point, to allow a LOS test. {{ units = m }}
    float allyToSpawnLOSTestMaxDistance; // Offset: 0xB9C

    // if an ally sees the spawn point, how much influence to add? (negative for penalty.)
    float allySpawnLOSInfluence; // Offset: 0xBA0

    // if a domination control point is ally controlled, how much influence do spawn nodes linked to it get?
    float allyControlPointSpawnInfluence; // Offset: 0xBA4

    // if a domination control point is neutral controlled, how much influence do spawn nodes linked to it get?
    float neutralControlPointSpawnInfluence; // Offset: 0xBA8

    // if a domination control point is enemy controlled, how much influence do spawn nodes linked to it get?
    float enemyControlPointSpawnInfluence; // Offset: 0xBAC

    // how much influence do spawn nodes linked to a safehouse location get?
    float safehousePreferredSpawnInfluence; // Offset: 0xBB0

    // how much influence do spawn nodes that are touching a safehouse location get?
    float safehouseTouchingSpawnInfluence; // Offset: 0xBB4

    // How influencers of different types are summed
    idList < idInfluenceSpawnSettings::influencerSumStyle_t , TAG_IDLIST , false > influencerSummationStylesEditorView; // Offset: 0xBB8

    // Run-time version of summation styles that can be quickly accessed (mutable because it gets filled out on first request)
    idStaticList < idInfluenceSpawnSettings::influencerSumStyle_t , 11 , false , TAG_IDLIST > influencerSummationStyles; // Offset: 0xBD0

    // each game mode may designate specific entities to activate these alternate influencers
    idList < const idDeclSpawnInfluencer * , TAG_IDLIST , false > alternateEntityInfluencers; // Offset: 0xC98

    // influencers active when the entity is alive.
    idList < idInfluenceSpawnSettings::entitySettings_t , TAG_IDLIST , false > entityInfluencers; // Offset: 0xCB0

    // influencers active when the weapon is in an inventory
    idList < idInfluenceSpawnSettings::weaponSettings_t , TAG_IDLIST , false > weaponInfluencers; // Offset: 0xCC8

    // influencers active when a projectile is active
    idList < idInfluenceSpawnSettings::projectileSettings_t , TAG_IDLIST , false > projectileInfluencers; // Offset: 0xCE0

    // influencers active when a player is killed
    idList < idInfluenceSpawnSettings::playerDeathSettings_t , TAG_IDLIST , false > playerDeathInfluencers; // Offset: 0xCF8

}; // Size: 0xD10
