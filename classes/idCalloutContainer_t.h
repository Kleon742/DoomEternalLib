struct idCalloutContainer_t
{
    // The callout to play. ( some callouts are multi-part and will require a callout to be played before it can be played )
    idDeclGameEventCallout* callout; // Offset: 0x0

    // The team to use for the callout. Global Callouts do NOT need this set. Context-Based Callouts REQUIRE this to be set or they will not work.
    gameTeam_t team; // Offset: 0x8

    // Whether the logic node needs to use the team provided for the callout.
    bool isGlobal; // Offset: 0xC

}; // Size: 0x10
