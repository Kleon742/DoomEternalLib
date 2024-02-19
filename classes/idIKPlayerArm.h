struct idIKPlayerArm
{
    // name of the attach joint
    idJointName attach; // Offset: 0x0

    // name of the hand joint
    idJointName hand; // Offset: 0x30

    // first joint from the hand towards shoulder
    idJointName foreArm; // Offset: 0x60

    // name of the elbow joint
    idJointName elbow; // Offset: 0x90

    // name of the shoulder joint
    idJointName shoulder; // Offset: 0xC0

    // name of the joint where the IK target is stored
    idJointName target; // Offset: 0xF0

    // name of the camera joint
    idJointName camera; // Offset: 0x120

}; // Size: 0x150
