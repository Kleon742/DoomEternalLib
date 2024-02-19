struct idEntityModifier_Onslaught : idEntityModifier
{
    // damage boost, as a multiplier of current damage output
    float damageScale; // Offset: 0x30

    // simply add this much damage to every hit
    float damageBoost; // Offset: 0x34

    // optionally, use values from this decl
    idDeclAIUpgrades* upgradesDecl; // Offset: 0x38

}; // Size: 0x40
