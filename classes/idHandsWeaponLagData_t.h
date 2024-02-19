struct idHandsWeaponLagData_t
{
    // enable yaw lag
    bool lagYawEnable; // Offset: 0x0

    // spring constant for weapon yaw lag
    float lagYawK; // Offset: 0x4

    // yaw rates above this will be clamped
    float lagYawMaxRate; // Offset: 0x8

    // enable pitch lag
    bool lagPitchEnable; // Offset: 0xC

    // spring constant for weapon pitch lag
    float lagPitchK; // Offset: 0x10

    // pitch rates above this will be clamped
    float lagPitchMaxRate; // Offset: 0x14

    // enable forward/back lag
    bool lagForwardBackEnable; // Offset: 0x18

    // spring constant for weapon forward/back lag
    float lagForwardBackK; // Offset: 0x1C

    // forward/back rates above this will be clamped
    float lagForwardBackMaxRate; // Offset: 0x20

    // enable strafe lag
    bool lagStrafeEnable; // Offset: 0x24

    // spring constant for weapon strafe lag
    float lagStrafeK; // Offset: 0x28

    // forward/back move rates above this will be clamped
    float lagStrafeMaxRate; // Offset: 0x2C

    // per-weapon scale value
    float weaponLagScale; // Offset: 0x30

}; // Size: 0x34
