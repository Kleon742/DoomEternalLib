struct idDeclLogicEntity : idDeclLogic
{
    // Interfaces
    idList < logicInterfaceAssetReference_t , TAG_LOGIC , false > interfaces; // Offset: 0xD0

    // Property variables
    idList < logicVariableAsset_t , TAG_LOGIC , false > propertyVariables; // Offset: 0xE8

    // Variables
    idList < logicVariableAsset_t , TAG_LOGIC , false > variables; // Offset: 0x100

    // Main graph
    idTypeInfoObjectPtr < idLogicGraphAssetEntityMain > mainGraph; // Offset: 0x118

}; // Size: 0x128
