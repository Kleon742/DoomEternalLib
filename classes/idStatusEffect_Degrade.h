struct idStatusEffect_Degrade : idStatusEffect
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextHealthDegradeTime; // Offset: 0x130

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextArmorDegradeTime; // Offset: 0x138

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextAmmoDegradeTime; // Offset: 0x140

    idList < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , TAG_IDLIST , false > nextInventoryDegradeTimes; // Offset: 0x148

}; // Size: 0x160
