struct actionAnim_t
{
    idMat3 poseRotation; // Offset: 0x0

    idMat3 fireAxis; // Offset: 0x24

    idMat3 lookAxis; // Offset: 0x48

    // {{ units = m }}
    idVec3 poseTranslation; // Offset: 0x6C

    // {{ units = m }}
    idVec3 firepoint; // Offset: 0x78

    // {{ units = m }}
    idVec3 eyePos[2]; // Offset: 0x84

    // {{ units = m }}
    idVec3 lookOrigin; // Offset: 0x9C

    idMD6Anim* anim; // Offset: 0xA8

    idAtomicString memoryKey; // Offset: 0xB0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUsedTime; // Offset: 0xB8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fireTime; // Offset: 0xC0

    int animIndex; // Offset: 0xC8

    int animTypeFlags; // Offset: 0xCC

    // reflects how much effort goes into this anim
    float cost; // Offset: 0xD0

    int ID; // Offset: 0xD4

    int nextListIndex; // Offset: 0xD8

    idIndex < short , invalidJointIndex_t , - 1 > fireJoint; // Offset: 0xDC

    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > nodeIndex; // Offset: 0xDE

    idDeclProjectile* projectileDecl; // Offset: 0xE0

}; // Size: 0xE8
