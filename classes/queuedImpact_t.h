struct queuedImpact_t
{
    idVec3 org; // Offset: 0x0

    idMat3 axis; // Offset: 0xC

    idVec3 porg; // Offset: 0x30

    idMat3 paxis; // Offset: 0x3C

    idColor color; // Offset: 0x60

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x70

    idImpactManager* impctMgr; // Offset: 0x78

    idDeclParticle* prt; // Offset: 0x80

    int playerIndex; // Offset: 0x88

    float distSqr; // Offset: 0x8C

    int numCycles; // Offset: 0x90

    bool bindToParent; // Offset: 0x94

}; // Size: 0x98
