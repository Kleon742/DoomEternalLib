struct pointOfInterest_t
{
    // {{ units = m }}
    idVec3 origin; // Offset: 0x0

    interestType_t type; // Offset: 0xC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lifetime; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x18

    float currentValue; // Offset: 0x20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > interval; // Offset: 0x28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x30

    idManagedClassPtr < idEntity > entity; // Offset: 0x38

    interestPriority_t priority; // Offset: 0x58

}; // Size: 0x60
