struct idLogicNodeSceneDirectorControl : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_PLAY = 0,
        INPUT_RESET_ON_PLAY = 1,
        INPUT_PAUSE = 2,
        INPUT_RESUME = 3,
        INPUT_STOP = 4,
        INPUT_RESTART = 5,
        OUTPUT_ACTION = 6,
        OUTPUT_ACTION_NAME = 7,
        INPUT_ENTITIES = 8,
        INPUT_BREAK = 9,
        OUTPUT_PLAY = 10,
        OUTPUT_PAUSE = 11,
        OUTPUT_RESUME = 12,
        OUTPUT_STOP = 13,
        OUTPUT_RESTART = 14,
        INPUT_SET_CONDITION = 15,
        INPUT_CONDITION_VALUE = 16,
        INPUT_SKIP = 17,
        OUTPUT_SKIP = 18,
        OUTPUT_DONE = 19,
        OUTPUT_SKIPPED = 20,
        INPUT_SCENE_DECL_OVERRIDE = 21,
        HASH_MASK = -256
    };

    enum conditionType_t : int
    {
        BOOL = 0,
        INT = 1
    };

    enum customizationSceneOverride_t : int
    {
        NONE = 0,
        INTRO = 1,
        DEATH_OF_DARK_LORD = 2
    };

    struct group_t
    {
        idAtomicString name; // Offset: 0x0

        unsigned int id; // Offset: 0x8

    }; // Size: 0x10

    struct loop_t
    {
        idAtomicString name; // Offset: 0x0

        unsigned int id; // Offset: 0x8

    }; // Size: 0x10

    struct condition_t
    {
        idLogicNodeSceneDirectorControl::conditionType_t type; // Offset: 0x0

        idAtomicString name; // Offset: 0x8

        unsigned int id; // Offset: 0x10

    }; // Size: 0x18

    logicNodeReference_t node; // Offset: 0x38

    idDeclMidnightScene* defaultScene; // Offset: 0x40

    idDeclMidnightScene* activeScene; // Offset: 0x48

    idList < idLogicNodeSceneDirectorControl::group_t , TAG_LOGIC , false >* groups; // Offset: 0x50

    idList < idLogicNodeSceneDirectorControl::loop_t , TAG_LOGIC , false >* loops; // Offset: 0x58

    idList < idLogicNodeSceneDirectorControl::condition_t , TAG_LOGIC , false >* conditions; // Offset: 0x60

    idMidnightInstParams instanceParameters; // Offset: 0x68

    idMidnight::instanceHandle instanceHandle; // Offset: 0x90

    idLogicNodeSceneDirectorControl::customizationSceneOverride_t overrideType; // Offset: 0x94

}; // Size: 0x98
