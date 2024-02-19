struct idWeaponKickComponent
{
    idWeaponKickAxis yaw; // Offset: 0x8

    idWeaponKickAxis pitch; // Offset: 0xA0

    idWeaponKickAxis roll; // Offset: 0x138

    idWeaponKickAxis fov; // Offset: 0x1D0

    // values at the point we called CalculateOffsets or Set*
    float yawOffset; // Offset: 0x268

    float pitchOffset; // Offset: 0x26C

    float rollOffset; // Offset: 0x270

    float fovOffset; // Offset: 0x274

}; // Size: 0x278
