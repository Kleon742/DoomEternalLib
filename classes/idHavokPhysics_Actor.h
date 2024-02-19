struct idHavokPhysics_Actor : idHavokPhysics_RigidBody
{
    struct recentRepulsor_t
    {
        idSpawnId spawnId; // Offset: 0x0

        int frame; // Offset: 0x4

    }; // Size: 0x8

    // ----------------------- repulsors -----------------------
    idRepulsor myRepulsor; // Offset: 0x250

    idStaticList < idRepulsor , 132 , false , TAG_IDLIST > repulsors; // Offset: 0x2B8

    // *** Not sure how many constant repulsors we get...  *** may need to increase this size since they can hang around for multiple frames. Keep track of repulsors that occur on consecutive frames. Only callback on the first occurance of the repulse.
    idStaticList < idHavokPhysics_Actor::recentRepulsor_t , 132 , false , TAG_IDLIST > recentRepulsors; // Offset: 0x3870

    // keep track of current game frame
    int currentGameFrame; // Offset: 0x3CA8

}; // Size: 0x3CB0
