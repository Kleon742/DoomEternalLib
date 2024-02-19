struct idHavokPhysics_RigidCast : idHavokPhysics_RigidBody
{
    idHavokCollision* havokCollision; // Offset: 0x250

    idHavokMultiHitQueryId multiHitTranslationQuery; // Offset: 0x258

    idVec3 castPrevOrigin; // Offset: 0x260

    bool isDummy; // Offset: 0x26C

}; // Size: 0x270
