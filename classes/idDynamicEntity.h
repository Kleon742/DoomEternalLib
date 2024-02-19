struct idDynamicEntity : idBloatedEntity
{
    struct entRefCount_t
    {
        idSpawnId spawnId; // Offset: 0x0

        int count; // Offset: 0x4

    }; // Size: 0x8

    idStaticList < idDynamicEntity::entRefCount_t , 16 , false , TAG_IDLIST > entRefCount; // Offset: 0xB88

    // added to whatever is in clipmodel's material
    contentsFlags_t extraContentsFlags; // Offset: 0xC20

    // params to initialize the dynamic move component
    dynamicMoveInit_t dynamicMoveParms; // Offset: 0xC28

    // whether the dynamic move is active for this entity
    bool dynamicMoveActive; // Offset: 0x0

    // if true, turns off all AAS that it's on top of. Ideally, this is placed on top of an AAS area that matches the entity's footprint ( i.e an AAS obstacle ).
    bool blocksAAS; // Offset: 0x0

    // if true, AI can't be placed/spawned in/on/near this object.
    bool blocksAI; // Offset: 0x0

    // if true, demon players do not collide with this entity
    bool demonPlayersPassThrough; // Offset: 0x0

    // if true, this entity should NOT be confused with a cylindrical wall climb object -- treat it as a flat wall climb surface
    bool isNotACylindricalWallClimb; // Offset: 0x0

    // if true, any wall normal that faces towards the center of the dynamic entity is ignored. (not considered a valid wall climb)
    bool ignoreWallClimbBackface; // Offset: 0x0

    // Allow demonplayer projectiles to pass through
    bool allowDemonplayerProjectilePassThrough; // Offset: 0x0

    // Allow owner's projectiles to pass through
    bool allowOwnerProjectilePassThrough; // Offset: 0x0

    bool active; // Offset: 0x0

    bool runGui; // Offset: 0x0

    bool inCustomJob; // Offset: 0x0

    idFadeHelper fade; // Offset: 0xC80

    int timesShowCalled; // Offset: 0xCA0

    int originalContentsFlags; // Offset: 0xCA4

    idDynamicMoveComponent* dynamicMoveComponent; // Offset: 0xCA8

    float boundsSize; // Offset: 0xCB0

    idManagedClassPtr < idDemonPlayer > damageDPOwner; // Offset: 0xCB8

    idManagedClassPtr < idPlayer > damageOwner; // Offset: 0xCD8

}; // Size: 0xCF8
