struct aiForcedDeathInfo_t
{
    idManagedClassPtr < idEntity > inflictor; // Offset: 0x0

    idManagedClassPtr < idEntity > attacker; // Offset: 0x20

    idDamageParms damageParms; // Offset: 0x40

    float damage; // Offset: 0xA90

    // {{ units = m }}
    idVec3 impactPoint; // Offset: 0xA94

    idVec3 dir; // Offset: 0xAA0

    idIndex < short , invalidJointIndex_t , - 1 > joint; // Offset: 0xAAC

    bool isGloryKillDeath; // Offset: 0xAAE

    bool gloryKillEventHappened; // Offset: 0xAAF

    bool consumed; // Offset: 0xAB0

    bool timeout; // Offset: 0xAB1

    idAtomicString hitGroupName; // Offset: 0xAB8

    int deathAnimIndex; // Offset: 0xAC0

}; // Size: 0xAC8
