struct idDeclAIComponent_Hellknight : idDeclAIComponent
{
    // max value of the rage meter
    float rageMeterMaxValue; // Offset: 0x98

    // starting value of the rage meter
    float rageMeterStartValue; // Offset: 0x9C

    // rate at which the rage meter decays
    float rageMeterDecayRate; // Offset: 0xA0

    // multiply by incoming damage to get the stimulus to add to the rage meter
    float rageMeterDamageScale; // Offset: 0xA4

    // maximum stimulus that can be applied to the rage meter
    float rageMeterDamageCap; // Offset: 0xA8

    // rage meter value where hellknight gets (more) pissed off
    float rageMeterAngryLevel; // Offset: 0xAC

    // after becoming angry, rage meter must drop below this before the hellknight will trigger an angry roar
    float rageMeterRoarResetLevel; // Offset: 0xB0

    // rage meter value where hellknight will raise an arm to block incoming fire
    float rageMeterRaiseArmLevel; // Offset: 0xB4

    // hellknight will always stay angry for at least this long
    idTypesafeTime < float , secondUnique_t , 1 > minimumAngryTime; // Offset: 0xB8

    // range of chances to rage after pound attack
    idRange < float > rageAnimChance; // Offset: 0xBC

    // range of distances that match with rageAnimChance
    idRange < float > rageAnimInterval; // Offset: 0xC4

}; // Size: 0xD0
