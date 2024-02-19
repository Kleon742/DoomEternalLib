struct idRigPoseConstraintComponent : idRigComponent
{
    struct constraintGroupConfig_t
    {
        // prefix pattern to match for parent groups
        idStr parentPrefix; // Offset: 0x0

        // prefix pattern to match for parent groups
        idStr childPrefix; // Offset: 0x30

        // should overlapping children of a ragdoll root body joint reverse parenting (aka, is this child group a limb)
        bool reverseOverlaps; // Offset: 0x60

    }; // Size: 0x68

    struct jointConstraintConfig_t
    {
        struct _jointConstraintFlags_t
        {
            // follow parent rotation
            bool rotation; // Offset: 0x0

            // follow parent translation
            bool translation; // Offset: 0x0

            // follow parent scale
            bool scale; // Offset: 0x0

            // apply constraint inline or after posing
            bool postPose; // Offset: 0x0

        }; // Size: 0x1

        // the joint we want to move the child TO
        idAtomicString parentJointName; // Offset: 0x0

        // the joint we want to move TO the parent
        idAtomicString childJointName; // Offset: 0x8

        // flags for how the child should be constrained to the parent
        idRigPoseConstraintComponent::jointConstraintConfig_t::_jointConstraintFlags_t flags; // Offset: 0x10

        // this constraint is enabled by default
        bool enabled; // Offset: 0x0

        unsigned char parentGroupIndex; // Offset: 0x12

        unsigned char childGroupIndex; // Offset: 0x13

    }; // Size: 0x18

    struct jointConstraint_t
    {
        idIndex < short , invalidJointIndex_t , - 1 > childIndex; // Offset: 0x0

        idIndex < short , invalidJointIndex_t , - 1 > parentIndex; // Offset: 0x2

        // uses idMD6Blend::jointMod_t::jointModFlags_t
        unsigned short jointModFlags; // Offset: 0x4

    }; // Size: 0x6

    struct Instance : idRigComponentInstance
    {
        idList < idRigPoseConstraintComponent::jointConstraint_t , TAG_IDLIST , false > constraints; // Offset: 0x8

        idBitset < 128 > activeFlags; // Offset: 0x20

        idBitset < 128 > defaultActiveFlags; // Offset: 0x30

        idList < unsigned short , TAG_IDLIST , false > constraintOrder; // Offset: 0x40

        idRigPoseConstraintComponent* component; // Offset: 0x58

    }; // Size: 0x60

    typedef idBitset < idRigPoseConstraintComponent::MAX_CONSTRAINTS > constraintBitFlags_t;

    // a list of group relationships to use when auto-generating constraints
    idList < idRigPoseConstraintComponent::constraintGroupConfig_t , TAG_IDLIST , false > autoConfigConstraintGroups; // Offset: 0x10

    // a list of joint constraints to apply after the full pose of the model is generated
    idList < idRigPoseConstraintComponent::jointConstraintConfig_t , TAG_IDLIST , false > postPoseConstraints; // Offset: 0x28

    idList < idBitset < idRigPoseConstraintComponent::MAX_CONSTRAINTS > , TAG_IDLIST , false > groupMask; // Offset: 0x40

    idList < idStr , TAG_IDLIST , false > groupNames; // Offset: 0x58

    // Should we use rotation deltas to break constraints? or translation only?
    bool useRotationToBreakConstraints; // Offset: 0x70

}; // Size: 0x78
