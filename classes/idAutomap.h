struct idAutomap
{
    // decl for this Automap
    idDeclAutomap* decl; // Offset: 0x0

    idDeclAutomap declDefault; // Offset: 0x8

    idVec3 gameViewOrigin; // Offset: 0x190

    idMat3 gameViewAxis; // Offset: 0x19C

    // Cached struct of changes to camera pan/rotate/zoom
    idAutomapCamera_t cameraChangeData; // Offset: 0x1C0

    // Point light that follows the player around
    idDeclAutomap::idAutomapPointLight_t playerPointLight; // Offset: 0x1D8

    // Point light that follows the demon player around
    idDeclAutomap::idAutomapPointLight_t demonPlayerPointLight; // Offset: 0x20C

    // current Automap input
    idAutomapInput_t currentInput; // Offset: 0x240

    // previous Frame's Automap input
    idAutomapInput_t previousInput; // Offset: 0x284

    // Automap camera
    idAutomapCamera camera; // Offset: 0x2C8

    // All Automap objects associated with an entity
    idListMap < idStr , idAutoMapObject > entityObjects; // Offset: 0x340

    int entityObjectUpdateIndex; // Offset: 0x370

    // All the objectives.
    idAutoMapObject objectives[16]; // Offset: 0x378

    // Maps fast-travel point entity names to their positions
    idListMap < idStr , idVec3 > fastTravelPoints; // Offset: 0x1878

    // Icon for showing fast travel point
    idAutoMapObject fastTravelPointObject; // Offset: 0x18A8

    // intm_selectedObjectIndex; index of selected Automap Object idColorm_selectedObjectColor; original color of the selected object
    idListMap < idStr , idAutoMapObject::state_t > loadedPendingObjects; // Offset: 0x19F8

    bool isActive; // Offset: 0x1A28

    // Should we be handling input?
    bool shouldHandleInput; // Offset: 0x1A29

    bool mapRevealedForDemonPlayer; // Offset: 0x1A2A

    bool mapGroupMenuIsActive; // Offset: 0x1A2B

    bool fastTravelMenuIsActive; // Offset: 0x1A2C

    // Fog Of War Reveal Radius for flagging Fog of War tiles as Revealed and Not Traversed
    float fogOfWarRevealedAndNotTraversedRevealRadius; // Offset: 0x1A30

    // Reveal Radius for flagging Fog of War tiles as Revealed and Traversed
    float fogOfWarRevealedAndTraversedRevealRadius; // Offset: 0x1A34

    float fogOfWarRevealedHalfHeight; // Offset: 0x1A38

    // Reveal radius size, issued by logic node.
    float logicNodeFogOfWarRevealSize; // Offset: 0x1A3C

    // logic node to allow reveal progression items
    bool logicNodeRevealProgressionItems; // Offset: 0x1A40

    // Object Revealing Radius used to check for object reveals
    float objectRevealRadius; // Offset: 0x1A44

    // Radius used to check for object discovery
    float objectDiscoveredRadius; // Offset: 0x1A48

    // The time stamp, in seconds, when the last reveal check occurred
    float lastRevealCheckSeconds; // Offset: 0x1A4C

    int updateRevealType; // Offset: 0x1A50

    // Sound Related Sound object for the Automap
    idSoundObject soundObject; // Offset: 0x1A58

    // Are we playing the RotateYawSound?
    bool playingRotateYawLoopSound; // Offset: 0x1A68

    // Are we playing the RotatePitchSound?
    bool playingRotatePitchLoopSound; // Offset: 0x1A69

    // Are we playing the Pan Loop Sound?
    bool playingPanLoopSound; // Offset: 0x1A6A

    // Are we playing the Zoom Loop Sound?
    bool playingZoomLoopSound; // Offset: 0x1A6B

    // Zoom in < 0, zoom out > 0
    float lastZoomDir; // Offset: 0x1A6C

    // Map Groups, collections of map sections that represent a portion of the Automap mini map
    idList < idAutomapMapGroup , TAG_IDLIST , false > mapGroups; // Offset: 0x1A70

    // Index of the mapGroup the local player is in.
    int localPlayerMapGroupIndex; // Offset: 0x1A88

    // Index of focused mapGroup in m_mapGroups
    int selectedMapGroupIndex; // Offset: 0x1A8C

    // Buffer object for fog-of-war data (not triple-buffered since it's only updated on Activate())
    idBufferObject* fogOfWarBufferObject; // Offset: 0x1A90

    // Index i stores starting index of map group i's encounters
    int mapGroupEncounterOffsets[17]; // Offset: 0x1A98

    // Encounter Related Variables
    int numEncounters; // Offset: 0x1ADC

    // Links encounters to their icon object and encounter manager (grouped by map groups).
    idAutomapSectionEncounterAssociation encounterAssociations[30]; // Offset: 0x1AE0

    // Encounter lights additional state data (grouped by map groups).
    encounterLightState_t encounterEntityLights[30]; // Offset: 0x37F0

    // Buffer object for the encounter lights (triple buffered since it's updated in game code)
    idBufferObject* encounterLightsBufferObject[3]; // Offset: 0x4150

    // Name of map whose save data is currently loaded
    idStrStatic < 256 > loadedSaveDataMapName; // Offset: 0x4168

    // Whether or not m_loadedSaveDataMapName is the Hub
    bool loadedSaveDataIsHub; // Offset: 0x4298

    // Persistent data Names of all encounters in this map that have been completed at any time in the past
    char completedEncounterNames[2048]; // Offset: 0x4299

    int completedEncounterNamesLength; // Offset: 0x4A9C

    // Names of all persistentDiscoveredAfterCollected objects that have been collected
    char collectedPersistentDiscoveredNames[256]; // Offset: 0x4AA0

    int collectedPersistentDiscoveredNamesLength; // Offset: 0x4BA0

    int frameId; // Offset: 0x4BA4

    // Events and Broadcasting system id for the Encounter events
    uint16 encounterBroadcastSystemId; // Offset: 0x4BA8

    idRandom random; // Offset: 0x4BAC

}; // Size: 0x4BB0
