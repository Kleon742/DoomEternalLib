struct updateWeaponStateParms_t
{
    weaponFireType_t fireType; // Offset: 0x0

    // number of consecutive blocked shots per pull required to cause a trigger release
    int numBlockedShotsConsecutiveToReleaseTrigger; // Offset: 0x4

    // fraction of total shots this pull that need to be blocked to cause a trigger release
    float percentBlockedShotsToReleaseTrigger; // Offset: 0x8

    bool blockTriggersRelease; // Offset: 0xC

    bool shootParallelToGround; // Offset: 0xD

}; // Size: 0x10
