struct idDeclLogicClass : idDeclLogic
{
    // Description
    idStr description; // Offset: 0xD0

    // Property variables
    idList < logicVariableAsset_t , TAG_LOGIC , false > propertyVariables; // Offset: 0x100

    // Variables
    idList < logicVariableAsset_t , TAG_LOGIC , false > variables; // Offset: 0x118

    // Main graph
    idTypeInfoObjectPtr < idLogicGraphAssetClassMain > mainGraph; // Offset: 0x130

}; // Size: 0x140
