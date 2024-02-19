struct idWaveShield : idDynamicEntity
{
    // how much this shield can absorb before blowing up
    float startingHealth; // Offset: 0xCF8

    float currentHealth; // Offset: 0xCFC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTime; // Offset: 0xD00

}; // Size: 0xD08
