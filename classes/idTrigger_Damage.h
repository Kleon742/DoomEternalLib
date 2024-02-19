struct idTrigger_Damage : idTrigger
{
    // starting health
    float health; // Offset: 0xC90

    // entity that can initiate the damage (ie: player)
    idDeclEntityDef* attackerDef; // Offset: 0xC98

    // entity type that can deliver the damage (ie: rcbombcar)
    idDeclEntityDef* inflictorDef; // Offset: 0xCA0

    // damage type
    idDeclDamage* damageDef; // Offset: 0xCA8

}; // Size: 0xCB0
