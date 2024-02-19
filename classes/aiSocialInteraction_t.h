struct aiSocialInteraction_t
{
    // whether this set of responses applies between entire factions, entity vs faction, or just between individuals
    socialInteractionCategory_t category; // Offset: 0x0

    // position percepts are clustered using this radius {{ units = m }}
    float positionAggregationRadius; // Offset: 0x4

    // if individual responses have a range value of -1, use this instead {{ units = m }}
    idRange < float > defaultRange; // Offset: 0x8

    // basic relationship we hold with this other entitydef
    socialRelation_t defaultRelation; // Offset: 0x10

    // list of relations we will respond with, when provoked in certain ways
    idList < aiSocialResponse_t , TAG_IDLIST , false > responses; // Offset: 0x20

    // whether this interaction is enabled
    bool enabled; // Offset: 0x38

}; // Size: 0x40
