struct idLogicGameQuery
{
    enum logicIds_t : int
    {
        INPUT_QUERY = 0,
        OUTPUT_NONE = 1,
        OUTPUT_DIFFICULTY = 2
    };

    logicNodeReference_t node; // Offset: 0x0

}; // Size: 0x8
