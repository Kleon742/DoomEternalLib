struct idStunMeter : idPlayerMeter
{
    // value to add per unit of damage
    float damageScaling; // Offset: 0xA0

    // number of secs player is stunned
    idTypesafeTime < float , secondUnique_t , 1 > stunTimeSecs; // Offset: 0xA4

    bool isStunned; // Offset: 0xA8

    bool wasStunned; // Offset: 0xA9

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stunOverTime; // Offset: 0xB0

}; // Size: 0xB8
