struct idMidnightKeyPropAttachment : idMidnightKeyProperties
{
    // Name of the group of the attachment.
    idMidnightTargetGroupName attachmentGroup; // Offset: 0x10

    // if true: attach, if false: detach
    bool attach; // Offset: 0x18

    // if true velocities are forced to 0 when detach occurs
    bool resetVelocitiesOnDetach; // Offset: 0x19

    // Name of the joint on which to attach the object.
    idJointName joint; // Offset: 0x20

    // The bind object should be oriented with the bind parent
    bool bindOriented; // Offset: 0x0

    // If true, the bound entity will snap is origin to the origin of the bindJoint.
    bool snapToJointOrigin; // Offset: 0x0

    // Don't allow local offset, lock directly to the bone/master/etc
    bool lockLocalOffset; // Offset: 0x0

    // Use the animation reference position to calculate the local offsets.
    bool bindToReferencePos; // Offset: 0x0

}; // Size: 0x58
