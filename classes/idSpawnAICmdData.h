struct idSpawnAICmdData
{
    int numSpawnMates; // Offset: 0x0

    idDeclEntityDef* def; // Offset: 0x8

    gameTeam_t team; // Offset: 0x10

    bool idolizeSummoner; // Offset: 0x14

    idSpawnNodeGroup* spawnNodeGroup; // Offset: 0x18

    idManagedClassPtr < idPlayer > summoner; // Offset: 0x20

    // range for spawning in front of the player {{ units = m }}
    idRange < float > spawnRange; // Offset: 0x40

    // {{ units = m }}
    idVec3 size; // Offset: 0x48

}; // Size: 0x58
