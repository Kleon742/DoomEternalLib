struct idLogicNodeEntityTargetSpawnReceive : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ENTITIES = 0,
        INPUT_AUTO_START = 1,
        INPUT_START = 2,
        INPUT_STOP = 3,
        OUTPUT_AI = 4,
        OUTPUT_AI_SPAWNED = 5,
        OUTPUT_START = 6,
        OUTPUT_STOP = 7,
        OUTPUT_ENTITY = 8,
        OUTPUT_ENTITY_SPAWNED = 9
    };

    logicNodeReference_t node; // Offset: 0x38

    idLogicList < idManagedClassPtr < idTarget_Spawn > > targetSpawnList; // Offset: 0x40

}; // Size: 0x78
