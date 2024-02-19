struct idPlayerViewFilter_AI2Angle : idPlayerViewFilter_Angle
{
    // allows filtering to a specific type of aim point, or AIMPOINT_BEST to consider everything
    aimPoint_t aimPointType; // Offset: 0x30

    // do we consider dead AI2?
    bool allowDead; // Offset: 0x0

    // allow no line of sight?
    bool allowNoLOS; // Offset: 0x0

    // exclude anything marked 'noLockOn'
    bool findLockOn; // Offset: 0x0

    // exclude anything marked 'noMelee'
    bool findMelee; // Offset: 0x0

    // inculude anything marked AimAssist;
    bool findAimAssist; // Offset: 0x0

    bool allowLockToCursedInstigator; // Offset: 0x0

}; // Size: 0x38
