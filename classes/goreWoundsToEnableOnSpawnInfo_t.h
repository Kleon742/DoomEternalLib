struct goreWoundsToEnableOnSpawnInfo_t
{
    // list of wounds to enable on spawn
    idList < goreWoundOnSpawnInfo_t , TAG_IDLIST , false > woundsOnSpawn; // Offset: 0x0

    // clone wounds from parent entity to gore entity
    bool cloneWoundsOnSpawn; // Offset: 0x18

}; // Size: 0x20
