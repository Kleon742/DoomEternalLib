struct idProp_ElectricArmor : idProp_AIArmor
{
    // the AI who we popped off of
    idManagedClassPtr < idEntity > owner; // Offset: 0x2570

    // the joint we should arch to.
    idIndex < short , invalidJointIndex_t , - 1 > OwnerJoint; // Offset: 0x2590

    // electric bolt decl
    idDeclElectricBolt* electricBoltSystem; // Offset: 0x2598

    idElectricBolt* electricShock; // Offset: 0x25A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startElectricTime; // Offset: 0x25A8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextShockTime; // Offset: 0x25B0

    // how long the electric effect will go on for in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > electricPulseTime; // Offset: 0x25B8

    // time in between shocks
    idTypesafeTime < int , millisecondUnique_t , 1000 > electricShockDelay; // Offset: 0x25BC

    // the max distance this will arc from {{ units = m }}
    float electricDistance; // Offset: 0x25C0

}; // Size: 0x25C8
