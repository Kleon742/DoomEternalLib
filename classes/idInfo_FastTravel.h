struct idInfo_FastTravel : idInfo
{
    // The sort order of the warp point in the fast travel list
    int sortOrder; // Offset: 0xB90

    // The readable name displayed with the warp point
    idStrId readableName; // Offset: 0xB94

    // the map group containing the warp point
    automapMapGroupId_t mapGroup; // Offset: 0xB98

    // The image displayed with the warp point
    idMaterial2* image; // Offset: 0xBA0

    // sound to play on teleport start
    idSoundEvent* warpBegin; // Offset: 0xBA8

    // sound to loop while warping
    idSoundEvent* warpLoop; // Offset: 0xBB0

    // sound to play when the player arrives
    idSoundEvent* warpEnd; // Offset: 0xBB8

    // Time in milliseconds to play the warpBegin sound/FX before transitioning to warpLoop
    idTypesafeTime < int , millisecondUnique_t , 1000 > warpBeginTime; // Offset: 0xBC0

    // Time in milliseconds to play the warpEnd sound/FX after warpLoop
    idTypesafeTime < int , millisecondUnique_t , 1000 > warpEndTime; // Offset: 0xBC4

    // effects decl for full screen teleport effects: FX_PLAYER_FAST_TRAVEL_START, FX_PLAYER_FAST_TRAVEL_LOOP, FX_PLAYER_FAST_TRAVEL_STOP
    idDeclFX* fxDecl; // Offset: 0xBC8

    // for generating an impact texture at the origin point
    idDeclImpactEffect* impactDecl; // Offset: 0xBD0

}; // Size: 0xBD8
