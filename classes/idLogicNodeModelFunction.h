struct idLogicNodeModelFunction : idLogicNodeModel
{
    struct instanceData_t
    {
        unsigned int graphId; // Offset: 0x0

        unsigned int nodeId; // Offset: 0x4

    }; // Size: 0x8

    // Function
    logicGraphAssetFunctionReference_t function; // Offset: 0x10

}; // Size: 0x20
