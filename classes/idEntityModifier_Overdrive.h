struct idEntityModifier_Overdrive : idEntityModifier
{
    // movement speeds up this much
    float speedScale_movement; // Offset: 0x30

    // shots fly this much quicker
    float speedScale_projectiles; // Offset: 0x34

    // animation and attacks are this quicker
    float rateScale_haste; // Offset: 0x38

    // optionally, use values from this decl
    idDeclAIUpgrades* upgradesDecl; // Offset: 0x40

}; // Size: 0x48
