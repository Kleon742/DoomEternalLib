struct socialRelation_t
{
    // spawnID of other entity, not necessarily valid in some contexts
    idSpawnId spawnID; // Offset: 0x0

    // how much we respect another character ( likelihood of cooperating with what they wish )
    socialRespect_t respectLevel; // Offset: 0x4

    // our raw feeling toward another character ( likelihood of helping or attacking them )
    socialEmotion_t emotionLevel; // Offset: 0x8

}; // Size: 0xC
