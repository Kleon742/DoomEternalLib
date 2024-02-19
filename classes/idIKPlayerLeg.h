struct idIKPlayerLeg
{
    // name of the attach joint
    idJointName toe; // Offset: 0x0

    // name of the hand joint
    idJointName ankle; // Offset: 0x30

    // first joint from the hand towards shoulder
    idJointName knee; // Offset: 0x60

    // name of the elbow joint
    idJointName hip; // Offset: 0x90

    // name of the elbow joint
    idJointName waist; // Offset: 0xC0

}; // Size: 0xF0
