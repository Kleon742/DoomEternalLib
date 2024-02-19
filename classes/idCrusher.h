struct idCrusher : idMover
{
    struct crushInfo_t
    {
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        idVec3 crushDir; // Offset: 0x20

        idHavokQueryId query; // Offset: 0x30

        idBounds bounds; // Offset: 0x38

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTraceTime; // Offset: 0x50

        idVec3 startpos; // Offset: 0x58

        idVec3 endpos; // Offset: 0x64

    }; // Size: 0x70

    // speed of player movement when being crushed
    float playerMoveScale; // Offset: 0x2D58

    // damage applied when player is crushed
    idDeclDamage* playerDamageDecl; // Offset: 0x2D60

    // damage applied when ai is crushed
    idDeclDamage* aiDamageDecl; // Offset: 0x2D68

    // the trigger used to determine touch on this item for players and AI.
    idManagedClassPtr < idTrigger > instance_Trigger; // Offset: 0x2D70

    // delay before mover script starts executing
    idTypesafeTime < int , millisecondUnique_t , 1000 > initialDelayMS; // Offset: 0x2D90

    // after crushing an entity: when set, continue running current script command. when cleared, current command is stopped and execution goes to next command
    bool continueCommandOnCollide; // Offset: 0x2D94

    // for high-speed crusher that tend to get the player stuck inside of them
    bool usesHackToPushPlayerOutOfCrusher; // Offset: 0x2D95

    // ignore the activate event if we are currently moving
    bool ignoreActivateIfMoving; // Offset: 0x2D96

    float crusherPausedTime; // Offset: 0x2D98

    bool crusherPaused; // Offset: 0x2D9C

    bool playerSpeedScaled; // Offset: 0x2D9D

    idVec3 lastPos; // Offset: 0x2DA0

    idVec3 moveDir; // Offset: 0x2DAC

    idVec3 crushPos; // Offset: 0x2DB8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > crushEndTime; // Offset: 0x2DC8

    idVec3 prePausedVel; // Offset: 0x2DD0

    idVec3 prePausedDestPos; // Offset: 0x2DDC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseUntilTime; // Offset: 0x2DE8

    int numTouching; // Offset: 0x2DF0

    bool wasValidTouchOnStart; // Offset: 0x2DF4

    idList < idCrusher::crushInfo_t , TAG_IDLIST , false > crushInfoList; // Offset: 0x2DF8

    idSysMutex unTouchMutex; // Offset: 0x2E10

}; // Size: 0x2E38
