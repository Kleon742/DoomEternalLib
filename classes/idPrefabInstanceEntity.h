struct idPrefabInstanceEntity
{
    int entityNameHash; // Offset: 0x0

    int newEntityNameHash; // Offset: 0x4

    // name of original entity in prefab map
    idStr entityName; // Offset: 0x8

    // name of instanced entity in this map
    idStr newEntityName; // Offset: 0x38

    // type info tree of changed properties
    idStr entityDiff; // Offset: 0x68

    idList < idPrefabInstancePrimitive * , TAG_IDLIST , false > primitives; // Offset: 0x98

    idList < idStr , TAG_IDLIST , false > groups; // Offset: 0xB0

    idList < idStr , TAG_IDLIST , false > layers; // Offset: 0xC8

    // relative to editor parent if entity has one {{ units = m }}
    idVec3 localPosition; // Offset: 0xE0

    // relative to editor parent if entity has one
    idQuat localRotation; // Offset: 0xEC

    // finalScale / ( prefabScale * originalScale )
    idVec3 localScale; // Offset: 0xFC

    bool overrideGroups; // Offset: 0x108

    bool overrideLayers; // Offset: 0x109

    bool deleted; // Offset: 0x10A

}; // Size: 0x110
