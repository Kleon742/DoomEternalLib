struct aiTurnRateConfig_animWeb_t
{
    // anim web states affected by this config
    idList < idAnimWebPath , TAG_IDLIST , false > animWebStates; // Offset: 0x0

    // config values
    aiTurnRateConfig_t config; // Offset: 0x18

}; // Size: 0x38
