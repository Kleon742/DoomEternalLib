struct idTrigger_DemonDamageOutModifier : idTrigger
{
    // the percentage to modify the damage out by
    float damageOutPercentageMod; // Offset: 0xC90

    // the time to have the percentage mod active for, default is infinite
    idTypesafeTime < int , millisecondUnique_t , 1000 > damageOutMaxTime; // Offset: 0xC94

}; // Size: 0xC98
