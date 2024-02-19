struct testFireWeaponParms_t
{
    // whether free ammo mode should be considered in testfire
    bool freeAmmo; // Offset: 0x0

    // minimum dot product between muzzle and target before a shot will fire
    float minMuzzleDirDot; // Offset: 0x4

    // same as above, for upside down guys
    float minMuzzleDirDotUpsideDown; // Offset: 0x8

    // any target closer than this will always be shot at, bypassing the muzzle align checks {{ units = m }}
    float alwaysAimingDistance; // Offset: 0xC

    // whether actual muzzle dir should be used as the fire axis, if true implies many shots will miss
    bool useMuzzleDirForFireAxis; // Offset: 0x10

    // whether to use AI weapon spread
    bool useWeaponSpread; // Offset: 0x11

    // if true, just bypass all aim dot checks and assume we want to fire explicitly
    bool skipAllAimChecks; // Offset: 0x12

    // whether we should shoot parallel to the ground
    bool shootParallelToGround; // Offset: 0x13

}; // Size: 0x14
