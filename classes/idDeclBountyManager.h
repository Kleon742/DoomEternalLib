struct idDeclBountyManager : idGameDeclTypeInfo
{
    // the max num of active bounties we are allowed to have
    int maxnNumActiveBounties; // Offset: 0x90

    // the time between automatic requests
    idTypesafeTime < int , millisecondUnique_t , 1000 > autoRequestTimeInterval; // Offset: 0x94

    // if true will always request time at level start
    bool requestBountyOnPlyrSpawn; // Offset: 0x98

    // immediately request a bounty after collecting a bounty
    bool requestNewBountyOnCollection; // Offset: 0x99

    // assign any active unassigned bounty to the first ai of bounty type spawned
    bool assignAiBountiesOnSpawn; // Offset: 0x9A

    // the amount of time to pass before we can request a new bounty, default == 900sec(15mins)
    idTypesafeTime < float , secondUnique_t , 1 > timeBetweenRequests; // Offset: 0x9C

    // initial request delay, default == 60-300sec (1-5mins)
    idRange < idTypesafeTime < float , secondUnique_t , 1 > > initialRequestDelayRange; // Offset: 0xA0

}; // Size: 0xA8
