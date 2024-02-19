struct idEntityCamera : idUtilityCamera
{
    idManagedClassPtr < idEntity > targetEnt; // Offset: 0xC48

    bool useViewOffset; // Offset: 0xC68

    bool allowUserInputRotationWithCameraTag; // Offset: 0xC69

    // these (along with idUtilityCamera::lastAngles) are used when the camer is 'frozen'
    bool frozen; // Offset: 0xC6A

    // {{ units = m }}
    idVec3 lastOffset; // Offset: 0xC6C

    // {{ units = m }}
    float lastDistance; // Offset: 0xC78

    // {{ units = m }}
    idVec3 viewOffset; // Offset: 0xC7C

    // {{ units = m }}
    idVec3 lastEntityOrigin; // Offset: 0xC88

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHandledEntityTeleportTime; // Offset: 0xC98

}; // Size: 0xCA0
