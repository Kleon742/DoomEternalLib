struct idBotGoal : idClass
{
    // various volatile flags that can be set. Look at "behaviorGoalFlags_t".
    idBitFlag32 goalVolatileFlags; // Offset: 0x10

    // various parameters goals can use to modify behaviors.
    idBotGoalParameter* goalParameters; // Offset: 0x18

    // the type of goal category we belong to - bot can ref this to quickly filter behaviors. Look at "behaviorGoalTypes_t"
    idBitFlag32 goalType; // Offset: 0x20

    // entity of interest that is the target of this goal. *MAY* be NULL if "goalPosition" is set ( some goals have an entity and a position ).
    idManagedClassPtr < const idEntity > goalEntity; // Offset: 0x28

    // owner of this goal.
    idBot* goalOwner; // Offset: 0x48

    // position of interest that is the target of this goal. *MAY* be VEC3_ZERO if "goalEntity" is set ( some goals have an entity and a position ). {{ units = m }}
    idVec3 goalPosition; // Offset: 0x50

}; // Size: 0x60
