struct demonCardOwned_t
{
    // time stamp when this was gathered
    unsigned long long timeStampId; // Offset: 0x0

    // the decl for the card we currently carry
    unsigned long long demonCardBaseDecl; // Offset: 0x8

    // the current selected archetype selected
    demonCardArchetype_t demonCardArchetype; // Offset: 0x10

    // the current tier/level of upgrade in the selected archetype
    demonCardArchetypeTier_t demonCardArchetypeTier; // Offset: 0x14

    // the selection for each level of the tier selected [ max 8 ]
    archetypeUpgradeMap_t demonCardUpgradeSel; // Offset: 0x18

}; // Size: 0x20
