struct idMainMenu_Screen_Customize : idMenuElement
{
    enum screenState_t : int
    {
        FRONT = 0,
        CATEGORY = 1,
        PLAYER_BADGE = 2
    };

    idMainMenu_Screen_Customize::screenState_t state; // Offset: 0x100

    idMainMenu_Screen_Customize::screenState_t nextState; // Offset: 0x104

    idSWFWidget_SectionList* optionsList; // Offset: 0x108

    idSWFWidget_SectionList* cosmeticsList; // Offset: 0x110

    idSWFWidget_DropDownList* dropDownList; // Offset: 0x118

    idSWFWidget_StaticGrid* badgeIconGrid; // Offset: 0x120

    idSWFWidget_StaticGrid* badgeTitleGrid; // Offset: 0x128

    idSWFWidget_SectionList* setItemsList; // Offset: 0x130

    idSWFWidget_Customization_UnlockInfo* unlockInfo; // Offset: 0x138

    idSWFWidget_Text* descText; // Offset: 0x140

    // Telemetry
    customizeScreenData_t customizeScreenData; // Offset: 0x148

    customizeCharacterScreenData_t customizeCharacterScreenData; // Offset: 0x178

    idList < const idDeclPlayableCharacter * , TAG_IDLIST , false > characterList; // Offset: 0x258

    idArray < idList < const idDeclWarehouseItem * > , 16 > cosmetics; // Offset: 0x270

    idDeclWarehouseItem* activeSkybox; // Offset: 0x3F0

    int selectedSkyBoxIndex; // Offset: 0x3F8

    idDeclPlayableCharacter* accountEquippedCharacter; // Offset: 0x400

    // This list is built after a character is selected (only slayer shows weapon skins).
    idList < warehouseItemClass_t , TAG_IDLIST , false > tabTypes; // Offset: 0x408

    idDeclPlayableCharacter* selectedCharacter; // Offset: 0x420

    idDeclUIWeapon* selectedWeapon; // Offset: 0x428

    idDeclUIWeapon* pendingSelectedWeapon; // Offset: 0x430

    bool isCustomizingProfile; // Offset: 0x438

    bool doNotUpdateCamera; // Offset: 0x439

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > previousTime; // Offset: 0x440

    // Weapon Zoom + Rotation variables
    idVec3 initialCameraPos; // Offset: 0x448

    float zoomDistance; // Offset: 0x454

    // In degrees
    float currentRotation; // Offset: 0x458

    float rstickValue; // Offset: 0x45C

    float lTriggerValue; // Offset: 0x460

    float rTriggerValue; // Offset: 0x464

    bool rmbDown; // Offset: 0x468

    int mouseMoveX; // Offset: 0x46C

    bool hasProgressableSet; // Offset: 0x470

    bool isGoingBack; // Offset: 0x471

    bool collectionsTab; // Offset: 0x472

    int dropDownCmdActionID; // Offset: 0x474

}; // Size: 0x478
