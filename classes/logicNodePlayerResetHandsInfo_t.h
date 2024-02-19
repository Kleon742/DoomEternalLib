struct logicNodePlayerResetHandsInfo_t
{
    // if true will set next weapon on player wall climb mechanic ( must be activated after wall climb has been started )
    bool setWallClimbWeapon; // Offset: 0x0

    // true = start in idle, false = start in bring up
    bool resetToIdle; // Offset: 0x1

    // force reset the web
    bool forceResetAnimWeb; // Offset: 0x2

    // use the last weapon you had
    bool useLastWeapon; // Offset: 0x3

    // use a specific weapon
    idDeclWeapon* useWeapon; // Offset: 0x8

    // use the bring up
    bool useBringup; // Offset: 0x10

    // use the intro bring up
    bool introBringup; // Offset: 0x11

    // clear any pending equip weapons
    bool clearPendingWeapon; // Offset: 0x12

    // force to overwrite any pending resets and ignore any subsequent until this one executes
    bool reliable; // Offset: 0x13

}; // Size: 0x18
