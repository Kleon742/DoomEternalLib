struct idTeleporterPad : idVolume
{
    // an fx to play when the teleporter is idle
    idDeclFX* teleportFX; // Offset: 0xC20

    idManagedClassPtr < idEntity > destination; // Offset: 0xC28

}; // Size: 0xC48
