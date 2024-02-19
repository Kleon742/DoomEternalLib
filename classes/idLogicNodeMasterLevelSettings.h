struct idLogicNodeMasterLevelSettings
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_DISABLE_SLAYER_GATE = 2
    };

    // disable slayer gate access
    bool disableSlayerGate; // Offset: 0x0

    int playerNum; // Offset: 0x4

    idDeclDevInvLoadout* loadoutDecl; // Offset: 0x8

}; // Size: 0x10
