struct idCombatDebug
{
    struct DamageRecord
    {
        idDeclDamage* decl; // Offset: 0x0

        float amount; // Offset: 0x8

        int count; // Offset: 0xC

        int lastHitFrame; // Offset: 0x10

    }; // Size: 0x18

    idManagedClassPtr < idPlayer > owner; // Offset: 0x0

    idList < idCombatDebug::DamageRecord , TAG_IDLIST , false > recentDamageArray; // Offset: 0x20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > recordStartTime; // Offset: 0x38

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > recordEndTime; // Offset: 0x40

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > recordResetTime; // Offset: 0x48

    bool recordingDamage; // Offset: 0x50

}; // Size: 0x58
