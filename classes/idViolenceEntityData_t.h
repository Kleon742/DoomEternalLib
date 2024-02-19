struct idViolenceEntityData_t
{
    // The entity.
    idManagedClassPtr < const idEntity > entity; // Offset: 0x0

    // The time he was first damaged.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > entityInitialDamage; // Offset: 0x20

}; // Size: 0x28
