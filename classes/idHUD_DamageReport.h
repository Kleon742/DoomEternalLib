struct idHUD_DamageReport : idHUDElement
{
    idSWFWidget_DamageReport_KillerInfo* killerInfo; // Offset: 0xF8

    idSWFWidget_DamageReport_List* reportEntryList; // Offset: 0x100

    idHUDEvent_PVPPlayerDamageReport::idPVPPlayerDamageReport_t cachedDamageReport; // Offset: 0x108

    bool killedByPlayer; // Offset: 0x7A0

    bool isShowing; // Offset: 0x7A1

    bool requestShow; // Offset: 0x7A2

}; // Size: 0x7A8
