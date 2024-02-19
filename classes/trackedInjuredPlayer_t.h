struct trackedInjuredPlayer_t
{
    idManagedClassPtr < idPlayer > player; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTimeAtLastInjury; // Offset: 0x20

}; // Size: 0x28
