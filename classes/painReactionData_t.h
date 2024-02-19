struct painReactionData_t
{
    // how long in past to check for this reaction
    idTypesafeTime < float , secondUnique_t , 1 > secondsInPast; // Offset: 0x0

    // how many to look for
    int number; // Offset: 0x4

    // only consider pains with this much frame damage
    float damageThreshold_perPain; // Offset: 0x8

    // only pass if this much total damage from these pains was seen
    float totalDamage; // Offset: 0xC

    // reaction to check for
    painType_t painType; // Offset: 0x10

    // only consider damage from this source
    idDeclDamage* damageDecl; // Offset: 0x18

}; // Size: 0x20
