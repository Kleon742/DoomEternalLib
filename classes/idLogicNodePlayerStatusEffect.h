struct idLogicNodePlayerStatusEffect
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    idDeclStatusEffect* statusEffect; // Offset: 0x0

    int playerId; // Offset: 0x8

    idTypesafeTime < int , millisecondUnique_t , 1000 > effectTime; // Offset: 0xC

    bool refreshEffect; // Offset: 0x10

}; // Size: 0x18
