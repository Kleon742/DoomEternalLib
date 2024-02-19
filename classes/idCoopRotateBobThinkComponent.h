struct idCoopRotateBobThinkComponent : idThinkComponent
{
    // the data for this class
    idDeclProp_CoopRotateBobComponent* componentData; // Offset: 0x30

    idInstantNetEvent < 15 > teleported; // Offset: 0x38

    // {{ units = m }}
    idVec3 teleportedOrigin; // Offset: 0x40

    idAngles teleportedAngles; // Offset: 0x4C

    // Because we do Prop2 Think on another job (often), it can run in parallel with Collide, so we need to set different values that we only update at the end. {{ units = m }}
    idVec3 midThinkHitPos; // Offset: 0x58

    bool midThinkHitFloor; // Offset: 0x64

    bool hitFloor; // Offset: 0x65

    // the first bob when hitting floor is special because it will first float up to the floor collision offset height
    bool floorFirstBob; // Offset: 0x66

    // {{ units = m }}
    idVec3 hitPos; // Offset: 0x68

    float floorBobTransition; // Offset: 0x74

    // {{ units = m }}
    idVec3 originalPropPosition; // Offset: 0x78

}; // Size: 0x88
