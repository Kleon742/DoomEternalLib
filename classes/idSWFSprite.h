struct idSWFSprite
{
    struct swfFrameLabel_t
    {
        idAtomicString frameLabel; // Offset: 0x0

        unsigned int frameNum; // Offset: 0x8

        int hash; // Offset: 0xC

    }; // Size: 0x10

    unsigned short frameCount; // Offset: 0x8

    // frameOffsets contains offsets into the commands list for each frame the first command for frame 3 is frameOffsets[2] and the last command is frameOffsets[3]
    idList < unsigned int , TAG_SWF , false > frameOffsets; // Offset: 0x10

    idList < idSWFSprite::swfFrameLabel_t , TAG_SWF , false > frameLabels; // Offset: 0x28

    idList < swfSpriteCommand_t , TAG_SWF , false > commands; // Offset: 0x40

    idHashIndex frameHashIndex; // Offset: 0x58

    // Used by AS2 only There can be multiple DoInitAction tags, and all need to be executed.
    idList < swfSpriteCommand_t , TAG_SWF , false > doInitActions; // Offset: 0x88

    idAtomicString className; // Offset: 0xA0

    idAtomicString classNameLower; // Offset: 0xA8

    bool hasNineSlice; // Offset: 0xB0

    swfRect_t nineSlice; // Offset: 0xB4

}; // Size: 0xC8
