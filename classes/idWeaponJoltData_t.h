struct idWeaponJoltData_t
{
    // additive weapon jolt anim (for playing during footstep events, landings, etc)
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > additiveAnim; // Offset: 0x0

    // min strength to play anim on footstep event
    float footstepMinStrength; // Offset: 0x4

    // max strength to play anim on footstep event
    float footstepMaxStrength; // Offset: 0x8

    // min strength to play anim on landing event
    float landMinStrength; // Offset: 0xC

    // max strength to play anim on landing event
    float landMaxStrength; // Offset: 0x10

    // min strength to play anim on hit reaction event
    float hitMinStrength; // Offset: 0x14

    // max strength to play anim on hit reaction event
    float hitMaxStrength; // Offset: 0x18

}; // Size: 0x1C
