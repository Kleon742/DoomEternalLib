struct idDemonPlayer_Baron : idDemonPlayer
{
    enum spikeValidationResult_t : int
    {
        SPIKEVALIDATIONRESULT_PENDING = 0,
        SPIKEVALIDATIONRESULT_SUBMITTED = 1,
        SPIKEVALIDATIONRESULT_SUCCESS = 2,
        SPIKEVALIDATIONRESULT_FAILURE = 3
    };

    struct spikeQueryResultInfo_t
    {
        // point we'd put the spike {{ units = m }}
        idVec3 position; // Offset: 0x0

        // surface normal at position
        idVec3 normal; // Offset: 0xC

        // whether we have a valid position to put this
        bool hasPosition; // Offset: 0x18

        // whether we have a valid room to put this at position
        bool hasContents; // Offset: 0x19

        // whether we have LOS to our mid point
        bool hasLOSMid; // Offset: 0x1A

        // whether we have LOS to our end point
        bool hasLOSEnd; // Offset: 0x1B

    }; // Size: 0x1C

    struct spikeSpawnInfo_t
    {
        // which wave we are in
        int wave; // Offset: 0x0

        // which column we are in
        int column; // Offset: 0x4

        // which wave our dependent parent is in
        int parentWave; // Offset: 0x8

        // which column our dependent parent is in
        int parentColumn; // Offset: 0xC

        // position the spike appears {{ units = m }}
        idVec3 position; // Offset: 0x10

        // normal at the position we contacted
        idVec3 positionNormal; // Offset: 0x1C

        // when did the spike trail start, in server time?
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startInServerTime; // Offset: 0x28

        // the result info we need from the position and los queries
        idArray < idDemonPlayer_Baron::spikeQueryResultInfo_t , 5 > queryResultInfos; // Offset: 0x30

        // queries to check position (translate up/down so it's not in the air)
        idArray < idHavokQueryId , 5 > positionClipQueries; // Offset: 0xC0

        // whether any position query succeeded
        idDemonPlayer_Baron::spikeValidationResult_t positionCheckResult; // Offset: 0xE8

        // queries to check contents at positions
        idArray < idHavokQueryId , 5 > contentsClipQueries; // Offset: 0xF0

        // whether any contents query succeeded
        idDemonPlayer_Baron::spikeValidationResult_t contentsCheckResult; // Offset: 0x118

        // queries to check LOS from the previous spike top to the mid point (could always be off depending on method of checking)
        idArray < idHavokQueryId , 5 > losToMidClipQueries; // Offset: 0x120

        // queries to check LOS to the valid positions on our spike (depends on method of checking)
        idArray < idHavokQueryId , 5 > losToEndClipQueries; // Offset: 0x148

        // whether any los query succeeded
        idDemonPlayer_Baron::spikeValidationResult_t losCheckResult; // Offset: 0x170

        // used to designate our parent spikes were successfully placed
        idDemonPlayer_Baron::spikeValidationResult_t parentCheckResult; // Offset: 0x174

        // used to designate our parent spikes were successfully placed to the left
        idDemonPlayer_Baron::spikeValidationResult_t parentCheckResult1; // Offset: 0x178

        // used to designate our parent spikes were successfully placed to the right
        idDemonPlayer_Baron::spikeValidationResult_t parentCheckResult2; // Offset: 0x17C

        // parent spike final position {{ units = m }}
        idVec3 parentPosition; // Offset: 0x180

    }; // Size: 0x190

    // game time at which it is next acceptable to ground pound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidGroundPoundTime; // Offset: 0x36FC8

    // time when we last did a melee
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastMeleeTime; // Offset: 0x36FD0

    // game time at which it is next acceptable to melee.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextValidMeleeTime; // Offset: 0x36FD8

    // last time player pressed R to melee
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeLastPressedTime; // Offset: 0x36FE0

    // component to help snap the camera and move the demon to hit with melee
    idDemonMeleeLungeComponent meleeComponent; // Offset: 0x36FE8

    // current melee target
    idManagedClassPtr < idEntity > reticleMeleeTarget; // Offset: 0x37028

    // interpolater to smoothly slide the reticle spread based the validity of your meleeTarget
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > reticleMeleeTargetBlend; // Offset: 0x37048

    // Melee Left anim alias for 3rd person
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > torsoMeleeLeftAnimAlias; // Offset: 0x37078

    // Melee Right anim alias for 3rd person
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > torsoMeleeRightAnimAlias; // Offset: 0x3707A

    // we are currently charging
    bool isCharging; // Offset: 0x3707C

    // interpolater to smoothly slide between charging in anim blends
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > chargeAnimBlend; // Offset: 0x37080

    // the FX entities we spawn in the ground pound area
    idList < const idDeclEntityDef * , TAG_IDLIST , false > groundPoundSpikeEntityDefList; // Offset: 0x370B0

    // damage decl for each spike to do
    idDeclDamage* groundPoundSpikeDamage; // Offset: 0x370C8

    // last time we pressed the button for ground pound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > groundPoundLastPressedTime; // Offset: 0x370D0

    // have the last ground pound's spikes triggerred yet?
    bool groundPoundSpikesTriggered; // Offset: 0x370D8

    // yaw used for the ground pound spikes
    float groundPoundHeading; // Offset: 0x370DC

    // pos used for the ground pound spikes {{ units = m }}
    idVec3 groundPoundOrigin; // Offset: 0x370E0

    // List of spikes we're looking to spawn during UpdateSpikeSequence
    idStaticList < idDemonPlayer_Baron::spikeSpawnInfo_t , 64 , false , TAG_IDLIST > spikeSpawnList; // Offset: 0x370F0

    // View position at time of spike creation. used for LOS check {{ units = m }}
    idVec3 spikeSpawnViewPos; // Offset: 0x3D508

    // clip model used for contents check on each spike
    idHavokShapePointer spikeClipModel; // Offset: 0x3D518

    // List of players we've killed with ground pound (if we kill an idDemonPlayer we'll put his original player here).
    idStaticList < idManagedClassPtr < const idPlayer > , 12 , false , TAG_IDLIST > groundPoundKillList; // Offset: 0x3D520

}; // Size: 0x3D6B8
