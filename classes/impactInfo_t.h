struct impactInfo_t
{
    // inverse mass {{ units = 1 / kg }}
    float invMass; // Offset: 0x0

    // inverse inertia tensor
    idMat3 invInertiaTensor; // Offset: 0x4

    // impact position relative to center of mass {{ units = m }}
    idVec3 position; // Offset: 0x28

    // velocity at the impact position {{ units = m / s }}
    idVec3 velocity; // Offset: 0x34

}; // Size: 0x40
