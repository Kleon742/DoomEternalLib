struct idMD6TagFilter : idMD6Filter
{
    // purely for debugging purposes
    idDeclAnimWebTagGroup* tagGroup; // Offset: 0x10

    unsigned int tagMask; // Offset: 0x18

    unsigned char tagGroupIndex; // Offset: 0x1C

    unsigned char tagBias; // Offset: 0x1D

}; // Size: 0x20
