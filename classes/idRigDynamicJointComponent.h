struct idRigDynamicJointComponent : idRigComponent
{
    struct dynamicJoint_t
    {
        // the joint name
        idAtomicString jointName; // Offset: 0x0

        // the joint name to parent to
        idAtomicString parentName; // Offset: 0x8

        // the target joint to follow
        idAtomicString targetName; // Offset: 0x10

    }; // Size: 0x18

    // the joint name mapping
    idList < idRigDynamicJointComponent::dynamicJoint_t , TAG_IDLIST , false > jointList; // Offset: 0x10

}; // Size: 0x28
