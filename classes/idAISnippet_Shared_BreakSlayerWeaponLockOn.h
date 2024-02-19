struct idAISnippet_Shared_BreakSlayerWeaponLockOn : idAISnippet
{
    // how long should lock on be disabled after being broken
    idTypesafeTime < int , millisecondUnique_t , 1000 > lockOnTimeoutMS; // Offset: 0x18

    // if true it only breaks LockOn for this AI only, otherwise it breaks for all targets
    bool thisAIOnly; // Offset: 0x1C

}; // Size: 0x20
