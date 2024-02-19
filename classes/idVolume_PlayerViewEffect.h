struct idVolume_PlayerViewEffect : idVolume
{
    enum viewEffectType_t : int
    {
        VIEW_FLASH = 0,
        VIEW_SCREEN_EFFECT = 1,
        VIEW_SCREEN_PARTICLE = 2
    };

    // time in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0xC20

    // how long to fade out the effect after entity leaves the volume (in ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeOutTime; // Offset: 0xC24

    // what type of player view effect to apply
    idVolume_PlayerViewEffect::viewEffectType_t viewEffectType; // Offset: 0xC28

    // fx decl
    idDeclFX* fxDecl; // Offset: 0xC30

}; // Size: 0xC38
