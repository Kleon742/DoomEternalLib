struct idLogicNodeModelGetConsoleVariable_v2 : idLogicNodeModel
{
    enum logicIds_t : int
    {
        OUTPUT_VALUE = 0
    };

    struct instanceData_t
    {
        idCVar* variable; // Offset: 0x0

    }; // Size: 0x8

    // Variable
    idCVar* variable; // Offset: 0x10

}; // Size: 0x18
