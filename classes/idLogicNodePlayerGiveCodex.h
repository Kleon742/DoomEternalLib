struct idLogicNodePlayerGiveCodex
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    idDeclCodexEntry* codexToGive; // Offset: 0x0

    int playerId; // Offset: 0x8

}; // Size: 0x10
