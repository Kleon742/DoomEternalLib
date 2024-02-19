struct idLogicNodePlayerToggleBodyReaction
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_ENABLE = 1,
        OUTPUT_ACTIVATE = 2
    };

    idPlayerBodyReactionType_t reactionType; // Offset: 0x0

}; // Size: 0x4
