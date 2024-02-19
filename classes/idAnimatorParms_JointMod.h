struct idAnimatorParms_JointMod : idAnimatorParms_Base
{
    idJointAnimator* treeAnimator; // Offset: 0x30

    // the pose on the model to modify, either the reference pose, or the final pose
    animationPose_t poseToModify; // Offset: 0x38

}; // Size: 0x40
