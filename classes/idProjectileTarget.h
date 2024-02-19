struct idProjectileTarget
{
    enum targetType_t : int
    {
        TARGET_NONE = 0,
        TARGET_ENTITY = 1,
        TARGET_POINT = 2
    };

    // type of target, entity or position
    idProjectileTarget::targetType_t type; // Offset: 0x0

    // target position {{ units = m }}
    idVec3 pos; // Offset: 0x4

    // target entity
    idManagedClassPtr < idEntity > entity; // Offset: 0x10

    // target entity joint index
    idIndex < short , invalidJointIndex_t , - 1 > entityJointIndex; // Offset: 0x30

}; // Size: 0x38
