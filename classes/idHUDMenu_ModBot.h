struct idHUDMenu_ModBot : idMenuElement
{
    idHUDEvent_ModBotUpdate::modbotinfo_t currentData; // Offset: 0x100

    idSWFWidget_TabList* weaponTabList; // Offset: 0x188

    idSWFWidget_List* modList; // Offset: 0x190

    idSWFWidget_Model* model; // Offset: 0x198

    swfPlatform_t currentPlatform; // Offset: 0x1A0

    idList < idSWFWidget_Button_Weapon * , TAG_IDLIST , false > weaponButtons; // Offset: 0x1A8

    idDeclWeapon* selectedWeapon; // Offset: 0x1C0

    idPerkFamily* selectedMod; // Offset: 0x1C8

    idTypesafeTime < int , millisecondUnique_t , 1000 > selectTime; // Offset: 0x1D0

    idSWFSpriteInstance* prePopupSprite; // Offset: 0x1D8

}; // Size: 0x1E0
