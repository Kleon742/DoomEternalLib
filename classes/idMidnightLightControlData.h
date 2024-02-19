struct idMidnightLightControlData
{
    enum lightFlag_t : int
    {
        LIGHT_NONE = 0,
        LIGHT_MUTE = 1
    };

    struct lightEntry_t
    {
        // Flags specifying how the light should be controlled
        unsigned int flags; // Offset: 0x0

        // Intensity scale
        float intensityScale; // Offset: 0x4

        // Light color override. Black == no override
        idColor color; // Offset: 0x8

        // The name of the light entity
        idAtomicString entity; // Offset: 0x18

    }; // Size: 0x20

    // Light to solo.
    idAtomicString soloLight; // Offset: 0x0

    // List of lights to mute or not.
    idList < idMidnightLightControlData::lightEntry_t , TAG_IDLIST , false > lightEntries; // Offset: 0x8

}; // Size: 0x20
