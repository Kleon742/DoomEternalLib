struct idWorldspawn : idBloatedEntity
{
    // world gravity {{ units = m / ( s * s ) }}
    float gravity; // Offset: 0xB88

    // multiplier for AI visible sense input throughout whole level
    float aiSenseScale; // Offset: 0xB8C

    // z value of auto-kill, should be lower than any AI would ever go in the level {{ units = m }}
    float aiKillZ; // Offset: 0xB90

    // z value of auto-kill for demon players {{ units = m }}
    float demonPlayerKillZ; // Offset: 0xB94

    // if player (or demon player) falls below this z in pvp, they will auto-respawn to a valid spot on the map
    float pvpRespawnZ; // Offset: 0xB98

    // length of player aim trace - should be 1024 except for special cases to avoid performance hit {{ units = m }}
    float playerAimDistance; // Offset: 0xB9C

    // the entity name prefix used on reference maps, i.e. "ai" or "design", etc. default = ""
    idStr entityPrefix; // Offset: 0xBA0

    // Override the default distance (30 m) at which placed decals will start fading out.
    float decalFadeStartDistance; // Offset: 0xBD0

    // environment settings decl for the level
    idDeclEnv* envSettings; // Offset: 0xBD8

    // if set, index of the visibility group to use when baking lightmap/shadow cache for the default environment
    int envVisibilityGroup; // Offset: 0xBE0

    // Override for the player def
    idDeclEntityDef* playerDef; // Offset: 0xBE8

    // if this map is loaded from map command these layers will be used and set on player
    idList < const idDeclLayer * , TAG_IDLIST , false > initialLayers; // Offset: 0xBF0

    // give this list of inventory items when the map is started through devmap
    idList < idStartInventory , TAG_IDLIST , false > devmapStartInventory; // Offset: 0xC08

    // give this loadout to the player when the map is started through devmap
    idDeclDevInvLoadout* devmapInvLoadout; // Offset: 0xC20

    // give all when starting this map. don't bother with a list
    bool devmapGiveAll; // Offset: 0xC28

    // Enable noTarget when starting the map
    bool devmapNotarget; // Offset: 0xC29

    // Enable god when starting the map.
    bool devmapGodMode; // Offset: 0xC2A

    // The checkpoint name (entity spawn point) for devmap loads
    idStr devmapCheckpointName; // Offset: 0xC30

    // types of aas's in this map.
    idList < aasType_t , TAG_IDLIST , false > aasTypes; // Offset: 0xC60

    // ID_USE_OLD_AAS_CODE The allowed entity types of the map. If this is empty then everything is allowed.
    idList < idStr , TAG_IDLIST , false > allowedTypes; // Offset: 0xC78

    idList < int , TAG_IDLIST , false > allowedTypesHashes; // Offset: 0xC90

    // Similar to allowedTypes, but only this reference map can place these types.
    idList < idStr , TAG_IDLIST , false > ownedTypes; // Offset: 0xCA8

    idList < int , TAG_IDLIST , false > ownedTypesHashes; // Offset: 0xCC0

    // all the info needed to define the place in the workflow the map it as
    idWorkflowInfo workflowInfo; // Offset: 0xCD8

    // set to false using idTargt_SetWorldSpawnAIUsesCoverFalse if AI does not use cover to increase performance
    bool aiUsesCover; // Offset: 0xD20

    // base global settings for this map, this can be changed between maps and even within a map
    idDeclAIGlobalSettingsRef globalAIsettings; // Offset: 0xD28

    // Gamechallenge invasion defaults with
    idEntityDefRef defaultGameChallenge; // Offset: 0xD30

    // settings that will not typically change at all, even across maps
    idDeclAIStaticSettings* staticAIsettings; // Offset: 0xD38

    // list of items the player is not allowed to use in this map, but allowed to have for progression
    idList < const idDeclInventory * , TAG_IDLIST , false > playerInvDisable; // Offset: 0xD40

    // the data associated with the demon upgrades to give when a demon has a bounty on it
    idDeclDemonBounty* declDemonBounty; // Offset: 0xD58

    // the data for demon bounty requests and frequency of updates
    idDeclBountyManager* declDemonBountyMgr; // Offset: 0xD60

    // the data associated with the demon upgrades to give when a demon has a bounty on it - Master levels
    idDeclDemonBounty* masterLevelDemonBounty; // Offset: 0xD68

    // the data for demon bounty requests and frequency of updates - Master levels
    idDeclBountyManager* masterLevelDemonBountyMgr; // Offset: 0xD70

    // decl that describes the automap.
    idDeclAutomap* automapDecl; // Offset: 0xD78

    // damage to use for auto-kill
    idDeclDamage* killZDamage; // Offset: 0xD80

    // use exclusive trigger check
    bool useExclusiveTriggerCheck; // Offset: 0xD88

}; // Size: 0xD90
