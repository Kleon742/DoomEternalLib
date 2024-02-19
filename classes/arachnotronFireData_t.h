struct arachnotronFireData_t
{
    // Number of paired shots to fire in a burst
    int primaryFireBurstCount; // Offset: 0x0

    // Delay (in milliseconds) between paired shots in a burst
    idTypesafeTime < int , millisecondUnique_t , 1000 > primaryFireBurstDelay; // Offset: 0x4

    // Number of projectiles to launch
    int secondarylaunchCount; // Offset: 0x8

    // Delay (in milliseconds) between projectile launches
    idTypesafeTime < int , millisecondUnique_t , 1000 > secondaryLaunchDelay; // Offset: 0xC

    // Minimum angle for launching projectiles.
    float minSecondaryLaunchAngle; // Offset: 0x10

    // Maximum angle for launching projectiles.
    float maxSecondaryLaunchAngle; // Offset: 0x14

    // How long to charge for in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > powerChargeTime; // Offset: 0x18

    // How long do we stay in power attack.
    idTypesafeTime < int , millisecondUnique_t , 1000 > powerAttackTime; // Offset: 0x1C

    // how much to increase/decrease the movement speed when in power attack charging.
    float powerAttackMovementModifier; // Offset: 0x20

    // has the power attack been fully charged.
    bool powerFullyCharged; // Offset: 0x24

    // How much we've charged.
    float powerChargePercent; // Offset: 0x28

}; // Size: 0x2C
