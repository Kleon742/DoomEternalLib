struct idAnimatorParms_WalkIK : idAnimatorParms_Base
{
    // decl for constant walk IK parameters
    idDeclWalkIK* declWalkIK; // Offset: 0x30

    // number of the entity this animator will modify
    idSpawnId spawnId; // Offset: 0x38

    // collision mask indicating what contents the IK traces will hit
    int clipMask; // Offset: 0x3C

    idVec3 upNormal; // Offset: 0x40

    // pointer to havok collision interface
    idHavokCollision* havokCollision; // Offset: 0x50

    idHavokShape* havokShape; // Offset: 0x58

}; // Size: 0x60
