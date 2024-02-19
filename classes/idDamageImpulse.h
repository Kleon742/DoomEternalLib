struct idDamageImpulse
{
    // the actual trace that caused this impulse
    trace_t trace; // Offset: 0x0

    // the inflictor of this damage
    idEntityPtr_ThreadSafe < idEntity > inflictor; // Offset: 0x80

    // the attacker that caused this damage
    idEntityPtr_ThreadSafe < idEntity > attacker; // Offset: 0x98

    // direction for this impulse
    idVec3 impactDir; // Offset: 0xB0

    // point of impact {{ units = m }}
    idVec3 impactPoint; // Offset: 0xBC

    // name of hit test sphere group this impulse had
    idAtomicString hitGroupName; // Offset: 0xC8

    // joint impulse applied to
    idIndex < short , invalidJointIndex_t , - 1 > hitJoint; // Offset: 0xD0

    // amount of damage done {{ units = kg * m / s }}
    float damage; // Offset: 0xD4

    // time the damage occurred
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageTime; // Offset: 0xD8

    // if an armor piece just popped off
    bool armorPoppedOff; // Offset: 0x0

    // if the damage hit armor
    bool hitArmor; // Offset: 0x0

    // if the damage hit a soft target
    bool hitSoftTarget; // Offset: 0x0

    // damage parms for this impulse
    idDamageParms damageParms; // Offset: 0xE8

}; // Size: 0xB38
