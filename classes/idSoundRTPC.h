struct idSoundRTPC : idDeclTypeInfo
{
    idSoundWwiseID rtpcID; // Offset: 0x88

    // override the caller's objectId and treat this as a global object
    bool global; // Offset: 0x8C

}; // Size: 0x90
