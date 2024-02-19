struct idFreeDbgCam : idCameraView
{
    idUserCmd prevcmd; // Offset: 0xC18

    idAngles curAngles; // Offset: 0xCB0

    // {{ units = m }}
    idVec3 curPos; // Offset: 0xCBC

    bool bFirstActive; // Offset: 0xCC8

    idManagedClassPtr < idEntity > cutsceneCamera; // Offset: 0xCD0

}; // Size: 0xCF0
