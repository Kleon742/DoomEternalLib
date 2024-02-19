struct idHUDMenu_Death : idMenuElement
{
    idSWFWidget_List* options; // Offset: 0x100

    idSWFWidget_Button* btnLoadCheckpoint; // Offset: 0x108

    idSWFWidget_Button* btnLoadCheckpointEasy; // Offset: 0x110

    idSWFWidget_Button* btnStartOver; // Offset: 0x118

    idSWFWidget_Button* btnExit; // Offset: 0x120

    idSWFWidget_Button* btnSentinelArmor; // Offset: 0x128

    idSWFWidget_Button* btnRestartMission; // Offset: 0x130

    idSWFWidget_SentinelArmorPopup* sentinelArmorPopup; // Offset: 0x138

    idSWFWidget_InvasionSlayerResults* invasionPopup; // Offset: 0x140

    idSWFWidget_UltraNightmareDeath* ultraNightmareDeath; // Offset: 0x148

    bool waitingOnSave; // Offset: 0x150

    bool clearSoundStateOnHide; // Offset: 0x151

    idDeferredFuncList deferred; // Offset: 0x158

    idSoundWwiseID playerDeathGroup; // Offset: 0x1A0

    idSoundWwiseID playerAlive; // Offset: 0x1A4

    idSoundWwiseID playerDeath; // Offset: 0x1A8

}; // Size: 0x1B0
