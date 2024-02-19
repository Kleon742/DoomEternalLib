struct idDeclDamage : idGameDeclTypeInfo
{
    // damage parms
    idDamageParms damageParms; // Offset: 0x90

    // maximum amount of damage
    idBranchedOptionValue < declInputBranch_t , float > maxDamage; // Offset: 0xAE0

    // minimum amount of damage
    idBranchedOptionValue < declInputBranch_t , float > minDamage; // Offset: 0xB08

    // scale to apply (PVP ONLY, NOT demon players) when a player takes damage
    idBranchedOptionValue < declInputBranch_t , float > pvpPlayerDamageScale; // Offset: 0xB30

    // scale to apply when a demon player takes damage
    idBranchedOptionValue < declInputBranch_t , float > demonPlayerDamageScale; // Offset: 0xB58

    // list of demon player damage mitigation list
    idList < demonPlayerDamageMitigation_t , TAG_IDLIST , false > demonPlayerDamageMitigation; // Offset: 0xB80

}; // Size: 0xB98
