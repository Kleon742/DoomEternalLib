struct idLogicNodeModelTableSample : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_INDEX = 0,
        INPUT_BEGIN = 1,
        INPUT_END = 2,
        OUTPUT_VALUE = 3
    };

    struct instanceData_t
    {
        idDeclTable* table; // Offset: 0x0

    }; // Size: 0x8

    // Table
    idDeclTable* table; // Offset: 0x10

}; // Size: 0x18
