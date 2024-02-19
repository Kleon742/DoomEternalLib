struct idHavokShape
{
    struct options_t
    {
        bool skipWaterPoints; // Offset: 0x0

        int additionalContents; // Offset: 0x4

        int maskedContents; // Offset: 0x8

    }; // Size: 0xC

    hknpShape* shape; // Offset: 0x0

    // List of all the shapeData for this shape. For simple shapes there is only one but for compound shapes there will be one for each shape. If there is a triangle mesh with several materials on them, this list will contain a shapeData for each material as well.
    idList < havokShapeData_t , TAG_HAVOK , false > shapeData; // Offset: 0x8

    int materialsResolved; // Offset: 0x20

    interlockedInt_t referenceCount; // Offset: 0x24

    idList < idVec4 , TAG_WATER , false > waterPoints; // Offset: 0x28

    float volume; // Offset: 0x40

    char* debugName; // Offset: 0x48

    // This value can be used in combination with conditional break-points to aid debugging. Not referenced anywhere in the code except for initialization
    unsigned int debugValue; // Offset: 0x50

}; // Size: 0x58
