struct idRegenArea : idBloatedEntity
{
    enum regenType_t : int
    {
        REGEN_NONE = 0,
        REGEN_EQUIPPED_AMMO = 1,
        REGEN_HEALTH = 2
    };

    // the type of item to regen eveyr upkeep tick
    idRegenArea::regenType_t typeToRegen; // Offset: 0xB88

    // the amount to heal every upkeep tick
    int amountToGiveEveryUpkeep; // Offset: 0xB8C

    // the amount to heal when the player first touches the prop
    int amountToGiveOnTouch; // Offset: 0xB90

    // the amount of time between each upkeep
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeBetweenUpkeepMS; // Offset: 0xB94

    // touch Volume definition
    idDeclEntityDef* volumeDef; // Offset: 0xB98

    // the sound that loops at the center of the sphere.
    idSoundEvent* loopingAmbientSound; // Offset: 0xBA0

    // the sound that plays whenever the local player is given an item
    idSoundEvent* upkeepLocalSound; // Offset: 0xBA8

    // the sound that plays whenever a non-local player is given an item
    idSoundEvent* upkeepRemoteSound; // Offset: 0xBB0

    // the sound that plays whenever the regen prop is removed
    idSoundEvent* regenCollapseAmbientSound; // Offset: 0xBB8

    // the color of the debug circle that will draw on the ground
    idColor debugColor; // Offset: 0xBC0

    // the bound volume
    idManagedClassPtr < idVolume > volume; // Offset: 0xBD0

    // the last upkeep time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpkeepTime; // Offset: 0xBF0

    // for debug circle
    idWinding winding; // Offset: 0xBF8

}; // Size: 0xC18
