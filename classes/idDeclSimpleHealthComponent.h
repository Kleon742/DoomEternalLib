struct idDeclSimpleHealthComponent : idGameDeclTypeInfo
{
    // maximum value of health
    float max; // Offset: 0x90

    // value this component will be after initial spawn or respawn
    float starting; // Offset: 0x94

    // The amount of health that will be drained from 'max' if a drainRate is set
    float drainLimit; // Offset: 0x98

    // rate of regeneration (units per second)
    float regenRate; // Offset: 0x9C

    // if > 0, maximum value to which regeneration can bring us.
    float regenMax; // Offset: 0xA0

    // interval, in seconds, between regen updates.
    idTypesafeTime < float , secondUnique_t , 1 > regenInterval; // Offset: 0xA4

    // interval, in seconds, after taking damage that shield must wait before recharging
    idTypesafeTime < float , secondUnique_t , 1 > regenDelay; // Offset: 0xA8

    // Amount of damage this component will absorb (range of 0.0 to 1.0). The remainder is passed to the next component.
    float absorptionCoefficient; // Offset: 0xAC

    // what this component can be damaged by.
    idDamageParms::damageSource_t damagedBy; // Offset: 0xB0

}; // Size: 0xB8
