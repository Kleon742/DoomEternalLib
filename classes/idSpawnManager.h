struct idSpawnManager
{
    struct Command
    {
        enum commandState_t : int
        {
            CS_GENERATE_LOCATIONS = 0,
            CS_EVALUATE_LOCATIONS = 1,
            CS_JITTER_AND_SORT_LOCATIONS = 2,
            CS_FIND_BEST_LOCATION = 3,
            CS_COMPLETE_COMMAND = 4,
            CS_FAIL_COMMAND = 5
        };

        idSpawnManager::Command::commandState_t state; // Offset: 0x8

        int type; // Offset: 0xC

        int dataIndex; // Offset: 0x10

        unsigned int resultHandle; // Offset: 0x14

    }; // Size: 0x18

    struct Context
    {
        // Locations being evaluated for current spawn command.
        idList < idSpawnLocation , TAG_IDLIST , false > spawnLocations; // Offset: 0x0

        int currentLocationIndex; // Offset: 0x18

        float minLocationValue; // Offset: 0x1C

        float maxLocactionValue; // Offset: 0x20

    }; // Size: 0x28

    struct CommandExecutor
    {
    }; // Size: 0x8

    typedef idHandleArray < idSpawnResult , 10 > SpawnResultHandleArray;

    typedef idCircularBuffer < idSpawnManager::Command , COMMAND_QUEUE_SIZE > CommandQueue;

    typedef idList < idSpawnManager::CommandExecutor * > ExecutorList;

    // Commands waiting to be executed.
    idCircularBuffer < idSpawnManager::Command , 128 > commandQueue; // Offset: 0x8

    idSpawnManager::Context context; // Offset: 0xC10

    idHandleArray < idSpawnResult , 10 > spawnResults; // Offset: 0xC38

    int debugHighestValueIndex; // Offset: 0xC50

    float debugValueDiff; // Offset: 0xC54

    float debugLowestValue; // Offset: 0xC58

    float debugFlashTimer; // Offset: 0xC5C

    float debugNodeTimeout; // Offset: 0xC60

}; // Size: 0xC68
