struct idLogicGraphAsset : idClass
{
    idDeclLogic* decl; // Offset: 0x10

    // Unique identifier
    unsigned int id; // Offset: 0x18

    // Name
    idStr name; // Offset: 0x20

    // Position
    idVec2 pos; // Offset: 0x50

    // Zoom
    int zoom; // Offset: 0x58

    // Description
    idStr description; // Offset: 0x60

    // Wiki link
    idStr wikiLink; // Offset: 0x90

    // Variables
    idList < logicVariableAsset_t , TAG_LOGIC , false > variables; // Offset: 0xC0

    // Nodes
    idList < logicNodeAsset_t , TAG_LOGIC , false > nodes; // Offset: 0xD8

    // Links
    idList < logicLinkAsset_t , TAG_LOGIC , false > links; // Offset: 0xF0

}; // Size: 0x108
