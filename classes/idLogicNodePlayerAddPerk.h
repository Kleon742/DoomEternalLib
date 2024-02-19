struct idLogicNodePlayerAddPerk
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_BOOL = 2
    };

    idDeclPerk* declPerk; // Offset: 0x0

    int playerNum; // Offset: 0x8

}; // Size: 0x10
