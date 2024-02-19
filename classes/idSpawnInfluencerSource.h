struct idSpawnInfluencerSource : idClass
{
    idHandle < int , invalidSpawnInfluencer_t , INVALID_INFLUENCER > handle; // Offset: 0x10

    // Current calculation data
    spawnInfluencerSourceInfo_t currentSourceInfo; // Offset: 0x14

    // Active influencers, instantiated by child class on creation
    idList < idSpawnInfluencer * , TAG_IDLIST , false > influencers; // Offset: 0x38

}; // Size: 0x50
