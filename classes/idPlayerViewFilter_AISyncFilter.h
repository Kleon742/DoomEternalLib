struct idPlayerViewFilter_AISyncFilter : idPlayerViewFilter_Base
{
    // distance of the radar.
    float distance; // Offset: 0x10

    // distance upgrade of the radar.
    float distanceUpgrade; // Offset: 0x14

    // Do we use long range importance?
    bool longRange; // Offset: 0x18

    // entity player doing the syncs.
    idPlayer* playerEnt; // Offset: 0x20

    // filter for FOV
    float fovFilter; // Offset: 0x28

    bool isChainsawSync; // Offset: 0x2C

}; // Size: 0x30
