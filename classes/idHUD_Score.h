struct idHUD_Score : idHUDElement
{
    idSWFWidget_CorruptionMeter* corruptionMeter; // Offset: 0xF8

    int score; // Offset: 0x100

    int combatPercentage; // Offset: 0x104

    int slayerGatePercentage; // Offset: 0x108

    int secretEncounterPercentage; // Offset: 0x10C

    int bossCombatPercentage; // Offset: 0x110

    int lastDisplayedWeaponPoints; // Offset: 0x114

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > notificationStartTime; // Offset: 0x118

}; // Size: 0x120
