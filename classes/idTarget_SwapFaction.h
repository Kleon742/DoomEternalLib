struct idTarget_SwapFaction : idTarget
{
    struct factionOverrideEntry_t
    {
        // this override will apply against all actors sharing this faction name
        idAtomicString targetFactionName; // Offset: 0x0

        // AI will feel this respect until duration is expired
        socialRespect_t overrideRespect; // Offset: 0x8

        // AI will feel this emotion until duration is expired
        socialEmotion_t overrideEmotion; // Offset: 0xC

        // duration of override effect
        idTypesafeTime < float , secondUnique_t , 1 > durationInSeconds; // Offset: 0x10

    }; // Size: 0x18

    struct factionOverrideInfo_t
    {
        // this override will only be put on AI sharing this faction name
        idAtomicString sourceFactionName; // Offset: 0x0

        // list of vs faction entries
        idList < idTarget_SwapFaction::factionOverrideEntry_t , TAG_IDLIST , false > overrides; // Offset: 0x8

    }; // Size: 0x20

    struct factionChangeInfo_t
    {
        // this change will only apply to actors sharing this faction name
        idAtomicString sourceFactionName; // Offset: 0x0

        // faction name will be changed to this value
        idAtomicString replacementFactionName; // Offset: 0x8

    }; // Size: 0x10

    // infos about adding override faction responses to AI
    idList < idTarget_SwapFaction::factionOverrideInfo_t , TAG_IDLIST , false > overrideInfos; // Offset: 0xB88

    // infos about changing actor's faction names
    idList < idTarget_SwapFaction::factionChangeInfo_t , TAG_IDLIST , false > changeInfos; // Offset: 0xBA0

}; // Size: 0xBB8
