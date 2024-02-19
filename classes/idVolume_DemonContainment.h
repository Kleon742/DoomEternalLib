struct idVolume_DemonContainment : idVolume
{
    // Knockback value for the demon when the demon cross's the demon containment volume.
    float demonKnockback; // Offset: 0xC20

    // Knockback value for the archvile when the archvile cross's the demon containment volume.
    float archvileKnockbackDuringTeleport; // Offset: 0xC24

    // Knockback value for the demon when the demon dashes across the demon containment volume.
    float demonDashKnockback; // Offset: 0xC28

    // Knockback value for the demon when the demon is in ghost mode and leaves the demon containment volume.
    float demonGhostingKnockback; // Offset: 0xC2C

    // Drag value when jumping into to a demon containment unit.
    float drag; // Offset: 0xC30

    // When the knockback is running amount of time in ms to return control to the player.
    idTypesafeTime < int , millisecondUnique_t , 1000 > kickbackTimeResponse; // Offset: 0xC34

    bool demonIsTouching; // Offset: 0xC38

    idVec3 demonDir; // Offset: 0xC3C

    idVolume* previousSpawnZone; // Offset: 0xC48

    bool activatedDemonContainment; // Offset: 0xC50

    bool isReadingFromSerialize; // Offset: 0xC51

    idManagedClassPtr < idVolume > clientMsgPreviousSpawnVolume; // Offset: 0xC58

    idManagedClassPtr < idVolume > clientMsgActiveSpawnVolume; // Offset: 0xC78

    idManagedClassPtr < idPlayer > clientMsgSlayer; // Offset: 0xC98

    int clientMsgNumberOfTimesVolumeTouched; // Offset: 0xCB8

}; // Size: 0xCC0
