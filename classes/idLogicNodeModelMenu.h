struct idLogicNodeModelMenu : idLogicNodeModel
{
    // Type
    logicGUIMenuType_t type; // Offset: 0x10

    // Flags
    logicGUIMenuFlags_t flags; // Offset: 0x14

    // Items
    idList < idTypeInfoObjectPtr < idLogicGUIItem > , TAG_LOGIC , false > items; // Offset: 0x18

}; // Size: 0x30
