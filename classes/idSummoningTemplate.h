struct idSummoningTemplate : idInfo
{
    // List of groups that is sequentially run
    idList < idSummoningGroup_t , TAG_IDLIST , false > fixedSummonGroups; // Offset: 0xB90

    // List of group to randomly run after all fixed encounters are complete
    idList < idSummoningGroup_t , TAG_IDLIST , false > randomSummonPool; // Offset: 0xBA8

    // List of tiered summoning waves, executed sequentially.
    idList < idSummoningWave_t , TAG_IDLIST , false > fixedSummoningWaves; // Offset: 0xBC0

    // List of tiered summoning waves, executed in order but looped until the summoning encounter is complete
    idList < idSummoningWave_t , TAG_IDLIST , false > randomSummoningWaves; // Offset: 0xBD8

}; // Size: 0xBF0
