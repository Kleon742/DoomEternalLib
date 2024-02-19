struct pusherInfo_t
{
    idHavokBodyId bodyIdPusher; // Offset: 0x0

    int parmMMPusher; // Offset: 0x4

    idVec3 localOrigin; // Offset: 0x8

    idMat3 localAxis; // Offset: 0x14

    forcePushMode_t forced; // Offset: 0x38

}; // Size: 0x3C
