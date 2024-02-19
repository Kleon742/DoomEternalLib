struct idStatusEffect_SiphonBonusDamageFromSummonedDemons : idStatusEffect
{
    float currentDamageScalar; // Offset: 0x130

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeSinceLastDecayInterval; // Offset: 0x138

}; // Size: 0x140
