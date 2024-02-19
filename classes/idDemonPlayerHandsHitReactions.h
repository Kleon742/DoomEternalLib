struct idDemonPlayerHandsHitReactions : idEventReceiver
{
    // demon player who controls these hands
    idManagedClassPtr < idDemonPlayer > owner; // Offset: 0x38

    // animator used to play the anims
    idAnimWebHandsDirectionalAnimator webAnimator; // Offset: 0x58

    // last time a reaction was triggered
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHitReactionTime; // Offset: 0x908

    // if there is a movement graph, record the previous movement here
    float lastHitReactionDist; // Offset: 0x910

    idHandsHitReaction_t* lastHitReaction; // Offset: 0x918

    idSpring < idVec1 > smoothedYaw; // Offset: 0x920

    bool snapToYaw; // Offset: 0x950

    // hit direction in world coord system
    idVec3 worldHitDirection; // Offset: 0x954

    // tracks whether something is playing
    bool reactionPlaying; // Offset: 0x960

}; // Size: 0x968
