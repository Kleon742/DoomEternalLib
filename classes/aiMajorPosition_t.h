struct aiMajorPosition_t
{
    // ideal facing of this point -- derived from how the idle animation is oriented
    idStaticList < idVec3 , 4 , false , TAG_IDLIST > idealFacings; // Offset: 0x0

    // optional
    idAICover cover; // Offset: 0x48

    // {{ units = m }}
    idVec3 origin; // Offset: 0x4C

    idTypesafeTime < float , secondUnique_t , 1 > travelTime; // Offset: 0x58

    // {{ units = m }}
    float radius; // Offset: 0x5C

    // minimum dot product between dir to enemy and ideal facing -- used to cull points that have vis but face wrong direction
    float minFacingDot; // Offset: 0x60

    // for keeping track of the index in the cover manager's own lists
    int coverManagerIndex; // Offset: 0x64

    // deals with optimal weapon range, optimal cover distances, etc
    float enemyDistScore; // Offset: 0x68

    // deals with optimal weapon range, optimal cover distances, etc
    float hostileDistScore; // Offset: 0x6C

    // basically, whether or not there is a path to the position
    float pathScore; // Offset: 0x70

    // closest distance from path to this node to enemy {{ units = m }}
    float enemyPathDist; // Offset: 0x74

    // closest distance from path to this node to same AI type {{ units = m }}
    float sameAITypePathDist; // Offset: 0x78

    // whether this position is good for our group ( clustering, etc )
    float groupScale; // Offset: 0x7C

    // if another AI got killed here
    float dangerScore; // Offset: 0x80

    // how well this position has served prior AI using it
    float efficacyScore; // Offset: 0x84

    // if this position is a hangout point
    float hangoutScore; // Offset: 0x88

    // weight from role hint nodes
    float roleWeight; // Offset: 0x8C

    // damage accumulated by any AI within radius of this node
    float totalDamage; // Offset: 0x90

    // fraction of how many minor positions have collisions
    float meleeConflictFraction_major; // Offset: 0x94

    // fraction of how many minor positions have collisions
    float meleeConflictFraction_minor; // Offset: 0x98

    float rangedConflictFraction_major; // Offset: 0x9C

    float rangedConflictFraction_minor; // Offset: 0xA0

    float boundsConflictFraction_major; // Offset: 0xA4

    float boundsConflictFraction_minor; // Offset: 0xA8

    // fraction of our path that has collisions
    float pathCollisionFraction; // Offset: 0xAC

    int pathCollisionQueryIndex; // Offset: 0xB0

    idFlags activeTestFlags; // Offset: 0xB4

    idFlags neededTestFlags; // Offset: 0xB8

    // evaluated at query time !!
    float enemyVisibility; // Offset: 0xBC

    float hostileVisibility; // Offset: 0xC0

    float aiDensity; // Offset: 0xC4

    int aiAtPoint; // Offset: 0xC8

    // {{ units = m }}
    float leaderDistance; // Offset: 0xCC

    // last time we updated the path to this node
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pathUpdateTime; // Offset: 0xD0

}; // Size: 0xD8
