struct idDeclShellSkybox : idDeclTypeInfo
{
    struct shellSkyboxDisplay_t
    {
        // Title of the skybox in the UI.
        idStrId title; // Offset: 0x0

        // Description of the skybox.
        idStrId description; // Offset: 0x4

        // Icon to use for the skybox.
        idMaterial2* icon; // Offset: 0x8

    }; // Size: 0x10

    // list of the layers to enable when this skybox becomes active
    idList < const idDeclLayer * , TAG_IDLIST , false > layersToShow; // Offset: 0x88

    // the env decl to use when this skybox becomes active
    idDeclEnv* skyEnv; // Offset: 0xA0

    // the logic event to broadcast for dynamic entity management
    idAtomicString logicEventName; // Offset: 0xA8

    // the stat that is linked to this objects availability.
    gameStat_t linkedStat; // Offset: 0xB0

    // is this the default option?
    bool isDefault; // Offset: 0xB4

    // is this available in multiplayer
    bool isMultiplayer; // Offset: 0xB5

    // should this be set as the default when acquired?
    bool setAsDefaultOnAdd; // Offset: 0xB6

    // what order should this be in in the UI.
    int sortOrder; // Offset: 0xB8

    // Display Information for the milestone.
    idDeclShellSkybox::shellSkyboxDisplay_t display; // Offset: 0xC0

}; // Size: 0xD0
