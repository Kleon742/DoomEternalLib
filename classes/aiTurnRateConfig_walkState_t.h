struct aiTurnRateConfig_walkState_t
{
    // walk states affected by this config
    idList < walkState_t , TAG_IDLIST , false > walkStates; // Offset: 0x0

    // config values
    aiTurnRateConfig_t config; // Offset: 0x18

}; // Size: 0x38
