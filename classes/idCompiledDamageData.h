struct idCompiledDamageData
{
    enum idAttackType_t : int
    {
        ATTACK_INVALID = -1,
        ATTACK_WEAPON = 0,
        ATTACK_EXPLOSION = 1,
        ATTACK_GLORYKILL_START = 2,
        ATTACK_GLORYKILL_END = 3,
        ATTACK_POWER_STRIKE = 4,
        ATTACK_GENERIC = 5
    };

    // where was the victim hit.
    int damageGroupIndex; // Offset: 0x0

    // Name of the damage group.
    idStr damageGroupName; // Offset: 0x8

    // how was the victim hit.
    idCompiledDamageData::idAttackType_t attackType; // Offset: 0x38

    // Damage Decl used.
    idDeclDamage* damageDecl; // Offset: 0x40

    // Victim properties
    idCompiledDamageEntityInfo victimInfo; // Offset: 0x48

    // Attacker properties
    idCompiledDamageEntityInfo attackerInfo; // Offset: 0x80

    // Inflictor properties
    idCompiledDamageEntityInfo inflictorInfo; // Offset: 0xB8

    // time of death.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > deathTime; // Offset: 0xF0

    // how much damage was dealt
    float damageAmount; // Offset: 0xF8

    // stats tag that caused this death
    weaponStatsTag_t weaponStatsTag; // Offset: 0x100

    // The Damage Scale.
    float damageScale; // Offset: 0x110

    // Armored Damage Scale.
    float armoredDamageScale; // Offset: 0x114

    // Armor Damage Scale.
    float armorDamageScale; // Offset: 0x118

    // how much armor is left.
    float armor; // Offset: 0x11C

    // flags on the damage.
    damageScalarDamageFlags_t damageFlags; // Offset: 0x120

    // What game Mode this is coming from.
    compiledDamage_Mode_t gameMode; // Offset: 0x124

}; // Size: 0x128
