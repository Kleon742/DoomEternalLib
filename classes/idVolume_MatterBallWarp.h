struct idVolume_MatterBallWarp : idVolume
{
    // How strong the bullet curving is
    float pullStrength; // Offset: 0xC20

    // How fast players move through the volume
    float playerMovementScalar; // Offset: 0xC24

    // How fast players jump through the volume (multiplied against final air move speed component by component)
    idVec3 playerAirSpeedScalars; // Offset: 0xC28

    idManagedClassPtr < idEntity > attacker; // Offset: 0xC38

}; // Size: 0xC58
