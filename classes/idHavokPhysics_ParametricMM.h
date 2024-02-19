struct idHavokPhysics_ParametricMM : idHavokPhysics_RigidBody
{
    struct plyrPushTouchQuery
    {
        forcePushMode_t isForced; // Offset: 0x0

        idHavokPhysics_Player* physPlayer; // Offset: 0x8

        idVec3 moverCollPt; // Offset: 0x10

        idVec3 framePushNormal; // Offset: 0x1C

        float framePushDistance; // Offset: 0x28

    }; // Size: 0x30

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > curTimeUs; // Offset: 0x250

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > prevTimeUs; // Offset: 0x258

    idTypesafeTime < long long , microsecondUnique_t , 1000000 > timeStepUs; // Offset: 0x260

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > curGameTime; // Offset: 0x268

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > prevGameTime; // Offset: 0x270

    // ------------------------ parametric physics state ------------------------
    parametricPState_tMM_Havok current; // Offset: 0x278

    parametricPState_tMM_Havok saved; // Offset: 0x798

    int blockingPhysicsId; // Offset: 0xCB8

    idBounds absBounds; // Offset: 0xCBC

    // ------------------------ pusher ------------------------
    bool isPusher; // Offset: 0xCD4

    int pushFlags; // Offset: 0xCD8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeStepGT; // Offset: 0xCE0

    // ------------------------ world orientation ------------------------
    bool hasWorldOrientation; // Offset: 0xCE8

    idMat3 worldAxis; // Offset: 0xCEC

    // {{ units = m }}
    idVec3 worldOrigin; // Offset: 0xD10

    // ------------------------ collision ------------------------
    int collideClipMask; // Offset: 0xD1C

    bool collideCallbackEnabled; // Offset: 0xD20

    idList < idHavokPhysics_ParametricMM::plyrPushTouchQuery , TAG_IDLIST , false > pushedPhys; // Offset: 0xD28

    idList < idHavokPhysics_ParametricMM::plyrPushTouchQuery , TAG_IDLIST , false > plyrsPushTouch; // Offset: 0xD40

    bool killVelocityWhenPaused; // Offset: 0xD58

    bool initialized; // Offset: 0xD59

    bool disableLedgeGrab; // Offset: 0xD5A

    bool usesHackToPushPlayerOutOfCrusher; // Offset: 0xD5B

    // Debug
    bool hasWarnedAgainstHighVelocity; // Offset: 0xD5C

}; // Size: 0xD60
