struct idDOTComponent
{
    struct stackDamageExclusion_t
    {
        // perk to check against. if NULL, exclusion list is always enabled.
        idDeclPerk* perk; // Offset: 0x0

        // if true, HAVING the perk enables exclusion list. if false, NOT having the perk enables exclusion list.
        bool exclusionsEnabledWhenPerkIsActive; // Offset: 0x8

        // weapon damage types that can not be combined when the perk is (or isn't - defined by the flag above) enabled
        weaponDamageTypeBits_t weaponDamageTypes[2]; // Offset: 0x10

    }; // Size: 0x20

    // list of weapon damage types that can't be stacked on top of each other, based on a perk being active or inactive.
    idList < idDOTComponent::stackDamageExclusion_t , TAG_IDLIST , false > stackableExclusions; // Offset: 0x0

    // don't update and don't add new damage when dead
    bool disableWhenDead; // Offset: 0x18

    // this will be set after the first update
    idManagedClassPtr < idEntity > owner; // Offset: 0x20

    idStaticList < damageOverTime_t , 20 , false , TAG_IDLIST > dotList; // Offset: 0x40

    idVec3 tagOrigin; // Offset: 0xEE78

    // when FatLoot is activated, this origin is used (origin is from the sync's stunt double AI)
    idVec3 overrideDropOrigin; // Offset: 0xEE84

    bool diedOnFire; // Offset: 0x0

    bool deathLootDropped; // Offset: 0x0

}; // Size: 0xEE98
