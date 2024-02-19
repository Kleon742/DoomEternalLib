struct idLogicNodePlayerBecomeDemon
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    idDeclActorModifier* actorModifier; // Offset: 0x0

    int playerId; // Offset: 0x8

    bool delayDemonTransform; // Offset: 0xC

}; // Size: 0x10
