struct idProjectileTrajectory
{
    // trace model position at time of contact {{ units = m }}
    idVec3 point; // Offset: 0x0

    // trace model axis at time of contact
    idMat3 axis; // Offset: 0xC

    // gravity vector
    idVec3 gravity; // Offset: 0x30

    // entity contacted
    idManagedClassPtr < idEntity > entity; // Offset: 0x40

    // contact plane
    idPlane plane; // Offset: 0x60

    // contacted material
    int contentFlags; // Offset: 0x70

    // min height projectile reached (z value in world coordinates) {{ units = m }}
    float minHeight; // Offset: 0x74

    // max height projectile reached (z value in world coordinates) {{ units = m }}
    float maxHeight; // Offset: 0x78

    // computed points along the trajectory {{ units = m }}
    idList < idVec3 , TAG_IDLIST , false > trajectoryPoints; // Offset: 0x80

}; // Size: 0x98
