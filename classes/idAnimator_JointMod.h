struct idAnimator_JointMod : idAnimator_Base
{
    // enable or disable
    bool enabled; // Offset: 0x40

    idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > jointIndex; // Offset: 0x48

    idList < idMat3 , TAG_IDLIST , false > jointValue; // Offset: 0x60

    // entity using the animated model
    idJointAnimator* treeAnimator; // Offset: 0x78

    // the pose on the model to modify, either the reference pose, or the final pose
    animationPose_t poseToModify; // Offset: 0x80

}; // Size: 0x88
