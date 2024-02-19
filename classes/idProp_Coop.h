struct idProp_Coop : idBloatedEntity
{
    enum solidState_t : int
    {
        NO_CHANGE = 0,
        CHANGE_TO_SOLID = 1,
        CHANGE_TO_UNSOLID = 2
    };

    bool isCurrentlySolid; // Offset: 0xB88

    idProp_Coop::solidState_t solidChangeThisFrame; // Offset: 0xB8C

    // index of the blocked volume that this prop has generated
    int blockedVolumeIndex; // Offset: 0xB90

    // Whether or not this prop will affect (cut) the flight volumes in the level
    bool affectsFlightVolumes; // Offset: 0xB94

    // if true - will be a dynamic obstacle on the AAS.
    bool dynamicObstacle; // Offset: 0xB95

    // if true, prop will be visible at start of map
    bool showOnStart; // Offset: 0xB96

    // if true, prop will be solid, otherwise will have no collision
    bool isSolid; // Offset: 0xB97

    // if true, prop will make sure contents_solid is set on spawn
    bool forceContentSolidOnSpawn; // Offset: 0xB98

    // if true, will show fx on spawn
    bool showFX; // Offset: 0xB99

    // the state of the props FX
    bool fxEnabled; // Offset: 0xB9A

    // the fx decl
    idDeclFX* fxDecl; // Offset: 0xBA0

}; // Size: 0xBA8
