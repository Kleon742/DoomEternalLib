struct idHUDMenu_Rune : idMenuElement
{
    idHUDEvent_ModBotUpdate::modbotinfo_t currentData; // Offset: 0x100

    idList < idSWFWidget_Button_RuneSlot * , TAG_IDLIST , false > runeButtons; // Offset: 0x188

    idList < idSWFWidget_Button_RuneSlot * , TAG_IDLIST , false > runeSlotButtons; // Offset: 0x1A0

    idSWFWidget_DynamicList* slotList; // Offset: 0x1B8

    idSWFWidget_DynamicGrid* runeGrid; // Offset: 0x1C0

    idSWFWidget_DynamicList* supportRuneList; // Offset: 0x1C8

    idSWFWidget* supportSlot; // Offset: 0x1D0

    idSWFWidget_Button_CommandBar* purchaseButton; // Offset: 0x1D8

    bool isSupportRune; // Offset: 0x1E0

    swfPlatform_t currentPlatform; // Offset: 0x1E4

    idDeclPerk* selectedRune; // Offset: 0x1E8

    idTypesafeTime < int , millisecondUnique_t , 1000 > selectTime; // Offset: 0x1F0

}; // Size: 0x1F8
