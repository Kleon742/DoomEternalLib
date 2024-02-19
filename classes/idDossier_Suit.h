struct idDossier_Suit : idMenuElement
{
    // number of praetor points the player has
    int praetorPoints; // Offset: 0x100

    // Wheel of progression.
    idSWFWidget_ProgressionWheel* progressionWheel; // Offset: 0x108

    // panel of info.
    idSWFWidget_ArgentCell* argentCellPanel; // Offset: 0x110

    // Button for installing.
    idSWFWidget_Button_CommandBar* actionButton; // Offset: 0x118

    idDeclPerk* popupPerk; // Offset: 0x120

    idSWFSpriteInstance* prePopupSprite; // Offset: 0x128

    swfPlatform_t currentPlatform; // Offset: 0x130

}; // Size: 0x138
