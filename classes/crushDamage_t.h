struct crushDamage_t
{
    // damage to do when blocked
    idDeclDamage* crushDamageDecl; // Offset: 0x0

    // sound shader to play when applying crush damage
    idSoundEvent* sndCrush; // Offset: 0x8

    // if crush damage decl is NULL entity will apply world crush damage
    bool applyWorldCrushDamage; // Offset: 0x10

    // if true the mover will try to dislodge the player from its stuck/crushed position if possible
    bool tryDislodgePlayer; // Offset: 0x11

    // the mover will try to dislodge the player on the selected direction
    crushDislodge_t crushDislodge; // Offset: 0x14

    // the mover dislodge custom force {{ units = m }}
    idVec3 crushDislodgeCustomForce; // Offset: 0x18

    // the mover dislodge force multiplier, final applied is crushDislodgeForce * crushDislodgeForce {{ units = m }}
    float crushDislodgeForceMult; // Offset: 0x24

    // the distance to teleport the player when a crush dislodge is being executed to be able to clear the collision {{ units = m }}
    float crushDislodgeTeleportDist; // Offset: 0x28

    // limits the force to dislodge into a plane
    crushDislodgeLimits_t crushDislodgeLimits; // Offset: 0x2C

    // if true we add the movement to the crush entity
    bool crushDislodgeAddMoverDir; // Offset: 0x30

    // if true we calculate dislodge relative to the object
    bool crushDislodgeRelative; // Offset: 0x31

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > crunchSoundTime; // Offset: 0x38

}; // Size: 0x40
