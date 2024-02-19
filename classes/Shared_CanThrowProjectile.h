struct Shared_CanThrowProjectile : idAIStateTransition
{
    // item to throw
    idDeclProjectile* projectileDecl; // Offset: 0xF8

    // Animation
    idAnimWebPath_Atomic throwAnim; // Offset: 0x100

    // if non-empty, scalar the throw anim uses for indexing
    idAtomicString randomIndexName; // Offset: 0x140

    // if the location is in the temp memory, this will contain the key in the memory that contains the value
    idAtomicString memoryKeyToCheck; // Offset: 0x148

    // additional delay ( for query, not enforced at launch )
    idTypesafeTime < float , secondUnique_t , 1 > launchDelayInSeconds; // Offset: 0x150

    // run these tests in addition to parabolic trajectory
    animQueryTestTypes_t additionalTestFlags; // Offset: 0x154

    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0x158

    // if true, this is a primary projectile ( normal ), otherwise a secondary ( powered up )
    bool primaryAttack; // Offset: 0x15C

    // if true, this is a hangout throw, so do extra logic
    bool hangout; // Offset: 0x15D

    // override anim index into the throw animweb state (if < 0, random index will be used)
    int overrideAnimIndex; // Offset: 0x160

}; // Size: 0x168
