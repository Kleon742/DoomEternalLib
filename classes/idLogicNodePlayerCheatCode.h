struct idLogicNodePlayerCheatCode
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        OUTPUT_START = 1,
        OUTPUT_DONE = 2,
        INPUT_ENTITY = 3,
        INPUT_ENABLE_CHEAT_CODE = 4,
        INPUT_TEMP_DISABLE = 5
    };

    bool useCheatCode; // Offset: 0x0

    bool tempDisable; // Offset: 0x1

}; // Size: 0x2
