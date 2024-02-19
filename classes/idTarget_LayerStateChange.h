struct idTarget_LayerStateChange : idTarget
{
    // layers to activate, spawns in the entities now.
    idList < const idDeclLayer * , TAG_IDLIST , false > activate_Immediately; // Offset: 0xB88

    // layers to activate, spawns in the entities next map load
    idList < const idDeclLayer * , TAG_IDLIST , false > activate_NextMapLoad; // Offset: 0xBA0

    // layers to remove, deletes all the entities now.
    idList < const idDeclLayer * , TAG_IDLIST , false > remove_Immediately; // Offset: 0xBB8

    // layers to remove, won't spawn in entities next map load.
    idList < const idDeclLayer * , TAG_IDLIST , false > remove_NextMapLoad; // Offset: 0xBD0

    // Render Model Showing / Hiding layers to trigger, which immediately sets the visibility to TRUE of the rendermodels associated with the entities in the layer
    idList < const idDeclLayer * , TAG_IDLIST , false > showRenderModels_Immediately; // Offset: 0xBE8

    // layers to trigger, which on next map load sets the visibility to TRUE of the rendermodels associated with the entities in the layer
    idList < const idDeclLayer * , TAG_IDLIST , false > showRenderModels_NextMapLoad; // Offset: 0xC00

    // layers to trigger, which immediately sets the visibility to FALSE of the rendermodels associated with the entities in the layer
    idList < const idDeclLayer * , TAG_IDLIST , false > hideRenderModels_Immediately; // Offset: 0xC18

    // layers to trigger, which on next map load sets the visibility to FALSE of the rendermodels associated with the entities in the layer
    idList < const idDeclLayer * , TAG_IDLIST , false > hideRenderModels_NextMapLoad; // Offset: 0xC30

    // layers to trigger, which immediately starts the streaming of all geom cache entities in the layer
    idList < const idDeclLayer * , TAG_IDLIST , false > startGeomCacheStreaming_Immediately; // Offset: 0xC48

    // layers to trigger, which immediately starts the streaming of all geom cache entities in the layer on the next map load
    idList < const idDeclLayer * , TAG_IDLIST , false > startGeomCacheStreaming_NextMapLoad; // Offset: 0xC60

    // layers to trigger, which immediately stops the streaming of all geom cache entiites in the layer
    idList < const idDeclLayer * , TAG_IDLIST , false > stopGeomCacheStreaming_Immediately; // Offset: 0xC78

    // layers to trigger, which immediately stops the streaming of all geom cache entiites in the layer on the next map load
    idList < const idDeclLayer * , TAG_IDLIST , false > stopGeomCacheStreaming_NextMapLoad; // Offset: 0xC90

    // dormancy layers to go dormant, entities which immediately go dormant ( stop executing )
    idList < const idDeclLayer * , TAG_IDLIST , false > dormant_Immediately; // Offset: 0xCA8

    // layers to go dormant, entities which on next map load go dormant ( stop executing )
    idList < const idDeclLayer * , TAG_IDLIST , false > dormant_NextMapLoad; // Offset: 0xCC0

    // layers to awake, entities which immediately wake up ( start executing )
    idList < const idDeclLayer * , TAG_IDLIST , false > awake_Immediately; // Offset: 0xCD8

    // layers to awake, entities which on next map load wake up ( start executing )
    idList < const idDeclLayer * , TAG_IDLIST , false > awake_NextMapLoad; // Offset: 0xCF0

    // if set we will remove all layers containing this wildcard on the name
    idStr removeLayersWildCard; // Offset: 0xD08

    // layers to activate, spawns in the entities now.
    idList < const idDeclLayer * , TAG_IDLIST , false > active_Immediately; // Offset: 0xD38

    // layers to activate, spawns in the entities next map load
    idList < const idDeclLayer * , TAG_IDLIST , false > active_NextMapLoad; // Offset: 0xD50

    // layers to remove, deletes all the entities now.
    idList < const idDeclLayer * , TAG_IDLIST , false > deactive_Immediately; // Offset: 0xD68

    // layers to remove, won't spawn in entities next map load.
    idList < const idDeclLayer * , TAG_IDLIST , false > deactive_NextMapLoad; // Offset: 0xD80

    // Checkpoint info Should checkpoint data be saved?
    bool saveCheckpoint; // Offset: 0xD98

    // Checkpoint Entity Name that can be referenced through script or hard loaded during development
    idStr checkpointName; // Offset: 0xDA0

    // the map group containing the checkpoint
    automapMapGroupId_t checkpointMapGroup; // Offset: 0xDD0

    // the readable name used to show in menus, human friendly name
    idStrId readableName; // Offset: 0xDD4

    // The image displayed with the checkpoint
    idMaterial2* checkpointImage; // Offset: 0xDD8

    // delay actual checkpoint save by this time
    float delayCheckPointSec; // Offset: 0xDE0

    // spawn at this spot in the new map when activating a checkpoint.
    idManagedClassPtr < idPlayerStart > playerSpawnSpot; // Offset: 0xDE8

    // if set, this will write the checkpoint save to storage instead of just updating it in memory
    bool persistToStorage; // Offset: 0xE08

    // if set, the level intro bink will be played when this checkpoint is loaded.
    bool playBinkOnLoad; // Offset: 0xE09

    // if loaded from the dev menu check point, this loadout will be used.
    idDeclDevInvLoadout* devPlayerLoadout; // Offset: 0xE10

    // which checkpoint group this is associated with ( MAPTIP_CHECKPOINT_00 is for a fresh load, and should not be assigned to a layer state change)
    mapTipCheckpoint_t mapTipGroup; // Offset: 0xE18

    // Params used to trigger tutorial events or codex entries after a specified number of deaths
    idTutorialCheckpointData_t tutorialCheckpointData; // Offset: 0xE20

    // This will override the pool data specified in the game challenge entity
    idDeclAIPoolNumbers* aiPoolNumbersOverride; // Offset: 0xE48

    // Create a checkpoint entity and fill in the necessary data. We will use the existing class  to handle activation callbacks. The checkpoint class will still exist as a stand alone entity.
    idTarget_PlayerCheckpoint* checkpointEnt; // Offset: 0xE50

    bool checkPointSaved; // Offset: 0xE58

    bool forceNextMapLoadLayers; // Offset: 0xE59

    // Used for ordering the state change in editor's layer manager.
    int orderingIndex; // Offset: 0xE5C

    // remove the save gating on these entities
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > saveUngateEntities; // Offset: 0xE60

    // lift gate on entities due for removal, needs to be done by name as the entities could already be removed
    idList < idStr , TAG_IDLIST , false > ungateRemoveEntities; // Offset: 0xE78

}; // Size: 0xE90
