struct idDamageEffect : idClass
{
    idDeclParticle* type; // Offset: 0x10

    idDamageEffect* next; // Offset: 0x18

    // {{ units = m }}
    idVec3 localOrigin; // Offset: 0x20

    idVec3 localNormal; // Offset: 0x2C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0x38

    idIndex < short , invalidJointIndex_t , - 1 > jointNum; // Offset: 0x40

}; // Size: 0x48
