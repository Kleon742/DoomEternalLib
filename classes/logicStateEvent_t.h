struct logicStateEvent_t
{
    // Unique identifier
    unsigned int id; // Offset: 0x0

    // Name
    idStr name; // Offset: 0x8

    // Parameters
    idList < logicVariableAsset_t , TAG_LOGIC , false > parameters; // Offset: 0x38

}; // Size: 0x50
