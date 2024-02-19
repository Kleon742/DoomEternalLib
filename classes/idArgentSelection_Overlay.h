struct idArgentSelection_Overlay : idMenuElement
{
    idSWFWidget_ArgentCell* argentInfo; // Offset: 0x100

    // Button for installing.
    idSWFWidget_Button_CommandBar* actionButton; // Offset: 0x108

    swfPlatform_t currentPlatform; // Offset: 0x110

    idDeclPerk* selectedSuitUpgrade; // Offset: 0x118

    idDeclPerk* selectedSuitMastery; // Offset: 0x120

    idTypesafeTime < int , millisecondUnique_t , 1000 > selectTime; // Offset: 0x128

}; // Size: 0x130
