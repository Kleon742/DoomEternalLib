struct idDossier_Arsenal : idMenuElement
{
    enum screenCommand_dossierArsenal_t : int
    {
        COMMAND_DOSSIER_ARSENAL_SHOW_WEAPON_CUSTOMIZATION = 0,
        COMMAND_DOSSIER_ARSENAL_SHOW_SKIN_CUSTOMIZATION = 1,
        COMMAND_DOSSIER_ARSENAL_SWAP_MOD = 2,
        COMMAND_DOSSIER_ARSENAL_UNEQUIP_MOD = 3,
        COMMAND_DOSSIER_ARSENAL_WEAPON_ACTION = 4,
        COMMAND_DOSSIER_ARSENAL_MOD_ACTION = 5,
        COMMAND_DOSSIER_ARSENAL_SKIN_ACTION = 6,
        COMMAND_DOSSIER_ARSENAL_UPGRADE_ACTION = 7,
        COMMAND_DOSSIER_ARSENAL_MASTERY_ACTION = 8,
        COMMAND_DOSSIER_ARSENAL_PURCHASE_FAILED_ACTION = 9,
        COMMAND_DOSSIER_ARSENAL_CLEAR_SKIN = 10
    };

    idSWFWidget_TabList* weaponTabList; // Offset: 0x100

    idSWFWidget_List* modList; // Offset: 0x108

    idSWFWidget_List* upgradeList; // Offset: 0x110

    idSWFWidget_SectionList* skinsList; // Offset: 0x118

    idSWFWidget_Button_Mastery* mastery; // Offset: 0x120

    idSWFWidget_Button* backButton; // Offset: 0x128

    idSWFWidget* previousFocus; // Offset: 0x130

    idSWFWidget_WeaponWheelCustomization* weaponWheel; // Offset: 0x138

    idSWFWidget* skinCustomization; // Offset: 0x140

    idSWFWidget_Model* model; // Offset: 0x148

    idList < const idDeclWeapon * , TAG_IDLIST , false > weaponDecls; // Offset: 0x150

    idList < idSWFWidget_Button_Weapon * , TAG_IDLIST , false > weaponButtons; // Offset: 0x168

    // Data
    idList < idSWFWidget * , TAG_IDLIST , false > focusStack; // Offset: 0x180

    idList < dossierWeaponInfo_t , TAG_IDLIST , false > weaponInfo; // Offset: 0x198

    int weaponPoints; // Offset: 0x1B0

    int masteryPoints; // Offset: 0x1B4

    swfPlatform_t currentPlatform; // Offset: 0x1B8

    idSWFSpriteInstance* prePopupSprite; // Offset: 0x1C0

    idDeclPerk* popupPerk; // Offset: 0x1C8

    hudNotificationType_t popupType; // Offset: 0x1D0

}; // Size: 0x1D8
