struct idProp_PlayableDemonCircle : idAnimatedEntity
{
    struct aiSummonData_t
    {
        // which demon to spawn
        idDeclEntityDef* decl; // Offset: 0x0

        // session reward cost to spawn this ai
        int aiCost; // Offset: 0x8

    }; // Size: 0x10

    typedef idList < idManagedClassPtr < idSpawnNode > > SpawnNodeList;

    idManagedClassPtr < idPlayer > mainSummoner; // Offset: 0x1B48

    // the list of players potentially actively summoning a demon.
    idStaticList < int , 12 , false , TAG_IDLIST > activeSummoners; // Offset: 0x1B68

    // number of stones needed to spawn a demon.
    int summonCost; // Offset: 0x1BB0

    // true if there is a summon in progress.
    bool summonInProgress; // Offset: 0x1BB4

    // team of the current summon.
    gameTeam_t currentSummonTeam; // Offset: 0x1BB8

    // amount of time in current summon
    float currentSummonTimer; // Offset: 0x1BBC

    // amount of time in current abandon
    float currentAbandonTimer; // Offset: 0x1BC0

    idManagedClassPtr < idVolume > volume; // Offset: 0x1BC8

    // sensing volume to spawn
    idDeclEntityDef* volumeDef; // Offset: 0x1BE8

    // time needed to summon a demon.
    float timeToSummon; // Offset: 0x1BF0

    // time before the summon circle resets before it is abandoned.
    float abandonTimer; // Offset: 0x1BF4

    // range to spawn the demon away from the player if possible.
    idRange < float > spawnRange; // Offset: 0x1BF8

    // inventory definition of the summoning stone.
    idDeclInventory* stoneDef; // Offset: 0x1C00

    // POI string for deliver verb.
    idStrId deliverPOIString; // Offset: 0x1C08

    // POI string for kill verb.
    idStrId killPOIString; // Offset: 0x1C0C

    // POI string for defend verb.
    idStrId defendPOIString; // Offset: 0x1C10

}; // Size: 0x1C18
