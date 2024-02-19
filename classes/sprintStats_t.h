struct sprintStats_t
{
    // maximum sprint speed (after ramp up time) {{ units = m / s }}
    float speedMax; // Offset: 0x0

    // maximum anim rate scale for sprint
    float speedMaxAnimRate; // Offset: 0x4

    // initial spring speed (at start ramp up time) {{ units = m / s }}
    float speedInitial; // Offset: 0x8

    // time it takes to go from initial to max sprint speed
    idTypesafeTime < int , millisecondUnique_t , 1000 > rampUpTime; // Offset: 0xC

    // should starting sprint cancel animations and go to idle
    bool forceIdleOnSprint; // Offset: 0x10

}; // Size: 0x14
