struct idTwitchPain_WeaponGroup
{
    // the weapon prefix for this group
    idStr weaponPrefix; // Offset: 0x0

    // optional string used by pain system for more specific anim lookup
    idAtomicString optionalPainString; // Offset: 0x30

    // into to override decl values
    twitchPainInfo_t info; // Offset: 0x38

    // list of damage directions for this weapon prefix
    idList < idTwitchPain_DamageDirectionGroup , TAG_IDLIST , false > damageDirectionGroups; // Offset: 0x58

    // if this is usable or not
    bool enabled; // Offset: 0x70

}; // Size: 0x78
