struct logicLinkAsset_t
{
    // Unique identifier
    unsigned int id; // Offset: 0x0

    // Control points
    idList < idVec2 , TAG_LOGIC , false > controlPoints; // Offset: 0x8

    // From node identifier
    unsigned int fromNodeId; // Offset: 0x20

    // From pin identifier
    unsigned int fromPinId; // Offset: 0x24

    // To node identifier
    unsigned int toNodeId; // Offset: 0x28

    // To pin identifier
    unsigned int toPinId; // Offset: 0x2C

    // Disabled (will be ignored at runtime)
    bool disabled; // Offset: 0x30

}; // Size: 0x38
