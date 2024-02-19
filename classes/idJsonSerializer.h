struct idJsonSerializer
{
    bool isWriting; // Offset: 0x0

    Json::Value* valueToSerialize; // Offset: 0x8

    idList < Json::Value * , TAG_IDLIST , false > valueStack; // Offset: 0x10

}; // Size: 0x28
