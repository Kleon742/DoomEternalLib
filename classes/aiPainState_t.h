struct aiPainState_t
{
    // the current pain state this AI is in - this is only valid while the AI is playing a (non-twitch) pain or stagger animation
    painType_t currentPainReaction; // Offset: 0x0

    // the next pain state to go to
    painType_t lastPainReaction; // Offset: 0x4

    // the last time we played a pain reaction
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastPainReactionTime; // Offset: 0x8

    // last time we played this pain reaction
    idArray < idTypesafeTime < long long , gameTimeUnique_t , 999960 > , 22 > lastPainReactionTimes; // Offset: 0x10

    // the time when this AI is finished with stagger
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > finishStaggerTime; // Offset: 0xC0

    // how long this AI should be in the stagger state.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > staggerLength; // Offset: 0xC8

    // the rate at which to play this animation
    float staggerRate; // Offset: 0xD0

    // damage info accumulated over the entire frame
    idAIDamageInfo* damageInfo; // Offset: 0xD8

    // leaky integrator for tracking incoming damage
    idArray < idLeakyBucket , 22 > damageBuckets; // Offset: 0xE0

    // parameters for the last pain event
    aiPainParms_t painParms; // Offset: 0x2F0

    // cached continually, migrated to current when pain starts
    SDPSReaction_t tentativeSDPSReaction; // Offset: 0xE08

    // more info for the current pain reaction
    SDPSReaction_t currentSDPSReaction; // Offset: 0xE60

    // Bit Field of tests to perform or skip in the pain graph.
    painAnimTestFlags_t painGraphTestFlags; // Offset: 0xEB8

    // Ai sdps recovery is scaled by this much, which decreases each time
    float remainingRecoveryPotential; // Offset: 0xEBC

}; // Size: 0xEC0
