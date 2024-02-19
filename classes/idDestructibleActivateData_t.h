struct idDestructibleActivateData_t
{
    idVec3 ownerPosition; // Offset: 0x0

    idMat3 ownerOrientation; // Offset: 0xC

    idVec3 piecePosition; // Offset: 0x30

    idMat3 pieceOrientation; // Offset: 0x3C

    idVec3 damagePosition; // Offset: 0x60

    idMat3 damageOrientation; // Offset: 0x6C

}; // Size: 0x90
