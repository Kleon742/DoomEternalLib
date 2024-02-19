struct idDeclAudioLogStory : idGameDeclTypeInfo
{
    // The display name of the audio log story line.
    idStrId storyName; // Offset: 0x90

    // The list of audio logs ( IN ORDER ) for the story line.
    idList < idDeclAudioLog * , TAG_IDLIST , false > logs; // Offset: 0x98

}; // Size: 0xB0
