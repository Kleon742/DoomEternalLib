struct idVolume_ToggleableDamageOverTime : idVolume_DamageOverTime
{
    // type of damage to deal with this hazard
    coopHazardDamage_t damageType; // Offset: 0xD18

    // damage decl that goes with damage type
    idList < const idDeclDamage * , TAG_IDLIST , false > damageTypeDecls; // Offset: 0xD20

    // user filter entity for this filter
    idManagedClassPtr < idEntity > filter; // Offset: 0xD38

}; // Size: 0xD58
