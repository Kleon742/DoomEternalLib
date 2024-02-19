struct idTarget_PlayerViewEffect : idTarget
{
    enum viewEffectType_t : int
    {
        VIEW_FLASH = 0,
        VIEW_SCREEN_EFFECT = 1
    };

    struct screenEffect_t
    {
        // material to use for the screen effect
        idMaterial2* material; // Offset: 0x0

        // width of screen effect
        float width; // Offset: 0x8

        // height of screen effect
        float height; // Offset: 0xC

        // x offset for effect (-1 == random)
        float screenX; // Offset: 0x10

        // y offset for effect (-1 == random)
        float screenY; // Offset: 0x14

    }; // Size: 0x18

    // time in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0xB88

    // what type of player view effect to apply
    idTarget_PlayerViewEffect::viewEffectType_t viewEffectType; // Offset: 0xB8C

    // screen effect
    idTarget_PlayerViewEffect::screenEffect_t screenEffect; // Offset: 0xB90

}; // Size: 0xBA8
