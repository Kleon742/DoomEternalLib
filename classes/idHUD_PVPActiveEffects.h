struct idHUD_PVPActiveEffects : idHUDElement
{
    idArray < idSWFWidget_EffectInformation * , 5 > activeEffects; // Offset: 0xF8

    idHUDEvent_MatchInfoUpdate::matchInfo_t currentData; // Offset: 0x120

    idHUDEvent_MatchInfoUpdate::matchInfo_t previousData; // Offset: 0x620

}; // Size: 0xB20
