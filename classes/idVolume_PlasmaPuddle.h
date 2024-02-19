struct idVolume_PlasmaPuddle : idVolume_DamageOverTime
{
    struct puddleSpawnInfo_t
    {
        // position to try to spawn the puddle at {{ units = m }}
        idVec3 position; // Offset: 0x0

        // axis to align to. normally the ground normal
        idVec3 axis; // Offset: 0xC

        // when to spawn the puddle, in server time?
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startInServerTime; // Offset: 0x18

        // query to check position (translate up/down so it's not in the air) havok'd
        idHavokQueryId posClipQuery; // Offset: 0x20

        // position query succeeded
        bool posCheckSuccess; // Offset: 0x28

        // query to check LOS to havok'd
        idHavokQueryId losClipQuery; // Offset: 0x30

        // los query succeeded
        bool losCheckSuccess; // Offset: 0x38

    }; // Size: 0x40

    struct entityTouchingPuddle_t
    {
        // the entity in the puddle
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        // number of puddles he's touching
        int touchCount; // Offset: 0x20

    }; // Size: 0x28

    // Data parameters sound to play on Activation.
    idSoundEvent* activationSound; // Offset: 0xD18

    // sound to play for lifetime of volume.
    idSoundEvent* loopSound; // Offset: 0xD20

    // sound to play on Deactivation.
    idSoundEvent* deactivationSound; // Offset: 0xD28

    // entity def for the puddle volumes to spawn
    idDeclEntityDef* puddleDef; // Offset: 0xD30

    // delay between each puddle spawn time
    idTypesafeTime < int , millisecondUnique_t , 1000 > puddleSpawnDelayMS; // Offset: 0xD38

    // units between puddles. helps determines particle density {{ units = m }}
    float puddleSpacing; // Offset: 0xD3C

    // how large of a pile of puddles do we want {{ units = m }}
    float puddleRadius; // Offset: 0xD40

    // Run-time parameters entity that gets credit for putting this puddle on the ground
    idManagedClassPtr < idEntity > activator; // Offset: 0xD48

    bool timedOutLocally; // Offset: 0xD68

    // info to help spawn a wave of puddles
    idStaticList < idVolume_PlasmaPuddle::puddleSpawnInfo_t , 64 , false , TAG_IDLIST > puddleSpawnList; // Offset: 0xD70

    // list of successfully spawned puddles
    idStaticList < idManagedClassPtr < idEntity > , 64 , false , TAG_IDLIST > puddleList; // Offset: 0x1D88

    // list of ref counted entities that are in our puddles
    idStaticList < idVolume_PlasmaPuddle::entityTouchingPuddle_t , 32 , false , TAG_IDLIST > entitiesTouchingPuddlesList; // Offset: 0x25A0

}; // Size: 0x2AB8
