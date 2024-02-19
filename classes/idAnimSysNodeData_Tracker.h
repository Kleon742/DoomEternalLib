struct idAnimSysNodeData_Tracker : idAnimSysNodeData
{
    // Tag to use for focus
    idAtomicString focusTagName; // Offset: 0xB8

    // Tag to use for orientation
    idAtomicString orientationTagName; // Offset: 0xC0

    // Headtrack group name
    idAtomicString headTrackGroupName; // Offset: 0xC8

    // Which pose to get reference pos/axis from
    animationPose_t animationPoseToReference; // Offset: 0xD0

}; // Size: 0xD8
