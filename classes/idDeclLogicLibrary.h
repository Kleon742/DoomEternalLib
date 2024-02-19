struct idDeclLogicLibrary : idDeclLogic
{
    // Enumerations
    idList < logicEnumerationAsset_t , TAG_LOGIC , false > enumerations; // Offset: 0xD0

    // Structures
    idList < logicStructureAsset_t , TAG_LOGIC , false > structures; // Offset: 0xE8

    // Events
    idList < logicEventAsset_t , TAG_LOGIC , false > events; // Offset: 0x100

    // Interfaces
    idList < logicInterfaceAsset_t , TAG_LOGIC , false > interfaces; // Offset: 0x118

}; // Size: 0x130
