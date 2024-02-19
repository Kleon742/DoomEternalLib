struct idVolume_InvasionSpawnZone : idVolume
{
    bool spawnZoneTouched; // Offset: 0xC20

    bool shouldTeleportDemon; // Offset: 0xC21

    // A list of other spawn volumes that should be considered as the entire tethered space for when the Slayer is in said volume.
    idList < idManagedClassPtr < idVolume_InvasionSpawnZone > , TAG_IDLIST , false > tetheredSpawnZones; // Offset: 0xC28

    // A list of demon player spawn points to use when the slayer has touched this volume
    idList < idManagedClassPtr < idCampaignInvaderStart > , TAG_IDLIST , false > spawnPoints; // Offset: 0xC40

    // Volumes that define the spaces in which the demon players may occupy
    idManagedClassPtr < idVolume_DemonContainment > demonContainmentVolume; // Offset: 0xC58

    // A Rendermodel that define the spaces in which the demon players may occupy
    idManagedClassPtr < idDynamicEntity > demonContainmentModel; // Offset: 0xC78

    // A Rendermodel that define the spaces in which the slayer may occupy
    idManagedClassPtr < idDynamicEntity > spawnZoneModel; // Offset: 0xC98

    // Number of ms before sending idClientGameMsg_SlayerEnteredSpawnVolume to the client when the slayer/server is touching the volume.
    idTypesafeTime < int , millisecondUnique_t , 1000 > clientUpdateMs; // Offset: 0xCB8

    // Number of ms before before the demon player teleports to the slayer position.
    int timeDemonToTeleportToSlayerMs; // Offset: 0xCBC

    // Knockback value for the slayer when the slayer is in ghost mode and leaves the spawn zone.
    float slayerGhostingKnockback; // Offset: 0xCC0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastMsgTime; // Offset: 0xCC8

    bool spawnZoneActivated; // Offset: 0xCD0

    bool enteredSpawnZone; // Offset: 0xCD1

}; // Size: 0xCD8
