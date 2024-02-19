struct idDeclAIComponent_TransientFocus : idDeclAIComponent
{
    struct interestBuildRate_t
    {
        // range in which this time interval is valid {{ units = m }}
        idRange < float > distanceRange; // Offset: 0x0

        // range of times it will be until next glance
        idRange < float > glanceIntervalInSeconds; // Offset: 0x8

        // glances last this long
        idRange < float > glanceDurationInSeconds; // Offset: 0x10

    }; // Size: 0x18

    struct interestInfo_t
    {
        // lookup these settings with this name
        idAtomicString name; // Offset: 0x0

        // data for rates
        idList < idDeclAIComponent_TransientFocus::interestBuildRate_t , TAG_IDLIST , false > interestBuildRates; // Offset: 0x8

        // how long the interest will last overall
        idRange < float > interestDurationInSeconds; // Offset: 0x20

    }; // Size: 0x28

    struct interestTypeData_t
    {
        // DO NOT CHANGE
        interestType_t type; // Offset: 0x0

        // list of commonly used interest infos, referenceable by name
        idList < idDeclAIComponent_TransientFocus::interestInfo_t , TAG_IDLIST , false > interestInfos; // Offset: 0x8

    }; // Size: 0x20

    // at spawn, gather any work nodes within this radius {{ units = m }}
    float workRadius; // Offset: 0x98

    // data for interests
    idArray < idDeclAIComponent_TransientFocus::interestTypeData_t , 14 > interestData; // Offset: 0xA0

}; // Size: 0x260
