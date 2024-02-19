struct idStatusEffect_Regeneration : idStatusEffect
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextRegenTick; // Offset: 0x130

    float healthLastUpdate; // Offset: 0x138

    float drainLimitShield; // Offset: 0x13C

}; // Size: 0x140
