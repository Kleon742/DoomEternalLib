struct aiSpawnParams_t
{
    idDeclEntityDef* decl; // Offset: 0x0

    bool allowPooling; // Offset: 0x8

    bool useCustomSpawnSettings; // Offset: 0x9

    idStr namePostFix; // Offset: 0x10

    idVec3 spawnOrigin; // Offset: 0x40

    idMat3 spawnAxis; // Offset: 0x4C

    aiStateOverride_t spawnInitialStateOverride; // Offset: 0x70

    // use with AIOVERRIDE_PLAY_ENTRANCE_ANIMATION
    idAnimWebPath_Atomic entranceAnim; // Offset: 0x78

    idManagedClassPtr < idTarget_Spawn > targetSpawnEnt; // Offset: 0xB8

    idManagedClassPtr < idTarget_Spawn_Parent > targetSpawnParentEnt; // Offset: 0xD8

    int entityNumberOverride; // Offset: 0xF8

    idSpawnId spawnIdOverride; // Offset: 0xFC

    replicationType_t replicationType; // Offset: 0x100

    bool forceEnableReplication; // Offset: 0x104

    bool allowIdleFXOnSpawn; // Offset: 0x105

    demonCardAISpawnParams_t demonCardParams; // Offset: 0x108

}; // Size: 0x138
