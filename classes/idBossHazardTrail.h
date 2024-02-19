struct idBossHazardTrail
{
    struct hazardPool_t
    {
        idManagedClassPtr < idEnvironmentalDamage_Hurt_Trigger > damageTrigger; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeStarted; // Offset: 0x20

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x28

    }; // Size: 0x30

    struct hazardSoundInfo_t
    {
        // Bounds of the hazards in the group
        idBounds hazardGroupBounds; // Offset: 0x0

        // Env trigger list
        idList < idManagedClassPtr < idEnvironmentalDamage_Hurt_Trigger > , TAG_IDLIST , false > triggerList; // Offset: 0x18

        idManagedClassPtr < idSoundBoxEntity > soundBoxEnt; // Offset: 0x30

    }; // Size: 0x50

    struct hazardTracePoints_t
    {
        idHavokQueryId traceQuery; // Offset: 0x0

        trace_t traceResults; // Offset: 0x8

        float traceDist; // Offset: 0x88

        idTypesafeNumber < float , DegreesUnique_t > headingOffset; // Offset: 0x8C

    }; // Size: 0x90

    // entity def to use to place hazards
    idDeclEntityDef* hazardEntDef; // Offset: 0x0

    // Sound to call for hazard
    idSoundEvent* hazardGroupSound; // Offset: 0x8

    // entity def to use to spawn a sound box to approximate hazard sounds
    idDeclEntityDef* hazardSoundBoxEntity; // Offset: 0x10

    // Duration for hazards
    float hazardTimeoutSec; // Offset: 0x18

    // Minimum space between hazards
    float hazardSpread; // Offset: 0x1C

    idList < idBossHazardTrail::hazardPool_t , TAG_IDLIST , false > hazardList; // Offset: 0x20

    idList < idBossHazardTrail::hazardSoundInfo_t , TAG_IDLIST , false > hazardSoundGroups; // Offset: 0x38

    idBossHazardTrail::hazardTracePoints_t hazardTrace; // Offset: 0x50

}; // Size: 0xE0
