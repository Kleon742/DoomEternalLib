struct dodgeStats_t
{
    // Initial dodge speed {{ units = m / s }}
    float initialSpeed; // Offset: 0x0

    // How long fade to MiddleSpeed will take
    float initialSpeedDuration; // Offset: 0x4

    // Steady-state dodge speed {{ units = m / s }}
    float middleSpeed; // Offset: 0x8

    // How long to stay at this constant speed
    float middleDuration; // Offset: 0xC

    // Target speed to fade out to {{ units = m / s }}
    float slowDownSpeed; // Offset: 0x10

    // How long final speed fade will take
    float slowDownDuration; // Offset: 0x14

    // Vertical velocity when dodge starts {{ units = m / s }}
    float initialVerticalSpeed; // Offset: 0x18

    // How much gravity affects player while dodging
    float gravityScalar; // Offset: 0x1C

    // How much dodge pays attention to input direction vs current velocity
    float inputInfluence; // Offset: 0x20

    // Delay before dodge can be activated again
    float cooldownTime; // Offset: 0x24

    // Energy cost of dodge [Energy max is 1.0]
    float energyCost; // Offset: 0x28

    // Energy pool recharge rate [Energy max is 1.0]
    float energyRechargeRate; // Offset: 0x2C

    // How much to head tilt when dodging.
    float viewRollScalar; // Offset: 0x30

    // Dot product threshold for backstab.
    float backStabThreshold; // Offset: 0x34

}; // Size: 0x38
