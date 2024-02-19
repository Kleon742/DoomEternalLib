struct idViewBypass
{
    bool allowBypass; // Offset: 0x0

    // offset from freely wrapping idUserCmd angles
    idVec3 deltaViewAngles; // Offset: 0x4

    // apply after creating a base from the idUserCmd angles, identity unless bobs and kicks are used
    idMat3 angleTransform; // Offset: 0x10

    // origin before neck adjustment, may include bobs and kicks
    idVec3 baseOrigin; // Offset: 0x34

    // apply with the idUserCmd axis, before the angle transform
    float neckX; // Offset: 0x40

    float neckZ; // Offset: 0x44

}; // Size: 0x48
