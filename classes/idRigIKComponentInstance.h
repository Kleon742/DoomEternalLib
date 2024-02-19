struct idRigIKComponentInstance : idRigComponentInstance
{
    enum rigDebugCategories_t : int
    {
        RIG_SHOW_SOLVE = 1,
        RIG_SHOW_CONTACTS = 2,
        RIG_SHOW_HISTORY = 4
    };

    struct contactQuery_t
    {
        idHavokQueryId havokQueryId; // Offset: 0x0

        idVec3 origin; // Offset: 0x8

        idVec3 animatedPos; // Offset: 0x14

        idVec3 rayDir; // Offset: 0x20

        float traceUpLength; // Offset: 0x2C

        float traceDownLength; // Offset: 0x30

    }; // Size: 0x38

    struct contact_t
    {
        float depth; // Offset: 0x0

        idVec3 normal; // Offset: 0x4

    }; // Size: 0x10

    struct idIkLimb_t
    {
        idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > joints; // Offset: 0x0

        idIndex < short , invalidJointIndex_t , - 1 > surfaceContactJointIndex; // Offset: 0x18

        idIndex < short , invalidJointIndex_t , - 1 > endEffectorIndex; // Offset: 0x1A

        char contactIndex; // Offset: 0x1C

        ikGroup_t activeGroup; // Offset: 0x1D

    }; // Size: 0x20

    struct slopeAdjustmentJoint_t
    {
        idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x0

        idQuat rotation; // Offset: 0x4

        float percentage; // Offset: 0x14

    }; // Size: 0x18

    struct controlGroup_t
    {
        char groupId; // Offset: 0x0

        char startParamIndex; // Offset: 0x1

    }; // Size: 0x2

    idMat3x4 xform; // Offset: 0x8

    float prevOriginZ; // Offset: 0x38

    idBitset < 8 > limbEnabledFlags; // Offset: 0x3C

    idBitset < 8 > limbValidFlags; // Offset: 0x40

    idBitset < 8 > limbIsTailFlags; // Offset: 0x44

    unsigned int suppressionFlags; // Offset: 0x48

    idBitset < 32 > contactInitializedFlags; // Offset: 0x4C

    idBitset < 32 > contactInterpMethodFlags; // Offset: 0x50

    idBitset < 32 > contactUseTraceEndOnNoCollisionFlags; // Offset: 0x54

    bool useSlopeAproximation; // Offset: 0x0

    bool rootContactInitializedFlag; // Offset: 0x0

    idRigIKComponentInstance::contact_t rootContactResult; // Offset: 0x5C

    idRigIKComponentInstance::contactQuery_t rootContactQuery; // Offset: 0x70

    idList < idRigIKComponentInstance::idIkLimb_t , TAG_IDLIST , false > limbs; // Offset: 0xA8

    idList < idRigIKComponentInstance::contact_t , TAG_IDLIST , false > contactResults; // Offset: 0xC0

    idList < idRigIKComponentInstance::contactQuery_t , TAG_IDLIST , false > contactQueries; // Offset: 0xD8

    idIndex < short , invalidJointIndex_t , - 1 > rootJointIndex; // Offset: 0xF0

    char controlGroup; // Offset: 0xF2

    idVec3 velocity; // Offset: 0xF4

    idVec3 filtertedVelocity; // Offset: 0x100

    float rootOffsetVelocity; // Offset: 0x10C

    ikControlParms_t currentControlParms; // Offset: 0x110

    idJointTransform modelOffset; // Offset: 0x130

    idList < idRigIKComponentInstance::contact_t , TAG_IDLIST , false > interpContacts; // Offset: 0x160

    idRigIKComponentInstance::contact_t interpRootContact; // Offset: 0x178

    idVec3 surfaceNormal; // Offset: 0x188

    // properties from the component, cached for efficiency
    float minStretch; // Offset: 0x194

    float maxStretch; // Offset: 0x198

    idVec2 weightShift; // Offset: 0x19C

    float traceUpDistance; // Offset: 0x1A4

    float traceDownDistance; // Offset: 0x1A8

    float contactShapeSize; // Offset: 0x1AC

    bool rotateContactJointToSurface; // Offset: 0x1B0

    idList < float , TAG_IDLIST , false > controlVelocity; // Offset: 0x1B8

    idList < idRigIKComponentInstance::controlGroup_t , TAG_IDLIST , false > controlGroups; // Offset: 0x1D0

    idList < ikControlParms_t , TAG_IDLIST , false > controlParms; // Offset: 0x1E8

    idList < idRigIKComponentInstance::slopeAdjustmentJoint_t , TAG_IDLIST , false > slopeAdjustmentJoints; // Offset: 0x200

}; // Size: 0x220
