struct idJointGroup
{
    enum jointGroup_t : int
    {
        JOINTGROUP_DAMAGE = 0,
        JOINTGROUP_PAIN = 1,
        JOINTGROUP_TWITCH = 2,
        JOINTGROUP_DEATH = 3,
        JOINTGROUP_LIMBLOSS = 4,
        JOINTGROUP_HEADTRACKING = 5,
        JOINTGROUP_FOCUS = 6,
        JOINTGROUP_ORIENTATION = 7,
        JOINTGROUP_HITTEST = 8,
        JOINTGROUP_EYES = 9,
        JOINTGROUP_FEET = 10,
        JOINTGROUP_SILHOUETTE = 11,
        JOINTGROUP_TRACE = 12,
        JOINTGROUP_TRAVERSAL = 13,
        JOINTGROUP_TARGETING = 14,
        JOINTGROUP_GORE = 15,
        JOINTGROUP_WEAKPOINT = 16,
        JOINTGROUP_MAX = 17
    };

    enum jointGroupUserFlag_t : int
    {
        JOINTGROUPUSERFLAG_NO_MELEE = 1,
        JOINTGROUPUSERFLAG_NO_LOCKON = 2,
        JOINTGROUPUSERFLAG_USE_AIMASSIST = 4,
        JOINTGROUPUSERFLAG_WEAK_POINT = 8,
        JOINTGROUPUSERFLAG_OVERRIDE_SNAP_RADIUS = 16
    };

    struct jointGroupFlags_t
    {
        // show collision spheres in the editor for this group type
        bool showsCollisionSpheres; // Offset: 0x0

        // allow more than one joint of the same index in this group type
        bool allowDuplicateJoints; // Offset: 0x0

        // allow more than one joint in this group type
        bool allowMultipleJoints; // Offset: 0x0

        // use the hit test sphere creation dialog when adding single joints
        bool allowHitTestDialog; // Offset: 0x0

    }; // Size: 0x1

    struct jointGroupArgs_t
    {
        int surfType; // Offset: 0x0

        int contentsFlags; // Offset: 0x4

        // parsed from md6def and not hardcoded like jointGroupFlags
        int userFlags; // Offset: 0x8

        bool active; // Offset: 0xC

    }; // Size: 0x10

    // type of this group
    idJointGroup::jointGroup_t type; // Offset: 0x0

    // name of this group
    idAtomicString groupName; // Offset: 0x8

    // list of joints in this group
    idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_ANIMATION , false > joints; // Offset: 0x10

    // list of offsets for the joints in this group (currently only used for hitTestGroup) {{ units = m }}
    idList < idVec3 , TAG_ANIMATION , false > jointOffsets; // Offset: 0x28

    // list of scalars for the joints in this group (usage depends on type of group) {{ units = m }}
    idList < float , TAG_ANIMATION , false > jointScalars; // Offset: 0x40

    idJointGroup::jointGroupArgs_t args; // Offset: 0x58

    // This is the old per-group offset... it can be removed once all the old .md6def files are updated {{ units = m }}
    idVec3 groupOffset; // Offset: 0x68

}; // Size: 0x78
