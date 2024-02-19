struct idLogicNodeModelVariableGet_v2 : idLogicNodeModel
{
    enum logicIds_t : int
    {
        OUTPUT_VALUE = 0
    };

    // Variable
    logicVariableAssetReference_t variable; // Offset: 0x10

}; // Size: 0x18
