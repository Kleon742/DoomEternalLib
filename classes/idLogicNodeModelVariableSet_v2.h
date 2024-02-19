struct idLogicNodeModelVariableSet_v2 : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_VALUE = 2,
        OUTPUT_VALUE = 3
    };

    // Variable
    logicVariableAssetReference_t variable; // Offset: 0x10

}; // Size: 0x18
