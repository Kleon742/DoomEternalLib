struct idLogicNodeModelEnumerationToString : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_VALUE = 0,
        OUTPUT_RESULT = 1
    };

    // Enumeration
    logicEnumerationAssetReference_t enumeration; // Offset: 0x10

}; // Size: 0x20
