struct teamSuperAbility_t
{
    // perk to use when activating team super
    idDeclPerk* perk; // Offset: 0x0

    // how much using this ability reduces the team super meter (1.0 uses whole meter)
    float cost; // Offset: 0x8

}; // Size: 0x10
