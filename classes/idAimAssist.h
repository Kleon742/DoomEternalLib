struct idAimAssist
{
    struct aa_debugData_t
    {
        gameViewEntInfo_t* info; // Offset: 0x0

        float lookSpeed; // Offset: 0x8

        idAngles curViewAngles; // Offset: 0xC

        idAngles toTargetAngles; // Offset: 0x18

        aimAssistData_t* aimAssistData; // Offset: 0x28

        // {{ units = m }}
        float frictionRadius; // Offset: 0x30

        // {{ units = m }}
        float frictionInnerRadus; // Offset: 0x34

        float frictionScalar; // Offset: 0x38

        // {{ units = m }}
        float adhesionRadius; // Offset: 0x3C

        // {{ units = m }}
        float adhesionInnerRadus; // Offset: 0x40

        float contribution; // Offset: 0x44

        float radiusContribution; // Offset: 0x48

        // {{ units = m }}
        float trackingRadius; // Offset: 0x4C

        // {{ units = m }}
        float trackingInnerRadus; // Offset: 0x50

        float tetherContribution; // Offset: 0x54

    }; // Size: 0x58

    // desired delta angles needed to turn to assist on the target.
    float desiredFrictionScalar; // Offset: 0x8

    // desired look sensitivity modifier calculated from target.
    idAngles desiredAngleCorrection; // Offset: 0xC

    // desired yaw speed scaler for tracking targets.
    idAngles desiredTrackingAngles; // Offset: 0x18

    // Debug HUD X Position.
    int debugHudY; // Offset: 0x24

    // Debug HUD Y Position.
    int debugHudX; // Offset: 0x28

    // current delta angles needed to turn to assist on the target.
    idAngles currentAngleCorrection; // Offset: 0x2C

    // current look sensitivity modifier calculated from target.
    float currentFrictionScalar; // Offset: 0x38

    // current yaw speed scalar for tracking targets.
    idAngles currentTrackingAngles; // Offset: 0x3C

}; // Size: 0x48
