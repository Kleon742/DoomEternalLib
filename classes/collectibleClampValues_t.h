struct collectibleClampValues_t
{
    // min distance to entity player can zoom
    float minZoomValue; // Offset: 0x0

    // max distance from entity player can zoom
    float maxZoomValue; // Offset: 0x4

    // min yaw rotation
    float minYawValue; // Offset: 0x8

    // max yaw rotation
    float maxYawValue; // Offset: 0xC

    // min pitch rotation
    float minPitchValue; // Offset: 0x10

    // max pitch rotation
    float maxPitchValue; // Offset: 0x14

    // min up distance from center
    float minUpValue; // Offset: 0x18

    // max up distance from center
    float maxUpValue; // Offset: 0x1C

}; // Size: 0x20
