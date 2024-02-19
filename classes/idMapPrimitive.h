struct idMapPrimitive : idMapGroups
{
    enum mapPrimitive_t : int
    {
        TYPE_INVALID = -1,
        TYPE_BRUSH = 0,
        TYPE_REFERENCE = 1
    };

    idMapPrimitive::mapPrimitive_t type; // Offset: 0x20

    idHandle < int , invalidMapPrimitiveHandle_t , INVALID_MAP_PRIMITIVE_HANDLE > handle; // Offset: 0x24

}; // Size: 0x28
