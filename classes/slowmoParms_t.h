struct slowmoParms_t
{
    // ease in time duration in seconds to ease in to a new time scale value
    idTypesafeTime < float , secondUnique_t , 1 > easeInDuration; // Offset: 0x0

    // duration in seconds for auto shutoff, or 0 for manual shutoff
    idTypesafeTime < float , secondUnique_t , 1 > slowmoDuration; // Offset: 0x4

    // ease out time duration in seconds to ease out of a time scale value
    idTypesafeTime < float , secondUnique_t , 1 > easeOutDuration; // Offset: 0x8

    // time scale modifier for the world
    float timeScale; // Offset: 0xC

    // table time scale modifier for the world
    idDeclTable* timeScaleTable; // Offset: 0x10

}; // Size: 0x18
