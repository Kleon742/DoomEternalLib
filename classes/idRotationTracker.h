struct idRotationTracker
{
    enum animAbsorptionType_t : int
    {
        ABSORB_STANDARD = 0,
        ABSORB_IGNORE = 1,
        ABSORB_COUNTER = 2
    };

    // current orientation of the tracker, in model space
    idMat3 rot; // Offset: 0x8

    // constrained orientation of the tracker, in model space
    idMat3 rot_constrained; // Offset: 0x2C

    // current distance to track at {{ units = m }}
    float currentDistance; // Offset: 0x50

    // ideal distance from parms {{ units = m }}
    float idealDistance; // Offset: 0x54

    // min/max angles
    idRotationTrackerRange angleRanges; // Offset: 0x58

    // used to apply deltas between ref axes
    idMat3 lastMsRefAxis; // Offset: 0x7C

    // ideal dir on prev frame
    idVec3 lastMsIdealDir; // Offset: 0xA0

    // used to apply deltas between ref axes
    idMat3 lastWsRefAxis; // Offset: 0xAC

    // rotation rate {{ units = radians / s }}
    idTypesafeNumber < float , RadiansUnique_t > maxVelocity; // Offset: 0xD0

    // min rotation rate, during decel {{ units = radians / s }}
    idTypesafeNumber < float , RadiansUnique_t > minVelocity; // Offset: 0xD4

    // current velocity {{ units = radians / s }}
    idTypesafeNumber < float , RadiansUnique_t > velocity_yaw; // Offset: 0xD8

    // current velocity {{ units = radians / s }}
    idTypesafeNumber < float , RadiansUnique_t > velocity_pitch; // Offset: 0xDC

    // acceleration rate {{ units = radians / ( s * s ) }}
    idTypesafeNumber < float , RadiansUnique_t > acceleration; // Offset: 0xE0

    // deceleration rate {{ units = radians / ( s * s ) }}
    idTypesafeNumber < float , RadiansUnique_t > deceleration; // Offset: 0xE4

    // if true, essentially ignore reference rotation delta EXCEPT for clamp purposes
    idRotationTracker::animAbsorptionType_t animAbsorptionType; // Offset: 0xE8

    // if true, project the look direction forward when it's behind the reference direction, instead of simply clamping it. This is useful for AI that need to continue tracking a target that is behind them.
    bool projectWhenBehind; // Offset: 0xEC

    // true if the ideal is outside of the max yaw angle
    bool clampedYaw; // Offset: 0xED

    // true if the ideal is outside of the max pitch angle
    bool clampedPitch; // Offset: 0xEE

    // if true, don't reflect unless actually clamping
    bool noReflectUntilClamp; // Offset: 0xEF

}; // Size: 0xF0
