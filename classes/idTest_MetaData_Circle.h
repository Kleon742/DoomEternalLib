struct idTest_MetaData_Circle : idBloatedEntity
{
    struct foo_t
    {
        // ugh...
        int skipMe; // Offset: 0x0

        // bar!
        float bar; // Offset: 0x4

    }; // Size: 0x8

    // range of the arcs
    float range; // Offset: 0xB88

    // field of view in yaw plane
    idTypesafeNumber < float , DegreesUnique_t > fovYaw; // Offset: 0xB8C

    // foo
    idTest_MetaData_Circle::foo_t foo; // Offset: 0xB90

}; // Size: 0xB98
