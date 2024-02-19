struct idDamageFeedbackInfo
{
    idEntity* victim; // Offset: 0x0

    idEntity* inflictor; // Offset: 0x8

    float damage; // Offset: 0x10

    idAtomicString hitTestGroupName; // Offset: 0x18

    // cannot store a reference internally because type info system doesn't like reference member variables
    idDamageParms* damageParms; // Offset: 0x20

    trace_t* trace; // Offset: 0x28

    bool detonatedByPlayer; // Offset: 0x30

    weaponFireMode_t fireMode; // Offset: 0x34

    bool damageFlagsAlreadyCalculated; // Offset: 0x38

    damageScalarDamageFlags_t damageFlags; // Offset: 0x39

    bool wasDead; // Offset: 0x3A

}; // Size: 0x40
