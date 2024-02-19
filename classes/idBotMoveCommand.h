struct idBotMoveCommand
{
    struct botSubMoveGoalInfo_t
    {
        bool active; // Offset: 0x0

        bool precise; // Offset: 0x1

        bool stopAtPoint; // Offset: 0x2

        bool firstRun; // Offset: 0x3

        // {{ units = m }}
        float radius; // Offset: 0x4

        // {{ units = m }}
        idVec3 point; // Offset: 0x8

    }; // Size: 0x14

    struct botRouteMoveGoalInfo_t
    {
        // if false, bots won't use the route goal info - even if a valid route exists.
        bool allowed; // Offset: 0x0

        bool active; // Offset: 0x1

        idBotRouteRefPtr routeNode; // Offset: 0x8

        botPathNode_t* curNode; // Offset: 0x10

    }; // Size: 0x18

    // if true, Bot *must* reach m_moveDestination, not just the closest point on the navmesh to m_moveDestination.
    bool movePrecise; // Offset: 0x8

    // if true, Bot is stopping when reaches the move goal.
    bool moveStopAtPoint; // Offset: 0x9

    // the areaNum of the moveDestination
    idIndex < int , invalidArea_t , - 1 > moveDestinationAreaNum; // Offset: 0xC

    // Look at botMoveActionFlags_t
    idBitFlag32 moveActionFlags; // Offset: 0x10

    // the bots desired movement stance ( may want to always be crouching, for example ).
    botMoveStance_t moveStance; // Offset: 0x14

    // the type of thing we are moving to ( entity, point, etc ).
    botMoveGoalType_t moveGoalType; // Offset: 0x18

    // if our goal is an entity, what type of entity ( so we can seamlessly track that ent behind the scenes ).
    botMoveEntityType_t moveEntityType; // Offset: 0x1C

    // if our goal is a position, what type of position ( so we can seamlessly track that behind the scenes ).
    botMovePositionType_t movePositionType; // Offset: 0x20

    // the reason WHY the bot is moving with this cmd. Useful for detecting if a move is failing...
    botMoveReason_t moveReason; // Offset: 0x24

    // how close we need to be to our "moveDestination" to consider it "reached". {{ units = m }}
    float moveTolerance; // Offset: 0x28

    // tolerance we're using to reach "moveDestination". May not be the same as "moveTolerance" if a moveSubGoal exists. {{ units = m }}
    float moveDestinationTolerance; // Offset: 0x2C

    // point in space we want to be moving to. {{ units = m }}
    idVec3 moveGoalPosition; // Offset: 0x30

    // point in space we are actually moving to. May not be the same as either "moveGoalPosition" or "moveGoalEntity's" origin. {{ units = m }}
    idVec3 moveDestination; // Offset: 0x3C

    // offset from the move goal, that we want added to the move goal's origin. {{ units = m }}
    idVec3 moveOffset; // Offset: 0x48

    // entity we want to be moving to
    idManagedClassPtr < const idEntity > moveGoalEntity; // Offset: 0x58

    // state we should run callbacks on
    idBotState* moveCallBackState; // Offset: 0x78

    // if active, this is a movement sub goal on the path the bot should move toward first.
    idBotMoveCommand::botSubMoveGoalInfo_t moveSubGoal; // Offset: 0x80

    // if active, this is a route movement goal that gets us to our move goal thru a route node first.
    idBotMoveCommand::botRouteMoveGoalInfo_t moveRouteGoal; // Offset: 0x98

}; // Size: 0xB0
