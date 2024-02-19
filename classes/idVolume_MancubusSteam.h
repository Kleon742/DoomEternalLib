struct idVolume_MancubusSteam : idVolume_DamageOverTime
{
    enum cellStatus_t : int
    {
        CELLSTATUS_INVALID = 0,
        CELLSTATUS_EMPTY = 1,
        CELLSTATUS_BLOCKED = 2,
        CELLSTATUS_OCCUPIED = 3
    };

    struct childSpawnInfo_t
    {
        // which grid spot we're occupying
        idQuantizedVec3 cellId; // Offset: 0x0

        // where are we starting the los check from {{ units = m }}
        idVec3 losCheckPos; // Offset: 0x8

        // query to check los tohavok'd
        idHavokQueryId losClipQuery; // Offset: 0x18

        // los query succeeded
        bool losCheckSuccess; // Offset: 0x20

        // query to check contents tohavok'd
        idHavokQueryId contentsClipQuery; // Offset: 0x28

        // contents query succeeded
        bool contentsCheckSuccess; // Offset: 0x30

    }; // Size: 0x38

    struct entityTouchingChildren_t
    {
        // the entity in the child volume
        idManagedClassPtr < idEntity > entity; // Offset: 0x0

        // number of children he's touching
        int touchCount; // Offset: 0x20

    }; // Size: 0x28

    // Data parameters sound to play on Activation.
    idSoundEvent* activationSound; // Offset: 0xD18

    // sound to play for lifetime of volume.
    idSoundEvent* loopSound; // Offset: 0xD20

    // sound to play on Deactivation.
    idSoundEvent* deactivationSound; // Offset: 0xD28

    // entity def for the child volumes to spawn
    idDeclEntityDef* childEntityDef; // Offset: 0xD30

    // what's the size of the grid
    int childGridRadius; // Offset: 0xD38

    // what's the height of the grid
    int childGridHeight; // Offset: 0xD3C

    // how big is each child's space in the grid {{ units = m }}
    float childSize; // Offset: 0xD40

    // Run-time parameters whether we're fading out and shouldn't damage anything
    bool fadingOut; // Offset: 0xD44

    // entity that gets credit for putting this volume on the ground
    idManagedClassPtr < idEntity > activator; // Offset: 0xD48

    // data for building out the grid we'll traverse checking and filling with steam fx children our grid of cells and their status
    idList < idVolume_MancubusSteam::cellStatus_t , TAG_IDLIST , false > gridCellStatus; // Offset: 0xD68

    // point the steam starts from to fill out grid {{ units = m }}
    idVec3 gridCenterPoint; // Offset: 0xD80

    // center cell of grid coinciding with grideCenterPoint
    idQuantizedVec3 gridCenterCell; // Offset: 0xD8C

    // max size of grid
    idQuantizedVec3 gridSize; // Offset: 0xD92

    // info to help spawn a wave of children
    idStaticList < idVolume_MancubusSteam::childSpawnInfo_t , 128 , false , TAG_IDLIST > childSpawnList; // Offset: 0xD98

    // list of successfully spawned children
    idStaticList < idManagedClassPtr < idEntity > , 128 , false , TAG_IDLIST > childList; // Offset: 0x29B0

    // list of ref counted entities that are in our children
    idStaticList < idVolume_MancubusSteam::entityTouchingChildren_t , 32 , false , TAG_IDLIST > entitiesTouchingChildrenList; // Offset: 0x39C8

}; // Size: 0x3EE0
