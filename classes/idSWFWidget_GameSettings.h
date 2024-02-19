struct idSWFWidget_GameSettings : idSWFWidget
{
    idSettingsDataSource_Game dataSource; // Offset: 0x180

    idSWFWidget_SettingsList* settingsList; // Offset: 0x1C8

    // GAMEPLAY
    idSWFWidget_Setting* difficulty; // Offset: 0x1D0

    idSWFWidget_Setting* gloryKillHighlight; // Offset: 0x1D8

    idSWFWidget_Setting* lootDropBrightness; // Offset: 0x1E0

    idSWFWidget_Setting* showTutorials; // Offset: 0x1E8

    idSWFWidget_Setting* demonBounty; // Offset: 0x1F0

    idSWFWidget_Setting* showPhotomode; // Offset: 0x1F8

    idSWFWidget_Setting* screenShake; // Offset: 0x200

    idSWFWidget_Setting* invasionFrequency; // Offset: 0x208

    idSWFWidget_Setting* showAITypeIcons; // Offset: 0x210

    idSWFWidget_Setting* showDmgNumbers; // Offset: 0x218

    idSWFWidget_Setting* dashStyle; // Offset: 0x220

    // WEAPON
    idSWFWidget_Setting* weaponAutoSwitchEmpty; // Offset: 0x228

    idSWFWidget_Setting* weaponAutoSwitchNew; // Offset: 0x230

    idSWFWidget_Setting* classicWeaponPose; // Offset: 0x238

    idSWFWidget_Setting* weaponBob; // Offset: 0x240

    // ACCESSIBILITY
    idSWFWidget_Setting* sentinelArmor; // Offset: 0x248

    idSWFWidget_Setting* gameHints; // Offset: 0x250

    idSWFWidget_Setting* autoWallClimb; // Offset: 0x258

    idSWFWidget_Setting* autoWallBreak; // Offset: 0x260

    idSWFWidget_Setting* autoGKWhenDashing; // Offset: 0x268

    idSWFWidget_Setting* autoSkipCutscene; // Offset: 0x270

    idSWFWidget_Setting* autoAttack; // Offset: 0x278

    idSWFWidget_Setting* autoCompletePuzzles; // Offset: 0x280

    idSWFWidget_Setting* puzzleTiming; // Offset: 0x288

    idSWFWidget_Setting* gameSpeed; // Offset: 0x290

    idSWFWidget_Setting* matchWithAccessibility; // Offset: 0x298

    bool showTutorialConfirmationDialog; // Offset: 0x2A0

}; // Size: 0x2A8
