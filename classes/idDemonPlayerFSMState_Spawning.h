struct idDemonPlayerFSMState_Spawning : idDemonPlayerFSMState < idDemonPlayer >
{
    // interpolater to smoothly scale the demon up to full size
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > demonScaling; // Offset: 0x30

    // interpolater to smoothly scale the player up to demon size
    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > playerScaling; // Offset: 0x60

    // doing things in first person
    bool playFirstPerson; // Offset: 0x90

}; // Size: 0x98
