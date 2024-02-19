struct idHavokPhysics_Dummy : idPhysics
{
    idBounds bounds; // Offset: 0x80

    idBounds absBounds; // Offset: 0x98

    idVec3 worldOrigin; // Offset: 0xB0

    idMat3 worldAxis; // Offset: 0xBC

    idVec3 localOrigin; // Offset: 0xE0

    idMat3 localAxis; // Offset: 0xEC

    idHavokPhysics* havokPhysics; // Offset: 0x110

    bool hasMaster; // Offset: 0x118

    bool hasMaster_oriented; // Offset: 0x119

    bool inCustomJob; // Offset: 0x11A

}; // Size: 0x120
