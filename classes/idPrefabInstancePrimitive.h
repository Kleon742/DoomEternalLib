struct idPrefabInstancePrimitive
{
    // handle of primitive in prefab map
    idHandle < int , invalidMapPrimitiveHandle_t , INVALID_MAP_PRIMITIVE_HANDLE > primitiveHandle; // Offset: 0x0

    // data that overrides primitive
    idStr primitiveOverride; // Offset: 0x8

    idList < idStr , TAG_IDLIST , false > groups; // Offset: 0x38

    bool overrideGroups; // Offset: 0x50

    bool deleted; // Offset: 0x51

}; // Size: 0x58
