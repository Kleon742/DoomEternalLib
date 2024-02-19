struct idDemonMeleeLungeComponent
{
    idDemonPlayer* demonPlayer; // Offset: 0x0

    // Melee lunge target
    idManagedClassPtr < const idEntity > meleeLungeTarget; // Offset: 0x8

    // time the last melee lunge started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeLungeStartTime; // Offset: 0x28

    // time the last melee lunge stopped
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeLungeStopTime; // Offset: 0x30

    float meleeLastLungeDistance; // Offset: 0x38

}; // Size: 0x40
