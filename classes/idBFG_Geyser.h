struct idBFG_Geyser : idBloatedEntity
{
    // the trigger used to determine touch on this item for players and AI.
    idManagedClassPtr < idTrigger > trigger; // Offset: 0xB88

    // touch trigger definition
    idDeclEntityDef* triggerDef; // Offset: 0xBA8

    // fx decl
    idDeclFX* fxDecl; // Offset: 0xBB0

    // per second fill rate (max fill is 100). A negative value will instantaneously fill the BFG meter.
    float fillRate; // Offset: 0xBB8

    // If instantaneous, the max fill amount will be given to the player (still using fill rate) regardless of standing in the geyser trigger.
    bool instantaneous; // Offset: 0xBBC

    // Force the BFG meter to refill even if it is already in use.
    bool forceRefill; // Offset: 0xBBD

    // If instantaneous, this is the time (s) it takes for the geyser to become available again.
    idTypesafeTime < float , secondUnique_t , 1 > coolDownTime; // Offset: 0xBC0

    // If the geyser is instantaneous, this amount will be awarded to the player outside of continual triggering
    float remainingAdrenalineToAward; // Offset: 0xBC4

    // Last time the geyser was touched.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTouchTime; // Offset: 0xBC8

    // Is the geyser done cooling down
    bool isAvailable; // Offset: 0xBD0

    idSysMutex unTouchMutex; // Offset: 0xBD8

}; // Size: 0xC00
