struct idTrailerCamera_Menu
{
    bool showHighlights; // Offset: 0x0

    idVec3 offset; // Offset: 0x4

    float* xyzSpeed; // Offset: 0x10

    float* rollSpeed; // Offset: 0x18

    float* rotationSpeed; // Offset: 0x20

    idManagedClassPtr < idAI2 > focusAi; // Offset: 0x28

    idManagedClassPtr < idPlayer > focusPlayer; // Offset: 0x48

    idManagedClassPtr < idAI2 > lastAnimatedAI; // Offset: 0x68

    idStr lastAnimatedNode; // Offset: 0x88

    idManagedClassPtr < idAI2 > aiInView; // Offset: 0xB8

}; // Size: 0xD8
