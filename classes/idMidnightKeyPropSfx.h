struct idMidnightKeyPropSfx : idMidnightKeyProperties
{
    // TODO : MERGE Indicate the sound to play
    idSoundEvent* soundEvent; // Offset: 0x10

    // The name of a tag to play the sound at. Uses the first animation in the track group (if any).
    idStr tagName; // Offset: 0x18

    // if True indicates that this is a vo line that is being played by this key
    bool isVoiceOver; // Offset: 0x48

}; // Size: 0x50
