struct idSpectatorCamera : idCameraView
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0xC18

    // {{ units = m }}
    idVec3 startingOrigin; // Offset: 0xC20

    idMat3 startingAxis; // Offset: 0xC2C

    // {{ units = m }}
    idVec3 targetPos; // Offset: 0xC50

    // {{ units = m }}
    float distToTarget; // Offset: 0xC5C

}; // Size: 0xC60
