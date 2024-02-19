struct idTest_MetaData_MoveableSpheres : idBloatedEntity
{
    struct sphere_t
    {
        // center point of sphere
        idVec3 center; // Offset: 0x0

        // radius of sphere
        float radius; // Offset: 0xC

    }; // Size: 0x10

    // spheres to draw
    idList < idTest_MetaData_MoveableSpheres::sphere_t , TAG_IDLIST , false > spheres; // Offset: 0xB88

}; // Size: 0xBA0
