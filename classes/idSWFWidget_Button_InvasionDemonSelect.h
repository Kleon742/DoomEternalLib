struct idSWFWidget_Button_InvasionDemonSelect : idSWFWidget_GridButton
{
    idDeclActorModifier* decl; // Offset: 0x2A8

    swfSoundType_t selectSound; // Offset: 0x2B0

    swfSoundType_t deselectSound; // Offset: 0x2B4

    int localPlayerIndex; // Offset: 0x2B8

    bool playerSelected[2]; // Offset: 0x2BC

}; // Size: 0x2C0
