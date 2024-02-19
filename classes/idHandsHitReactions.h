struct idHandsHitReactions : idHandsDirectionalAnimator
{
    // last time a reaction was triggered
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHitReactionTime; // Offset: 0x8F0

    // if there is a movement graph, record the previous movement here {{ units = m }}
    float lastHitReactionDist; // Offset: 0x8F8

    idHandsHitReaction_t* lastHitReaction; // Offset: 0x900

    // This is the cached state of the last hit reaction that is current used in the melee trace
    idHandsHitReaction_t* cachedLastHitReaction; // Offset: 0x908

    idSpring < idVec1 > smoothedYaw; // Offset: 0x910

    bool snapToYaw; // Offset: 0x940

    // hit direction in world coord system
    idVec3 worldHitDirection; // Offset: 0x944

    // scales the distance coming from a movement graph
    float distanceScale; // Offset: 0x950

    // tracks whether something is playing
    bool reactionPlaying; // Offset: 0x954

    // set by player physics callback when a collision is detected
    bool collided; // Offset: 0x955

    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > defaultSubWebIndex; // Offset: 0x956

    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > defaultStateIndex; // Offset: 0x958

    idAtomicString curWeaponSubweb; // Offset: 0x960

    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > curWeaponSubWebIndex; // Offset: 0x968

    // weapon associated with curWeaponSubWebIndex
    idDeclWeapon* weaponDecl; // Offset: 0x970

}; // Size: 0x978
