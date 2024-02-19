struct metricsDamageInstance_t
{
    int damage; // Offset: 0x0

    gameStat_t criticalDamageStat; // Offset: 0x4

    gameStat_t criticalKillStat; // Offset: 0x8

    gameStat_t criticalKillStat2; // Offset: 0xC

    weaponStatsTag_t weaponStatsTag; // Offset: 0x10

    bool wasCriticalDamage; // Offset: 0x20

    bool wasLethalDamage; // Offset: 0x21

    idManagedClassPtr < idActor > victimActor; // Offset: 0x28

}; // Size: 0x48
