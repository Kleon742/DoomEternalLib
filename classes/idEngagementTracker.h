struct idEngagementTracker
{
    // last entity that attacked us ( could be AI, player, etc ).
    idManagedClassPtr < idEntity > lastAttacker; // Offset: 0x0

    // time when we were last attacked.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastAttackerTime; // Offset: 0x20

    // last entity we attacked ( could be AI, player, etc ).
    idManagedClassPtr < idEntity > lastVictim; // Offset: 0x28

    // time when we last attacked the victim.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastVictimTime; // Offset: 0x48

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastNonPlayerEngagementTime; // Offset: 0x50

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nonPlayerEngagementTimer; // Offset: 0x58

    // Flag cleared when timer runs out.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > playerEngagementTimers[12]; // Offset: 0x60

    // True if any timers are active.
    bool isEngaged; // Offset: 0xC0

}; // Size: 0xC8
