struct idDeclGoreBehavior : idGameDeclTypeInfo
{
    struct multiGibInfo_t
    {
        // minimum number of GORETYPE_LIMBLOSS pieces that may be activated
        int minLimbsToRemove; // Offset: 0x0

        // maximum number GORETYPE_LIMBLOSS pieces that may be activated
        int maxLimbsToRemove; // Offset: 0x4

        // maximum number of GORETYPE_SMALL_WOUND that may be activated
        int minWounds; // Offset: 0x8

        // maximum number of GORETYPE_SMALL_WOUND that may be activated
        int maxWounds; // Offset: 0xC

        // maximum number of GORETYPE_WEAKPOINT that may be activated
        int minWeakPoints; // Offset: 0x10

        // maximum number of GORETYPE_WEAKPOINT that may be activated
        int maxWeakPoints; // Offset: 0x14

    }; // Size: 0x18

    struct ragdollInfo_t
    {
        // Do we ragdoll on death or play anim.
        bool ragdollOnDeath; // Offset: 0x0

        // how much force to apply to the ragdoll.
        float impulseForce; // Offset: 0x4

        // how much force to apply to the ragdoll.
        float impulseForceUp; // Offset: 0x8

    }; // Size: 0xC

    // data describes how gore should react to a multi-gib setting
    idDeclGoreBehavior::multiGibInfo_t multiGibInfo; // Offset: 0x90

    // the type of dynamic explosion equations to use
    weaponSpecificGoreType_t weaponSpecificGoreType; // Offset: 0xA8

    // type of gore piece this is
    woundType_t goreType; // Offset: 0xAC

    // Increases the Limb damage by this. ( 0 - N )
    float limbDamageMult; // Offset: 0xB0

    // Increases the weakpoint damage by this. ( 0 - N )
    float weakPointDamageMult; // Offset: 0xB4

    // Max Distance the gun can be from the goree. {{ units = m }}
    float fullBodyMaxDistance; // Offset: 0xB8

    // Max Distance the gun can be from the goree
    float halfBodyMaxDistance; // Offset: 0xBC

    // radius of blood spheres {{ units = m }}
    float bloodRadius; // Offset: 0xC0

    // if greater than zero, use this radius for joints in splash damage {{ units = m }}
    float splashRadiusOverride; // Offset: 0xC4

    // the minimum impulse to use on weapon {{ units = kg * m / s }}
    float minImpulse; // Offset: 0xC8

    // the max impulse to use on weapon {{ units = kg * m / s }}
    float maxImpulse; // Offset: 0xCC

    // the height of the plane we are trying to hid {{ units = m }}
    float targetHeight; // Offset: 0xD0

    // the width of the plane we are trying to hid {{ units = m }}
    float targetWidth; // Offset: 0xD4

    // the distance from the gore we are placing the target plane at {{ units = m }}
    float targetDistance; // Offset: 0xD8

    // the angle to build the limit around the limitConeDir {{ units = degrees }}
    float limitAngle; // Offset: 0xDC

    // the cone direction to limit angles against
    idVec3 limitConeDir; // Offset: 0xE0

    // the angles to randomize on the weapon gore equation
    idAngles angles; // Offset: 0xEC

    // change the size of the existing joint radii for the hit groups if the wound type is in jointHitGroupRadiusMultiplierTypeMask
    float jointHitGroupRadiusMultiplier; // Offset: 0xF8

    // Gore type mask that applies the radius multiplier above
    woundType_t jointHitGroupRadiusMultiplierTypeMask; // Offset: 0xFC

    // instantly gibs.
    bool instaGib; // Offset: 0x100

    // Override any settings for limbloss, and dont allow if target is alive.
    bool noLimblossWhenAlive; // Offset: 0x101

    // override any settings for limbloss and don't allow if target is revivable
    bool noLimblossWhenRevivable; // Offset: 0x102

    // adds explosion determined by gore system even if a specific weapon is modifying it
    bool useExplosion; // Offset: 0x103

    // randomizes the impulses applied between the min and max values
    bool randomizeImpulse; // Offset: 0x104

    // uses the max impulse allowed each time
    bool useMaxImpulse; // Offset: 0x105

    // Full Body Gib when if this was the last damage
    bool fbgOnDeath; // Offset: 0x106

    // Do we add all this damage from each trace, or just initial damage.
    bool frameDamageAddedForEachTraceForFBG; // Offset: 0x107

    // Do we add all this damage from each trace, or just initial damage.
    bool frameDamageAddedForEachTrace; // Offset: 0x108

    // This behavior can only be applied once per frame.
    bool uniqueDamageApplication; // Offset: 0x109

    // Hack for perf on bloodpunch with frozen.
    idDeclDestructible* frozenOverrideDestructible; // Offset: 0x110

    // infor for ragdoll'n with this gore behavior.
    idDeclGoreBehavior::ragdollInfo_t ragdollInfo; // Offset: 0x118

    // Use this preset for destructibles.
    idDestructiblePresetData_t destructiblePreset; // Offset: 0x124

}; // Size: 0x168
