struct idLogicNodeModelSwitchGameDifficulty : idLogicNodeModel
{
    enum logicDesignerDifficulty_t : int
    {
        LD_DIFFICULTY_DEFAULT = -1,
        LD_DIFFICULTY_EASY = 0,
        LD_DIFFICULTY_MEDIUM = 1,
        LD_DIFFICULTY_HARD = 2,
        LD_DIFFICULTY_NIGHTMARE = 3,
        LD_DIFFICULTY_ULTRA_NIGHTMARE = 4
    };

    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_DEFAULT = 1,
        PIN_DYNAMIC_MASK = -16
    };

    struct difficulties_t
    {
        // Identifier
        unsigned int id; // Offset: 0x0

        // Difficulty Setting
        idLogicNodeModelSwitchGameDifficulty::logicDesignerDifficulty_t difficulty; // Offset: 0x4

        // Interface name for the node (generated)
        idStr name; // Offset: 0x8

    }; // Size: 0x38

    // Outputs
    idList < idLogicNodeModelSwitchGameDifficulty::difficulties_t , TAG_LOGIC , false > outputs; // Offset: 0x10

}; // Size: 0x28
