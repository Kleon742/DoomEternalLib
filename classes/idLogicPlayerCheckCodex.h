struct idLogicPlayerCheckCodex
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_NONE = 1,
        OUTPUT_PLAYER_HAS = 2,
        OUTPUT_PLAYER_DOESNT_HAS = 3
    };

    idDeclCodexEntry* codexDecl; // Offset: 0x0

}; // Size: 0x8
