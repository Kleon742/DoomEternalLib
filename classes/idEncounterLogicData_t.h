struct idEncounterLogicData_t
{
    // squad member variables AI Type
    eEncounterSpawnType_t type; // Offset: 0x0

    // Group Lable
    idStr label; // Offset: 0x8

    // Damage data Damage dealt
    float damage; // Offset: 0x38

    // Remaining health after damage
    float remainingHealthPercent; // Offset: 0x3C

    // Did the AI die
    bool isDead; // Offset: 0x40

    // (NOT FUNCTIONAL YET) Damage Decl the damage was done with
    idDeclDamage* damageDecl; // Offset: 0x48

    // Weapon Decl the damage was done with
    idDeclWeapon* weaponDecl; // Offset: 0x50

    // Encounter event variables Encounter event
    eEncounterEventFlags_t event_type; // Offset: 0x58

    // Optional string for encounter events
    idStr event_string; // Offset: 0x60

    // Why is this struct causing a crash? Exit trigger data
    idEncounterExitData_t exitData; // Offset: 0x90

}; // Size: 0xB8
