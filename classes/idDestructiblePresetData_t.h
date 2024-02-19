struct idDestructiblePresetData_t
{
    struct angelWingsData_t
    {
        // limit the direction to these angles.
        idAngles limitAngles; // Offset: 0x0

        // Randomly Change direction, instead of positional based.
        bool changeDirRandomly; // Offset: 0xC

        // calculate the angel wings from the owner data rather than external impulses
        bool inheritParentTransform; // Offset: 0xD

    }; // Size: 0x10

    struct coneData_t
    {
        // limit the direction to these angles.
        idAngles limitAngles; // Offset: 0x0

    }; // Size: 0xC

    // preset to use.
    impulsePreset_t preset; // Offset: 0x0

    // min amount of force to apply. ( newtons )
    float minForce; // Offset: 0x4

    // min amount of force to apply. ( newtons )
    float maxForce; // Offset: 0x8

    // Data for Angel Wings.
    idDestructiblePresetData_t::angelWingsData_t angelWingsData; // Offset: 0xC

    // Data specifically for cone type.
    idDestructiblePresetData_t::coneData_t coneData; // Offset: 0x1C

    // data for going through square
    throughSquareData_t throughSquare; // Offset: 0x28

    // data for sphere gore
    sphereGoreData_t sphereData; // Offset: 0x40

}; // Size: 0x44
