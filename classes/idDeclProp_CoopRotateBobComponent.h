struct idDeclProp_CoopRotateBobComponent : idDeclProp_ThinkComponent
{
    struct rotateMovement_t
    {
        // radians per frame?
        float rotateSpeed; // Offset: 0x0

    }; // Size: 0x4

    struct bobMovement_t
    {
        // unit's per second move speed {{ units = 1 / s }}
        float bobSpeed; // Offset: 0x0

        // z height of bob {{ units = m }}
        float bobHeight; // Offset: 0x4

    }; // Size: 0x8

    // ============================================= rotateMovement_t =============================================
    idDeclProp_CoopRotateBobComponent::rotateMovement_t rotateMovement; // Offset: 0xD0

    // ============================================= bobMovement_t =============================================
    idDeclProp_CoopRotateBobComponent::bobMovement_t bobMovement; // Offset: 0xD4

    // rotates ala Quake3
    bool rotates; // Offset: 0xDC

    // bobs ala Q3
    bool bobs; // Offset: 0xDD

    // only start bobbing and/or rotating after floor collision. If the prop runs physics you MUST use this if we're running prop2 think on jobs.
    bool bobAfterFloorCollision; // Offset: 0xDE

    // turn off gravity after collision
    bool noGravityAfterFloorCollision; // Offset: 0xDF

    // if true, will not bob below current position (used for dropped props that fall onto the floor). will only work if bobAfterFloorCollision is true
    bool bobUp; // Offset: 0xE0

    // entity height offset {{ units = m }}
    float heightOffset; // Offset: 0xE4

    // how fast to rise off the floor {{ units = m }}
    float firstFloorCollisionBobRate; // Offset: 0xE8

    // entity height offset after floor collision {{ units = m }}
    float floorCollisionOffset; // Offset: 0xEC

    // how fast to transition between levitate and bob
    float floorCollisionTransitionRate; // Offset: 0xF0

    // min velocity before physics is stopped on surface collision {{ units = m / s }}
    float runPhysicsMinVelocity; // Offset: 0xF4

}; // Size: 0xF8
