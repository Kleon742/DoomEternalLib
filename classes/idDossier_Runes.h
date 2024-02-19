struct idDossier_Runes : idMenuElement
{
    idList < idSWFWidget_Button_RuneSlot * , TAG_IDLIST , false > runeButtons; // Offset: 0x100

    idList < idSWFWidget_Button_RuneSlot * , TAG_IDLIST , false > runeSlotButtons; // Offset: 0x118

    idSWFWidget_DynamicList* slotList; // Offset: 0x130

    idSWFWidget_Button_RuneSlot* supportSlot; // Offset: 0x138

    idSWFWidget_DynamicGrid* runeGrid; // Offset: 0x140

    idSWFWidget_DynamicList* supportRuneList; // Offset: 0x148

    idSWFWidget_Button_CommandBar* purchaseButton; // Offset: 0x150

    idSWFWidget_Button_RuneSlot* selectingWidget; // Offset: 0x158

    bool selectingSlot; // Offset: 0x160

    bool showSupportRunes; // Offset: 0x161

    int runeUpgradePoints; // Offset: 0x164

    swfPlatform_t currentPlatform; // Offset: 0x168

}; // Size: 0x170
