struct idLogicNodeModelAnchor : idLogicNodeModel
{
    // Title
    idStr title; // Offset: 0x10

    // Row names
    idList < idStr , TAG_LOGIC , false > rowNames; // Offset: 0x40

}; // Size: 0x58
