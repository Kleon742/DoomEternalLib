struct aiEntityProxy_t
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x0

    idSpawnId spawnID; // Offset: 0x8

    idEntity* entity; // Offset: 0x10

    idMat3 axis; // Offset: 0x18

    idVec3 origin; // Offset: 0x3C

    idVec3 linearVelocity; // Offset: 0x48

}; // Size: 0x58
