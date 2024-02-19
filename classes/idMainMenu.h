struct idMainMenu
{
    struct idSWFScriptFunction_MainMenu_GoToMenu : idSWFScriptFunction_RefCounted
    {
        mainMenuElementID_t screenID; // Offset: 0xC0

        menuTransitionType_t transition; // Offset: 0xC4

        idSWF* swf; // Offset: 0xC8

        swfSoundType_t sound; // Offset: 0xD0

    }; // Size: 0xD8

    bool characterOnScreen; // Offset: 0x10

    idProxyPtr < idMainMenu > proxyPtr; // Offset: 0x18

    idDeferredFuncList deferred; // Offset: 0x20

    shellState_t state; // Offset: 0x68

    shellState_t nextState; // Offset: 0x6C

    idMenu* menu; // Offset: 0x70

    renderView_t view; // Offset: 0x80

    idModelViewCamera camera; // Offset: 0x9F0

    idStr currentCameraEntityName; // Offset: 0xB60

    idDeclMapLoad* selectedMasterLevelMapLoad; // Offset: 0xB90

    idDeclMasterLevelInfo* selectedMasterLevel; // Offset: 0xB98

    idDeclMasterLevelMissionSelectInfo* selectedMasterLevelMission; // Offset: 0xBA0

    idSWF* testGui; // Offset: 0xBA8

    idRenderModelGui* testGuiModel; // Offset: 0xBB0

    bool renderResourcesInitialized; // Offset: 0xBB8

    int newGameDifficulty; // Offset: 0xBBC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTime; // Offset: 0xBC0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastValidationUpdateTime; // Offset: 0xBC8

    mainMenuElementID_t desiredReturnScreenID; // Offset: 0xBD0

    idDeclCampaign* desiredReturnCampaign; // Offset: 0xBD8

    bool failedToApplySettings; // Offset: 0xBE0

    bool offeredOnlinePrivileges; // Offset: 0xBE1

    bool waitingForMPServers; // Offset: 0xBE2

    bool needToSetInitialSlot; // Offset: 0xBE3

    bool saveProfileOnSlotLoad; // Offset: 0xBE4

    bool resetProfileOnDeleteAllComplete; // Offset: 0xBE5

    bool musicActivated; // Offset: 0xBE6

    bool musicInitialized; // Offset: 0xBE7

    bool isFirstActivation; // Offset: 0xBE8

    // ------------------------ Shell UI Walkthrough Manager ------------------------
    idUIWalkthroughManager_Shell* shellWalkthroughManager; // Offset: 0xBF0

    managedPtrMenuContainer < idTarget_PodiumSpawn > podiumEntity; // Offset: 0xBF8

    managedPtrMenuContainer < idAnimatedEntity > characterEntity; // Offset: 0xC20

    managedPtrMenuContainer < idAnimatedEntity > weaponEntity; // Offset: 0xC48

    managedPtrMenuContainer < idEntityFx > fancyFXEntity; // Offset: 0xC70

    // The character the local player has visible in the menu
    idDeclPlayableCharacter* visibleCharacter; // Offset: 0xC98

    idAnimator_Channel* characterAnimator; // Offset: 0xCA0

    accountEquippedSet_t friendCharacterSet; // Offset: 0xCA8

    bool viewFriendEquipped; // Offset: 0xCD8

    bool forceCharacterPodiumUpdate; // Offset: 0xCD9

    characterEquippedSet_t previewCharacterSet; // Offset: 0xCE0

    weaponSkinSet_t previewWeaponSet; // Offset: 0xD18

    idDeclWarehouseItem* previewCurrentItem; // Offset: 0xD60

    idDeclWarehouseItem* viewingSet; // Offset: 0xD68

    // Should only be WIC_CHARACTER_SKIN or WIC_WEAPON_SKIN and only set if m_previewCurrentItem is NULL
    warehouseItemClass_t previewDefaultItemClass; // Offset: 0xD70

}; // Size: 0xD80
