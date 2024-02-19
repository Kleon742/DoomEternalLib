struct idRigIKComponent : idRigComponent
{
    enum contactInterpMethod_t : unsigned char
    {
        LERP = 0,
        LAG = 1
    };

    struct idIKLimbConfig
    {
        // joints
        idList < idAtomicString , TAG_IDLIST , false > joints; // Offset: 0x0

        // Optional. The joint that touches the ground ( usually the football ). If not specified will default to the last joint in the joint chain.
        idAtomicString surfaceContactJoint; // Offset: 0x18

        // Optional. A joint to use for the end effector, if not specified will default to the last joint in the joint chain.
        idAtomicString endEffector; // Offset: 0x20

        // this is a tail
        bool isTail; // Offset: 0x0

        // if a ground trace fails, should we use the end of the trace as the contact position or ignore it and use zero
        bool useTraceEndOnNoCollision; // Offset: 0x0

        // ( 0 - Linear, 1 - Lag )
        idRigIKComponent::contactInterpMethod_t interpolationMethod; // Offset: 0x29

        // this limb is active only when this group is active
        ikGroup_t activeGroup; // Offset: 0x2A

    }; // Size: 0x30

    struct slopeAdjustmentJoint_t
    {
        // the adjustment joint
        idAtomicString joint; // Offset: 0x0

        // the percentage to adjust the joint
        float percentage; // Offset: 0x8

    }; // Size: 0x10

    struct ikControlSetup_t
    {
        // parameters can be grouped together (this is currently tied to the AI walk state, 1=walk, 2=run, 3=sprint)
        ikGroup_t group; // Offset: 0x0

        // the starting velocity where this control data will take effect
        float startVelocity; // Offset: 0x4

        // control data for interpolation
        ikControlParms_t controlParms; // Offset: 0x8

    }; // Size: 0x24

    typedef idList < idRigIKComponent::slopeAdjustmentJoint_t > slopeAdjustmentJointList_t;

    // root of the ik, not necessarily the root of the character (aka hips)
    idAtomicString rootJoint; // Offset: 0x10

    // a list of extra joints to apply slope adaptation based on the percentage specified
    idList < idRigIKComponent::slopeAdjustmentJoint_t , TAG_IDLIST , false > slopeAdjustmentJoints; // Offset: 0x18

    // all my limbs
    idList < idRigIKComponent::idIKLimbConfig , TAG_IDLIST , false > limbConfigs; // Offset: 0x30

    // the percentage of full extension when the limb will begin to stretch to reach the end effector
    float minStretch; // Offset: 0x48

    // the percentage of full extension when the limb will stop stretching to reach the end effector
    float maxStretch; // Offset: 0x4C

    // the amount we shift our weight to our slope
    idVec2 weightShift; // Offset: 0x50

    // the distance above the ground where we will begin our foot trace
    float traceUpDistance; // Offset: 0x58

    // the distance below the ground where we will begin our foot trace
    float traceDownDistance; // Offset: 0x5C

    // the size of the box used for contact detection
    float contactShapeSize; // Offset: 0x60

    // should we rotate the contact joint to the surface? ( mainly turn this off for characters who don't have feet )
    bool rotateContactJointToSurface; // Offset: 0x64

    // list of control params based on movement speed
    idList < idRigIKComponent::ikControlSetup_t , TAG_IDLIST , false > controlSetup; // Offset: 0x68

}; // Size: 0x80
