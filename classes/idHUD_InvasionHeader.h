struct idHUD_InvasionHeader : idHUDElement
{
    idSWFWidget_InvasionUserInfo* slayerWidget; // Offset: 0xF8

    idArray < idSWFWidget_InvasionUserInfo * , 2 > invaderWidgets; // Offset: 0x100

    idHUDEvent_InvasionMatchInfoUpdate::matchInfo_t currentData; // Offset: 0x110

    idHUDEvent_InvasionMatchInfoUpdate::matchInfo_t previousData; // Offset: 0x438

    int currentSpectatePlayerNum; // Offset: 0x760

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeOverride; // Offset: 0x768

    bool timeOverrideActive; // Offset: 0x770

    bool hasShown; // Offset: 0x771

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > deactivateTime; // Offset: 0x778

}; // Size: 0x780
