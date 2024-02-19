struct idBotMoveState
{
    struct moveStateInfo_t
    {
        bool processMoveActionFlags; // Offset: 0x0

        bool firstTimeUsingSpecialMove; // Offset: 0x1

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > stateEnterTime; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextJumpTime; // Offset: 0x10

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > specialMoveTime; // Offset: 0x18

        // if set, these move action flags will override the move cmds actions flags ( needed for special move types ).
        idBitFlag32 overrideMoveActionFlags; // Offset: 0x20

        idVec3 lastValidLookDir; // Offset: 0x24

        // {{ units = m }}
        idVec3 lastValidMovePos; // Offset: 0x30

    }; // Size: 0x40

    struct botPathInfo_t
    {
        bool hasPath; // Offset: 0x0

        bool hasClearPath; // Offset: 0x1

        bool nextMovePointIsGoal; // Offset: 0x2

        int nextSeekPosIndex; // Offset: 0x4

        // {{ units = m }}
        idVec3 nextMovePoint; // Offset: 0x8

        idNavIndex < invalidReach_t > nextMovePointReachIndex; // Offset: 0x14

        idAINavMesh* navMesh; // Offset: 0x18

        idObstacleAvoidanceNew* obstacleAvoidance; // Offset: 0x20

        obstacleAvoidanceParms_t* obstacleAvoidanceParms; // Offset: 0x28

    }; // Size: 0x30

    // the last time the bot has a non walking path type set.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastNonWalkPathTypeTime; // Offset: 0x8

    idBot* owner; // Offset: 0x10

    // this is the move cmd, set by behaviors.
    idBotMoveCommand currentMoveCmd; // Offset: 0x18

    // bots stance when idle
    botMoveStance_t idleStance; // Offset: 0xC8

    // our current movement stance, may be different than the currentMoveCmd's.
    botMoveStance_t currentMoveStance; // Offset: 0xCC

    // current move status of the bot.
    botMoveStatus_t currentMoveStatus; // Offset: 0xD0

    botMoveStates_t currentMoveState; // Offset: 0xD4

    idManagedClassPtr < const idEntity > bouncePadDestinationEntity; // Offset: 0xD8

    idBotMoveState::moveStateInfo_t moveStateInfo; // Offset: 0xF8

    idBotMoveState::botPathInfo_t pathInfo; // Offset: 0x138

    // info about the last several movement failures
    idArray < botMoveFailedInfo_t , 8 > moveFailures; // Offset: 0x168

}; // Size: 0x368
