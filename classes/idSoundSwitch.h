struct idSoundSwitch : idDeclTypeInfo
{
    idSoundWwiseID groupID; // Offset: 0x88

    idList < idSoundWwiseID , TAG_SOUND , false > stateIDs; // Offset: 0x90

}; // Size: 0xA8
