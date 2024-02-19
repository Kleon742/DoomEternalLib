struct idRigSkeletonMappingComponent : idRigComponent
{
    struct jointMap_t
    {
        // the joint name in the base skeleton
        idAtomicString baseJoint; // Offset: 0x0

        // the joint name in the target skeleton
        idAtomicString targetJoint; // Offset: 0x8

    }; // Size: 0x10

    struct retargetInfo_t
    {
        // translation
        idVec3 translation; // Offset: 0x0

        // padding
        float padding; // Offset: 0xC

        // rotation
        idQuat rotation; // Offset: 0x10

    }; // Size: 0x20

    // config data the base skeleton
    idMD6SkelRef baseSkeletonName; // Offset: 0x10

    // an animation used to match poses between the base and target rigs (necessary when they are in different poses, like one in a T-pose and another in an A-pose)
    idMD6AnimRef characterizationPose; // Offset: 0x18

    // the joint name mapping
    idList < idRigSkeletonMappingComponent::jointMap_t , TAG_IDLIST , false > jointNameMap; // Offset: 0x20

    // runtime data
    idMD6Skel* baseSkeleton; // Offset: 0x38

    idMD6Anim* characterizationPoseAnim; // Offset: 0x40

    // the joint index mapping
    idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > jointIndexMap; // Offset: 0x48

    // the joint retargeting info
    idList < idRigSkeletonMappingComponent::retargetInfo_t , TAG_IDLIST , false > jointRetargetInfo; // Offset: 0x60

}; // Size: 0x78
