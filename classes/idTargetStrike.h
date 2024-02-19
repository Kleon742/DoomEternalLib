struct idTargetStrike
{
    // When was it last started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x0

    // maximum amount of time the player can be in slowmo
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > maxDuration; // Offset: 0x8

    bool isActive; // Offset: 0x10

    bool inputDownLastFrame; // Offset: 0x11

    bool waitingOnHeightTrace; // Offset: 0x12

    bool waitingForFullCharge; // Offset: 0x13

    bool wantsToActivate; // Offset: 0x14

    // how slow can you go?
    float timeScale; // Offset: 0x18

    // Current charge percent ( can only be engaged at 100% charge )
    float currentCharge; // Offset: 0x1C

    // what charge were we at when we were last activated
    float chargeAtActivation; // Offset: 0x20

    // speed at which it recharges
    float rechargeRate; // Offset: 0x24

    // speed at which it depletes
    float depleteRate; // Offset: 0x28

    // sound to play when activated
    idSoundEvent* onSound; // Offset: 0x30

    // sound to play when deactivated
    idSoundEvent* offSound; // Offset: 0x38

    // sound to play when fully charged
    idSoundEvent* chargedSound; // Offset: 0x40

    // fx start to send to player
    fxCondition_t startFXCondition; // Offset: 0x48

    // fx stop to send to player
    fxCondition_t stopFXCondition; // Offset: 0x4C

    // make sure we're far enough off the ground
    idHavokQueryId heightTrace; // Offset: 0x50

    // when should we activate
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activateTime; // Offset: 0x58

    idUpgradeMod_Abilities* targetStrikeMod; // Offset: 0x60

    idPlayer* playerOwner; // Offset: 0x68

}; // Size: 0x70
