struct idProp_DemonCircle : idAnimatedEntity
{
    struct aiSummonData_t
    {
        // which demon to spawn
        idDeclEntityDef* decl; // Offset: 0x0

        // session reward cost to spawn this ai
        int aiCost; // Offset: 0x8

    }; // Size: 0x10

    typedef idList < idManagedClassPtr < idSpawnNode > > SpawnNodeList;

    // the list of players potentially actively summoning a demon.
    idStaticList < int , 12 , false , TAG_IDLIST > activeSummoners; // Offset: 0x1B48

    idManagedClassPtr < idPlayer > mainSummoner; // Offset: 0x1B90

    idManagedClassPtr < idPlayer > playerWithSpawnCredit; // Offset: 0x1BB0

    // Cached value of the minimum number of stones needed to spawn a demon.
    int minSummonCost; // Offset: 0x1BD0

    // true if there is a summon in progress.
    bool summonInProgress; // Offset: 0x1BD4

    // team of the current summon.
    gameTeam_t currentSummonTeam; // Offset: 0x1BD8

    // amount of time in current summon
    float currentSummonTimer; // Offset: 0x1BDC

    // amount of time in current abandon
    float currentAbandonTimer; // Offset: 0x1BE0

    idManagedClassPtr < idVolume > volume; // Offset: 0x1BE8

    idSpawnNodeGroup demonSpawnNodes; // Offset: 0x1C08

    int currentDemonSpawnHandle; // Offset: 0x1C28

    idManagedClassPtr < idEntity > currentDemon; // Offset: 0x1C30

    // sensing volume to spawn
    idDeclEntityDef* volumeDef; // Offset: 0x1C50

    // time needed to summon a demon.
    float timeToSummon; // Offset: 0x1C58

    // time before the summon circle resets before it is abandoned.
    float abandonTimer; // Offset: 0x1C5C

    // demons to spawn
    idArray < idProp_DemonCircle::aiSummonData_t , 5 > aiSummons; // Offset: 0x1C60

    // range to spawn the demon away from the player if possible. {{ units = m }}
    idRange < float > spawnRange; // Offset: 0x1CB0

    // inventory definition of the summoning stone.
    idDeclInventory* stoneDef; // Offset: 0x1CB8

    // POI string for deliver verb.
    idStrId deliverPOIString; // Offset: 0x1CC0

    // POI string for kill verb.
    idStrId killPOIString; // Offset: 0x1CC4

    // POI string for defend verb.
    idStrId defendPOIString; // Offset: 0x1CC8

    // Spawn nodes managed by this control point.
    idList < idManagedClassPtr < idSpawnNode > , TAG_IDLIST , false > spawnNodes; // Offset: 0x1CD0

}; // Size: 0x1CE8
