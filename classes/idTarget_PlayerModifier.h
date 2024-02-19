struct idTarget_PlayerModifier : idTarget
{
    // lower player weapon
    bool lowerWeapon; // Offset: 0xB88

    // disable player's ability to use weapons
    bool disableWeaponUsage; // Offset: 0xB89

    // raise player weapon
    bool raiseWeapon; // Offset: 0xB8A

    // enable player's ability to use weapons
    bool enableWeaponUsage; // Offset: 0xB8B

    // lerp to specified FOV
    float goalFov; // Offset: 0xB8C

    // time (in secs) to lerp to FOV
    float goalFovTimeSec; // Offset: 0xB90

}; // Size: 0xB98
