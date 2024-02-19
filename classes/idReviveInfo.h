struct idReviveInfo
{
    // who we're reviving
    idManagedClassPtr < idPlayer > target; // Offset: 0x0

    // when we started the revive
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x20

}; // Size: 0x28
