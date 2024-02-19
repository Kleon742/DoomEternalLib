// idHealthT < simpleHealthComponent_t , SIMPLE_HEALTH_MAX , SIMPLE_HEALTH_HITPOINTS >
template <typename _enum_t_>
struct idHealthT : idBaseHealth
{
    // idHealthT < simpleHealthComponent_t , SIMPLE_HEALTH_MAX , SIMPLE_HEALTH_HITPOINTS >::component_t
    struct component_t
    {
        // type of component -- only exists so designers can see what the type is!
        _enum_t_ type; // Offset: 0x0

        // maximum value of this component
        idBranchedOptionValue < declInputBranch_t , float > max; // Offset: 0x8

        // Health can not be drained past this limit if regenRate is negative
        float drainLimit; // Offset: 0x30

        // current value of this component
        float cur; // Offset: 0x34

        // value this component will be after initial spawn or respawn
        idBranchedOptionValue < declInputBranch_t , float > starting; // Offset: 0x38

        // Regenerative health rate of regeneration (units per second)
        float regenRate; // Offset: 0x60

        // If > 0, regeneration will not raise health above this amount. If <= 0, this value is ignored.
        float regenMax; // Offset: 0x64

        // interval, in seconds, between regen updates.
        idTypesafeTime < float , secondUnique_t , 1 > regenInterval; // Offset: 0x68

        // interval, in seconds, after taking damage that shield must wait before recharging
        idTypesafeTime < float , secondUnique_t , 1 > regenDelay; // Offset: 0x6C

        // allow regeneration to resurrect component
        bool regenAllowResurrect; // Offset: 0x70

        // Amount of damage this component will absorb (range of 0.0 to 1.0). The remainder is passed to the next component.
        float absorptionCoefficient; // Offset: 0x74

        // last frame on which regen was applied.
        int lastRegenFrame; // Offset: 0x78

        // what this component can be damaged by.
        idDamageParms::damageSource_t damagedBy; // Offset: 0x80

        // How much health to heal over "healOverTime"
        float healOverTimeAmount; // Offset: 0x88

        // Amount of time to heal over.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > healOverTime; // Offset: 0x90

        // last gameTime on which healOverTime was applied.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHealOverTime; // Offset: 0x98

        // Total amount of time elapsed for heal over time.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > healOverTimeTotalElasped; // Offset: 0xA0

        // the health threshold for NPD.
        float noPlayerDeathHealthThreshold; // Offset: 0xA8

        // the min health for NPD.
        float noPlayerDeathMinHeatlh; // Offset: 0xAC

    }; // Size: 0xB0

    // all components that make up "health"
    idHealthT < _enum_t_ , SIMPLE_HEALTH_MAX , SIMPLE_HEALTH_HITPOINTS >::component_t components[1]; // Offset: 0x10

    // if > 0.0f, the damage done on a killing blow must exceed this value to actually kill
    float killThreshold; // Offset: 0xC0

    // amount of damage done on a killing blow (useful for determining magnitude of death effects)
    float killingBlowDamage; // Offset: 0xC4

    // accumulated all damage over a frame
    float accumulatedFrameDamage; // Offset: 0xC8

    // accumulated all health over a frame
    float accumulatedFrameHeal; // Offset: 0xCC

    // time that accumulatedDamage is from (used to reset when we take damage on a new frame)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > accumulatedDamageTime; // Offset: 0xD0

    // last time we were healed
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHealTime; // Offset: 0xD8

    // player that owns this health
    idManagedClassPtr < idPlayer > ownerPlayer; // Offset: 0xE0

    // true if dead -- see notes in class declaration for why this is a flag
    bool isDead; // Offset: 0x100

    // this is only set to true on clients when they need to kill themselves or another client based on reliable messages from the server. They can get a reliable message from the server before they see isDead sent through the snapshots.
    bool isDeadOnClient; // Offset: 0x101

    // true if the health component can regenerate
    bool canRegenerate; // Offset: 0x102

    // true if took enough damage to become incapacitated.
    bool isIncapacitated; // Offset: 0x103

    // true if we are in the process of using an extra life (ran out of health, but warping back into action instead of dying)
    bool isUsingExtraLife; // Offset: 0x104

    // Whether or not this component can benefit from extra lives
    bool canUseExtraLives; // Offset: 0x105

    // Shields and armor can allow a percentage of the damage to bore through to the next component
    float damageAbsorptionPercent[3]; // Offset: 0x108

    idList < idHealthListener < _enum_t_ > * , TAG_IDLIST , false > listeners; // Offset: 0x118

}; // Size: 0x130
