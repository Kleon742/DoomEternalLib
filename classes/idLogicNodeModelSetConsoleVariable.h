struct idLogicNodeModelSetConsoleVariable : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_VALUE = 2
    };

    struct instanceData_t
    {
        idCVar* variable; // Offset: 0x0

    }; // Size: 0x8

    // Variable
    idCVar* variable; // Offset: 0x10

}; // Size: 0x18
