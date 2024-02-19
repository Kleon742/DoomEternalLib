struct idChargeablePistol : idWeapon
{
    struct idChargeablePistolSyncData
    {
        float chargeValue; // Offset: 0x0

        float chargeValueForFireEvent; // Offset: 0x4

        int fireMode; // Offset: 0x8

    }; // Size: 0xC

    // predicted charge percent for remote clients (should only be set by calling SetPredictedChargeValue)
    float predictedChargeValue; // Offset: 0x3BA0

    // cached charge percent for fire event on remote clients, save until we fire remotely, then clear
    float cachedChargeValueForFireEvent; // Offset: 0x3BA4

    // predict whether we're building charge based on delta of previous syncDatas
    bool predictedCharging; // Offset: 0x3BA8

    // whether we have a valid charge blended feedback
    bool hasCustomWeaponFeedBack; // Offset: 0x3BA9

    // blend feedback between primary and secondary depending on weapon charge.
    weaponFeedBack_t chargeBlendedFeedback; // Offset: 0x3BB0

    idChargeablePistol::idChargeablePistolSyncData chargeablePistolSyncData; // Offset: 0x3DC8

}; // Size: 0x3DD8
