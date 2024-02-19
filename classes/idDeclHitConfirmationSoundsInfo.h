struct idDeclHitConfirmationSoundsInfo : idGameDeclTypeInfo
{
    // list of sounds to choose from when player hits player
    idList < const idSoundEvent * , TAG_IDLIST , false > hitConfirmSoundsPlayer; // Offset: 0x90

    // list of sounds to choose from when summoned ai hits player
    idList < const idSoundEvent * , TAG_IDLIST , false > hitConfirmSoundsSummon; // Offset: 0xA8

    // list of sounds to choose from when player/ai hits invulnerable player
    idList < const idSoundEvent * , TAG_IDLIST , false > hitConfirmSoundsInvulnerable; // Offset: 0xC0

}; // Size: 0xD8
