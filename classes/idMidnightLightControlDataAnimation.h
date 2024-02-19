struct idMidnightLightControlDataAnimation
{
    struct key_t
    {
        float end; // Offset: 0x0

        idMidnightLightControlData data; // Offset: 0x8

    }; // Size: 0x28

    idList < float , TAG_IDLIST , false > keyTimes; // Offset: 0x0

    idList < idMidnightLightControlDataAnimation::key_t , TAG_IDLIST , false > keys; // Offset: 0x18

}; // Size: 0x30
