struct logicInterfaceAsset_t
{
    // Unique identifier
    unsigned int id; // Offset: 0x0

    // Name
    idStr name; // Offset: 0x8

    // Description
    idStr description; // Offset: 0x38

    // Inputs
    idList < logicInterfaceInputAsset_t , TAG_LOGIC , false > inputs; // Offset: 0x68

    // Outputs
    idList < logicInterfaceOutputAsset_t , TAG_LOGIC , false > outputs; // Offset: 0x80

}; // Size: 0x98
