struct idDeclGameItem : idGameDeclTypeInfo
{
    // This cosmetic customizes the playable character specified here
    idDeclPlayableCharacter* playableCharacter; // Offset: 0x90

    // The weapon the skin applies to
    idDeclWeaponRef targetWeapon; // Offset: 0x98

    // The target character model this skin applies to. Only needed for quick testing in-game.
    idStrRenderModel targetCharacterModel; // Offset: 0xA0

    // Box Art Render model.
    idStrRenderModel boxArt; // Offset: 0xA8

    // Box Art Image.
    idMaterial2* boxArtImage; // Offset: 0xB0

    // The new animation data to apply
    idAtomicHandleT < aliasRefType_t > animation; // Offset: 0xB8

    // Custom player profile icon shown near the level
    idMaterial2* profileIcon; // Offset: 0xC0

    // Custom player profile title background, the display name is used as the custom title string with this background
    idMaterial2* profileTitleBackground; // Offset: 0xC8

    // Custom FX to use when killing an opponent
    idDeclFX* opponentDeath; // Offset: 0xD0

    // third person skin data
    cosmeticSkinData_t thirdPersonSkinData; // Offset: 0xD8

    // first person skin data ( hands )
    cosmeticSkinData_t firstPersonSkinData; // Offset: 0x148

    // first person skin data ( hands for Ledge Grabs, GKs and such. )
    cosmeticSkinData_t tbBodySkinData; // Offset: 0x1B8

    // skin data for cinematics
    cosmeticSkinData_t cinematicSkinData; // Offset: 0x228

    // skin data for podium
    cosmeticSkinData_t podiumSkinData; // Offset: 0x298

    // weapon person skin data
    cosmeticSkinData_t weaponSkinData; // Offset: 0x308

    // first person skin data ( equipment launcher )
    cosmeticSkinData_t firstPersonEquipmentSkinData; // Offset: 0x378

    // third person skin data ( equipment launcher )
    cosmeticSkinData_t thirdPersonEquipmentSkinData; // Offset: 0x3E8

    // Podium data
    podiumData_t podiumData; // Offset: 0x458

    // Custom cosmetic gore type to use
    idAtomicString cosmeticGoreType; // Offset: 0x490

    // definition of the map to load as item
    idDeclMapLoad* mapLoadDef; // Offset: 0x498

    // data about gating this item
    usageGate_t useageGating; // Offset: 0x4A0

    // The photo mode pose data
    cosmeticPoseData_t poseData; // Offset: 0x4A8

    // The skins that this item is exclusive to
    idList < const idDeclWarehouseItem * , TAG_IDLIST , false > exclusiveSkins; // Offset: 0x4E8

    // Skybox Reward
    idDeclShellSkybox* skyboxReward; // Offset: 0x500

    // The game item indicates that the helmet contains lights
    bool noHelmetLights; // Offset: 0x508

    // alternate intro scene to use
    idDeclMidnightSceneRef alternateIntroScene; // Offset: 0x510

    // alternate death of darklord scene to use
    idDeclMidnightSceneRef alternateDeathOfDarklordScene; // Offset: 0x518

}; // Size: 0x520
