struct damageOverTime_t
{
    idManagedClassPtr < idEntity > inflictor; // Offset: 0x0

    idManagedClassPtr < idEntity > attacker; // Offset: 0x20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > interval; // Offset: 0x40

    // last gameTime on which healOverTime was applied. ( in seconds )
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTime; // Offset: 0x48

    // Total amount of time elapsed for heal over time.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageOverTimeTotalElapsed; // Offset: 0x50

    idDamageParms damageParms; // Offset: 0x58

    idDeclLootDropComponent::damageOverTimeDrops_t dropData; // Offset: 0xAA8

    float damageScale; // Offset: 0xB78

    float externalDamageMultiplier; // Offset: 0xB7C

    idList < weaponStatsTag_t , TAG_IDLIST , false > lastShotInstancePerWeaponHitType; // Offset: 0xB80

    // last gameTime a weapon caused damage
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastWeaponDamageTime; // Offset: 0xB98

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDropTime; // Offset: 0xBA0

    float weaponDamageDropCounter; // Offset: 0xBA8

    idList < fxCondition_t , TAG_IDLIST , false > fxStopConditions; // Offset: 0xBB0

    idList < idDamageParms::perWeaponDamageTypeOverride_t , TAG_IDLIST , false > damageTypeOverrides; // Offset: 0xBC8

    bool continueAfterDeath; // Offset: 0xBE0

    int numDOTDrops; // Offset: 0xBE4

}; // Size: 0xBE8
