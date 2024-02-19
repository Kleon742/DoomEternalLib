struct goreSpawnerInfo_t
{
    // Spawn ASAP.
    bool autoSpawn; // Offset: 0x0

    // tag used for spawning this entity
    idAtomicString fxTagJoint; // Offset: 0x8

    // Pose information (which groups to enable and pose)
    idList < idAtomicString , TAG_IDLIST , false > filterPose; // Offset: 0x10

    // entityDef to spawn.
    idDeclEntityDef* entityDef; // Offset: 0x28

    // Which animation to play.
    idAtomicHandleT < aliasRefType_t > aliasRef; // Offset: 0x30

    // ragdoll constraint metadata
    goreRagdollConstraintSpawnerInfo_t ragdollConstraintData; // Offset: 0x38

    // wounds to enable on spawn - needed for gore entites that break constraints and won't receive anim events
    goreWoundsToEnableOnSpawnInfo_t woundsToEnableOnSpawn; // Offset: 0xA8

}; // Size: 0xC8
