struct idVolume_MancubusSteamFX : idVolume
{
    enum steamState_t : int
    {
        STEAMSTATE_INVALID = 0,
        STEAMSTATE_MOVING = 1,
        STEAMSTATE_STATIONARY = 2,
        STEAMSTATE_FADINGOUT = 3
    };

    // fx decl to use if this is from a friendly team
    idDeclFX* friendlyFxDecl; // Offset: 0xC20

    // fx decl to use if this is from a hostile team
    idDeclFX* hostileFxDecl; // Offset: 0xC28

    // time in milliseconds we should spend moving
    idTypesafeTime < int , millisecondUnique_t , 1000 > moveTimeMs; // Offset: 0xC30

    // how far we should try to move {{ units = m }}
    float moveDist; // Offset: 0xC34

    // our internal state
    idVolume_MancubusSteamFX::steamState_t steamState; // Offset: 0xC38

    // parent volume who owns us
    idVolume_MancubusSteam* parentVolume; // Offset: 0xC40

    // our cellId for the grid
    idQuantizedVec3 cellId; // Offset: 0xC48

    // interpolation for our movement {{ ___ts = m }}
    idInterpolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > movement; // Offset: 0xC50

    // deferred query to check ground to place a decal havok'd
    idHavokQueryId groundQuery; // Offset: 0xC98

    // result of last deferred query for ground
    trace_t groundTrace; // Offset: 0xCA0

}; // Size: 0xD20
