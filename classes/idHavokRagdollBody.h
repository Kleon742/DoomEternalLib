struct idHavokRagdollBody
{
    struct afBodyFlags_t
    {
        // true if a collision on this body during animation sync shouldn't end sync
        bool noSyncCollide; // Offset: 0x0

        // true if this body should have it's clip mask cleared to 0 when it's determined to be in a solid
        bool clearClipMaskInSolid; // Offset: 0x0

    }; // Size: 0x1

    idAtomicString name; // Offset: 0x0

    // idHavokPhysics_Base m_body;
    idHavokPhysics_RigidBody body; // Offset: 0x8

    idHavokQueryId collideTraceId; // Offset: 0x258

    int solidTestAxisIndex; // Offset: 0x260

    idHavokRagdollBody::afBodyFlags_t fl; // Offset: 0x264

}; // Size: 0x268
