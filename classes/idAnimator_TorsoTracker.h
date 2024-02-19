struct idAnimator_TorsoTracker : idAnimator_TrackerBase
{
    // index of joint to use for reference instead of the one in the head tracking group
    idIndex < short , invalidJointIndex_t , - 1 > referenceJointOverrideIdx; // Offset: 0xF8

    bool useOriginXYForWorldSpace; // Offset: 0xFA

}; // Size: 0x100
