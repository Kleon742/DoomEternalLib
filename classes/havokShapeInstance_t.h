struct havokShapeInstance_t
{
    idHavokShape* shape; // Offset: 0x0

    idVec3 origin; // Offset: 0x8

    idMat3 axis; // Offset: 0x14

    idVec3 scale; // Offset: 0x38

    bool isEnabled; // Offset: 0x44

}; // Size: 0x48
