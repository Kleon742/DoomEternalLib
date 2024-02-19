struct idInvasionAreaManager : idBloatedEntity
{
    // if true, the player is in this area and can be invaded (as far as this area manager is concerned)
    bool readyForInvasion; // Offset: 0xB88

    // pointer to global invasion manager
    idInvasionManager* parentManager; // Offset: 0xB90

    // these triggers inform the manager that the player has entered this area
    idList < idManagedClassPtr < idTrigger_InvasionAreaEnter > , TAG_IDLIST , false > enterTriggers; // Offset: 0xB98

    // these triggers inform the manager that the player has left this area
    idList < idManagedClassPtr < idTrigger_InvasionAreaExit > , TAG_IDLIST , false > exitTriggers; // Offset: 0xBB0

    // these volumes are another way of informing the manager that the player has entered/exited the area
    idList < idManagedClassPtr < idVolume_Invasion > , TAG_IDLIST , false > volumes; // Offset: 0xBC8

    // TODO: Should these be triggers? Anyway, these will be activated when the invasion actually starts
    idList < idManagedClassPtr < idDynamicEntity > , TAG_IDLIST , false > playerBlockers; // Offset: 0xBE0

    // the start points for the invader in this area
    idList < idManagedClassPtr < idCampaignInvaderStart > , TAG_IDLIST , false > invaderStarts; // Offset: 0xBF8

}; // Size: 0xC10
