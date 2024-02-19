struct posePositionScoreParms_Advanced_t
{
    // bias damage score away from positions we've been damaged while standing at
    float damageOriginBias; // Offset: 0x0

    // bias damage score away from traveling across positions we've been damaged while standing at
    float damageIntersectionBias; // Offset: 0x4

    // bias damage score away from traveling in direction towards any damaged positions
    float damageDirectionBias; // Offset: 0x8

    // bias damage score away from adopting poses we've been damaged in recently
    float damagePoseBias; // Offset: 0xC

    // bias score away from positions we've already been in
    float staleLocationBias; // Offset: 0x10

    // bias score towards attacks ( throws, shoots, and casts )
    float attackBias; // Offset: 0x14

    // bias score towards directions ( for evades, charges, retreats, etc )
    float directionBias; // Offset: 0x18

    // don't allow positions further than this dist from tether origin {{ units = m }}
    float maxDistFromTether; // Offset: 0x1C

    // make sure to run these tests on all the positions
    animQueryTestTypes_t extraAnimQueryTests; // Offset: 0x20

    // extra options for how this attack is validated in animquery system
    animQueryTestOptions_t extraAnimQueryTestOptions; // Offset: 0x24

    // only move in the same direction away from tether origin
    bool restrictToCurrentDirection; // Offset: 0x28

    // only move from blocked shots if this many has been blocked
    int minNumBlockedShotsToMove; // Offset: 0x2C

    // only move from blocked shots if this fraction has been blocked
    float fractionBlockedShotsToMove; // Offset: 0x30

    // optionally, run this decision tree as a pre-filter for scoring
    idAtomicString decisionTreeName; // Offset: 0x38

    // if true, ignore interval timers set in decl
    bool ignoreTimers; // Offset: 0x40

}; // Size: 0x48
