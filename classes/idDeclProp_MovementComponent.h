struct idDeclProp_MovementComponent : idDeclProp_ThinkComponent
{
    struct oribitMovement_t
    {
        // offset the up direction by this amount. {{ units = m }}
        float orbitHeight; // Offset: 0x0

        // blah {{ units = m }}
        idVec3 orbitX; // Offset: 0x4

        // blah {{ units = m }}
        idVec3 orbitY; // Offset: 0x10

        // blah {{ units = m }}
        idVec3 orbitZ; // Offset: 0x1C

        // How fast we orbit around.
        float orbitFrequency; // Offset: 0x28

    }; // Size: 0x2C

    struct attractMovement_t
    {
        // unit's per second move speed {{ units = m / s }}
        float attractSpeed; // Offset: 0x0

        // How far away do we start attracting. {{ units = m }}
        float attractRadius; // Offset: 0x4

        // Distance under which we just teleport the entity to the target
        float cheatBufferRadius; // Offset: 0x8

        // How long before they attract.
        idTypesafeTime < int , millisecondUnique_t , 1000 > attractDelayMS; // Offset: 0xC

        // Always attract regardless of radius
        idTypesafeTime < int , millisecondUnique_t , 1000 > popupUpdateMS; // Offset: 0x10

        // attract to darklord AI instead of players
        bool attactToDarklordAI; // Offset: 0x14

    }; // Size: 0x18

    struct bobMovement_t
    {
        // unit's per second move speed {{ units = 1 / s }}
        float bobSpeed; // Offset: 0x0

        // z height of bob {{ units = m }}
        float bobHeight; // Offset: 0x4

        // the height to add to the owner. {{ units = m }}
        float bobInitialHeight; // Offset: 0x8

    }; // Size: 0xC

    struct rotateMovement_t
    {
        // radians per frame?
        float rotateSpeed; // Offset: 0x0

    }; // Size: 0x4

    // ============================================= oribitMovement_t =============================================
    idDeclProp_MovementComponent::oribitMovement_t orbitMovement; // Offset: 0xD0

    // ============================================= attractMovement_t =============================================
    idDeclProp_MovementComponent::attractMovement_t attactMovement; // Offset: 0xFC

    // ============================================= bobMovement_t =============================================
    idDeclProp_MovementComponent::bobMovement_t bobMovement; // Offset: 0x114

    // ============================================= rotateMovement_t =============================================
    idDeclProp_MovementComponent::rotateMovement_t rotateMovement; // Offset: 0x120

    // entity height offset {{ units = m }}
    float heightOffset; // Offset: 0x124

    // Does this object orbit the user?
    bool orbits; // Offset: 0x128

    // Does this object attract to user?
    bool attraction; // Offset: 0x129

    // bobs ala Q3
    bool bobs; // Offset: 0x12A

    // rotates ala Quake3
    bool rotates; // Offset: 0x12B

}; // Size: 0x130
