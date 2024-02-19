struct idTargetSpawnGroup : idVolume
{
    struct spawnGroupInfo_t
    {
        // The spawner
        idManagedClassPtr < idTarget_Spawn_Parent > spawner; // Offset: 0x0

        // category of spawner
        eEncounterSpawnType_t spawnType; // Offset: 0x20

        // Last time this spawner was used
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeSpawned; // Offset: 0x28

        // Calculated value for determining spawn chance in a group
        float spawnWeight; // Offset: 0x30

    }; // Size: 0x38

    struct spawnerDebugInfo_t
    {
        // The spawner
        idManagedClassPtr < idTarget_Spawn_Parent > spawner; // Offset: 0x0

        // category of spawner
        eEncounterSpawnType_t spawnType; // Offset: 0x20

        // Calculated value for determining spawn chance in a group
        float spawnWeight; // Offset: 0x28

    }; // Size: 0x30

    // NOTE: Target_Spawn is a child of target_spawn_parent List of spawners to choose from when a spawn request is made
    idList < idManagedClassPtr < idTarget_Spawn_Parent > , TAG_IDLIST , false > spawners; // Offset: 0xC20

    // List of volumes that will collect spawners for the target spawn group
    idList < idManagedClassPtr < idTargetSpawnGroup > , TAG_IDLIST , false > targetSpawnSubGroups; // Offset: 0xC38

    // This is the list that is used internally to track spawning history
    idList < idTargetSpawnGroup::spawnGroupInfo_t , TAG_IDLIST , false > spawnerGroupInfoList; // Offset: 0xC50

    // Target spawn parent that will be applied to empty target spawners in this group
    idManagedClassPtr < idTarget_Spawn_Parent > targetSpawnParent; // Offset: 0xC68

    // Override for the ambient actor filter. The AI will revert to their default when the player is not in this volume.
    idManagedClassPtr < idActorAmbientFilter > actorAmbientFilterOverride; // Offset: 0xC88

    // If exclusive, this spawn group will not share target spawners with overlapping groups. If this is a sub-group, it will still share spawners with the parent.
    bool exclusive; // Offset: 0xCA8

    // The volume will collect any touching spawners and add them to the spawner list.
    bool includeTouchingSpawners; // Offset: 0xCA9

    // Once the volume is touched, it will become the active default until another volume volume with this setting is activated.
    bool remainActiveAfterTouch; // Offset: 0xCAA

    // Add this spawn group to the global spawn group list. If an encounter manager is marked to use the global spawn groups, it will automatically include this group as one of its override groups.
    bool includeInGlobalOverrideGroup; // Offset: 0xCAB

    // Any spawners that are touching the primitives at map save
    idList < idManagedClassPtr < idTarget_Spawn > , TAG_IDLIST , false > spawnersTouchingPrimitives; // Offset: 0xCB0

    // Override using the render volume for determining touching spawners
    bool usesCylinderForBounds; // Offset: 0xCC8

    // Radius of the cylinder volume {{ units = m }}
    float radius; // Offset: 0xCCC

    // lower extent of the cylinder volume {{ units = m }}
    float floorHeight; // Offset: 0xCD0

    // upper extent of the cylinder volume {{ units = m }}
    float ceilingHeight; // Offset: 0xCD4

    // Valid cover volumes to apply to AI in the encounter. This applies to all AI unless the AI is in a group that has been give a specific cover validation volume through a combatGroup_override.
    idList < idManagedClassPtr < idEncounterVolume_ValidCover > , TAG_IDLIST , false > validCoverVolumes; // Offset: 0xCD8

    idList < idTargetSpawnGroup::spawnerDebugInfo_t , TAG_IDLIST , false > spawnerDebugInfoList; // Offset: 0xCF0

    // {{ units = m }}
    idVec3 debugPlayerPos; // Offset: 0xD08

    idMat3 debugPlayerAngles; // Offset: 0xD14

}; // Size: 0xD38
