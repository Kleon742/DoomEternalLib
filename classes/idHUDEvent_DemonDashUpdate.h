struct idHUDEvent_DemonDashUpdate
{
    struct demonDashData_t
    {
        // current number of dashes allowed
        int currentPips; // Offset: 0x0

        // percent of time needed to recharge dashing
        float percentCooldown; // Offset: 0x4

        // time left before the dash starts to recharge
        int rechargeTimeMilliseconds; // Offset: 0x8

        // percentage of time left before dash starts to recharge
        float rechargeTimePercentage; // Offset: 0xC

        // did the player try and fail to use dash this frame (i.e. it's on cooldown)?
        bool useFailedThisFrame; // Offset: 0x10

        // active demon's bindset
        bindSet_t bindset; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_DemonDashUpdate::demonDashData_t info; // Offset: 0x0

}; // Size: 0x18
