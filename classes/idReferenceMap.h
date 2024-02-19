struct idReferenceMap : idBloatedEntity
{
    // the reference/prefab map name
    idStrMapName mapname; // Offset: 0xB88

    // these layers will be added onto of anything placed or spawned in this reference map
    idList < const idDeclLayer * , TAG_IDLIST , false > layers; // Offset: 0xBB8

    // place the reference map's origin at 0,0,0 and orientation to identity regardless of this entity's world position
    bool zeroTransform; // Offset: 0xBD0

}; // Size: 0xBD8
