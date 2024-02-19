struct idMovementThinkComponent : idThinkComponent
{
    idManagedClassPtr < idEntity > movementEnt; // Offset: 0x30

    // {{ units = m }}
    idVec3 startPos; // Offset: 0x50

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > movementDelayTime; // Offset: 0x60

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > movementPopupTime; // Offset: 0x68

    // the data for this class
    idDeclProp_MovementComponent* componentData; // Offset: 0x70

    // the override distance {{ units = m }}
    float overrideDistance; // Offset: 0x78

    // the override speed {{ units = m / s }}
    float overrideSpeed; // Offset: 0x7C

    // {{ units = m }}
    float originalHeight; // Offset: 0x80

    // height adjust last frame
    float heightAdjustLastFrame; // Offset: 0x84

    // {{ units = m * m }}
    float distanceToEntSquared; // Offset: 0x88

    bool overrideDeath; // Offset: 0x8C

    float pitchAngle; // Offset: 0x90

    float yawAngle; // Offset: 0x94

    float rotAngle; // Offset: 0x98

    float swarmDirection; // Offset: 0x9C

    idVec3 previousDirection; // Offset: 0xA0

}; // Size: 0xB0
