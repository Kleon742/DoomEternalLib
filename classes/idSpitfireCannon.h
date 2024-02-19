struct idSpitfireCannon : idAnimatedEntity
{
    enum spitfireCannonState_t : int
    {
        SPITFIRE_NONE = 0,
        SPITFIRE_CHARGING = 1,
        SPITFIRE_FIRING = 2,
        SPITFIRE_DONE = 3,
        SPITFIRE_REMOVING = 4,
        SPITFIRE_MAX = 5
    };

    // how long to charge the shot
    idTypesafeTime < int , millisecondUnique_t , 1000 > chargeTimeMS; // Offset: 0x1B48

    // how long to keep firing after shot charged
    idTypesafeTime < int , millisecondUnique_t , 1000 > firingTimeMS; // Offset: 0x1B4C

    // how long to exist after firing is over
    idTypesafeTime < int , millisecondUnique_t , 1000 > shutdownTimeMS; // Offset: 0x1B50

    // Weapon to fire for the beam projectile
    idWeapon weapon; // Offset: 0x1B58

    // when charge is over
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chargeEndTime; // Offset: 0x56F8

    // when firing is over
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > firingEndTime; // Offset: 0x5700

    // when to remove
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > shutdownEndTime; // Offset: 0x5708

    // track spitfire state
    idSpitfireCannon::spitfireCannonState_t internalState; // Offset: 0x5710

    // who deployed this spitfire cannon
    idManagedClassPtr < idEntity > owner; // Offset: 0x5718

    // where they were looking when deploying
    idMat3 ownerViewAxis; // Offset: 0x5738

}; // Size: 0x5760
