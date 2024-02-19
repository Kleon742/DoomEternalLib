struct idSWFAVM
{
    // For debug prints
    idAtomicString swfName; // Offset: 0x8

    idList < idSWFABCEnv * , TAG_SWF , false > abvEnvs; // Offset: 0x10

    idList < idSWFBitStream * , TAG_SWF , false > abcTagBuffers; // Offset: 0x28

}; // Size: 0x40
