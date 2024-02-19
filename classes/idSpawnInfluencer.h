struct idSpawnInfluencer : idManagedClass
{
    // my decl
    idDeclSpawnInfluencer* decl; // Offset: 0x28

    gameTeam_t team; // Offset: 0x30

    idVec3 orientDir; // Offset: 0x34

    // {{ units = m }}
    idVec3 orientPos; // Offset: 0x40

    idSphere sphere; // Offset: 0x4C

    idCone cone; // Offset: 0x5C

    bool coneIsReallyCylinder; // Offset: 0x7C

}; // Size: 0x80
