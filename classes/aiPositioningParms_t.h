struct aiPositioningParms_t
{
    // the minimum visibility fraction an area must have to even be valid
    float minVisibility; // Offset: 0x0

    // the maximum visibility fraction an area must have to even be valid
    float maxVisibility; // Offset: 0x4

    // the ideal visibility fraction for valid areas
    float idealVisibility; // Offset: 0x8

    // when sorting positions by visibility, discard anyone under/over this value if
    float visibilitySortCutoff; // Offset: 0xC

    // ideal height over enemy ( can be negative if desired ) {{ units = m }}
    idRange < float > idealHeightDelta; // Offset: 0x10

    // valid height over enemy ( can be negative if desired ) {{ units = m }}
    idRange < float > validHeightDelta; // Offset: 0x18

    // max angle, in degrees, for angle of elevation/depression to enemy
    float maxVerticalAngleDeg; // Offset: 0x20

    // the longest travel time, in seconds, this ai will tolerate when considering a new major position
    idTypesafeTime < float , secondUnique_t , 1 > maxTravelTime; // Offset: 0x24

    // ideal travel time, in seconds, to be considered when considering a new position ( to keep guys from making repeated small movements )
    idTypesafeTime < float , secondUnique_t , 1 > idealTravelTime; // Offset: 0x28

    // path to a new position shouldn't bring the AI any closer than this distance to current enemy {{ units = m }}
    float minEnemyPathDistance; // Offset: 0x2C

    // path to a new position shouldn't bring the AI any closer than this distance to an AI of the same type, if negative then unused {{ units = m }}
    float minSameAITypePathDistance; // Offset: 0x30

    // accumulated damage at a position is multiplied by this much and added to overall position score
    float factor_damage; // Offset: 0x34

    // travel time to a position is multiplied by this much and added to overall position score
    float factor_travelTime; // Offset: 0x38

    // enemy distance from a position, outside of optimal range window, is multiplied by this much and added to overall position score
    float factor_enemyDist; // Offset: 0x3C

    // 1 minus dot product between position's ideal facing and dir to enemy is multiplied by this much and added to overall position score
    float factor_facing; // Offset: 0x40

    // how much we enjoy having height on the enemy
    float factor_height; // Offset: 0x44

    // how much we want to avoid standing in firing lanes of other AI
    float factor_friendlyFiringSolutions; // Offset: 0x48

    // how much we want to have a clear firing arc
    float factor_clearFiringArc; // Offset: 0x4C

    // how much we want to avoid running in front of firing guys
    float factor_pathConflicts; // Offset: 0x50

    // how much we want to avoid spots in the current FOV of the enemy
    float factor_enemyFOV; // Offset: 0x54

    // how much we want to be near a leader
    float factor_leaderDistance; // Offset: 0x58

    // cos of angle for factor_enemyFOV
    float relevantEnemyFOVDot; // Offset: 0x5C

    // invalidate points inside this fov
    idTypesafeNumber < float , DegreesUnique_t > enemyFOV_min; // Offset: 0x60

    // invalidate points outside this fov
    idTypesafeNumber < float , DegreesUnique_t > enemyFOV_max; // Offset: 0x64

    // don't use literal enemy fov, use the direction to me as source vector
    bool useMyDirForEnemyFOV; // Offset: 0x68

    // travel time to any hangout point is reduced by this much
    idTypesafeTime < float , secondUnique_t , 1 > hangoutTimeBonus; // Offset: 0x6C

    // accumulated damage at a position isn't even considered unless above this threshold
    float damageThreshold; // Offset: 0x70

    // max ai per 256 x 256 area for a position to be valid
    float maxAIDensity; // Offset: 0x74

    // max AI at a position, period, for it to be valid ( excepting hangouts, which are always 1 )
    int maxAIAtPoint; // Offset: 0x78

    // extra density checks for specify AI types
    idList < aiDensityExtraCheck_t , TAG_IDLIST , false > aiDensityExtraChecks; // Offset: 0x80

    // minimum distance from the current enemy for a position to be valid {{ units = m }}
    float minDistanceFromEnemy; // Offset: 0x98

    // maximum distance from the current enemy for a position to be valid {{ units = m }}
    float maxDistanceFromEnemy; // Offset: 0x9C

    // minimum optimal distance from the current enemy {{ units = m }}
    float minOptimalDistanceFromEnemy; // Offset: 0xA0

    // maximum optimal distance from the current enemy {{ units = m }}
    float maxOptimalDistanceFromEnemy; // Offset: 0xA4

    // the max time we can linger at a position of this type
    float maxSecondsAtPosition; // Offset: 0xA8

    // parms to use when deciding best low level positioning strategy ( independent of all above values )
    strategyConditionParms_t lowLevelParms; // Offset: 0xB0

    // ( in seconds ) time to wait for enemy to reappear before deciding to move closer
    float holdPositionUntilVisibleTime; // Offset: 0x108

    // prioritize against taking positions that have friendlies within this arc to enemy
    idTypesafeNumber < float , DegreesUnique_t > desiredFiringSolutionArc; // Offset: 0x10C

    // move arc origin this much relative to dir to enemy {{ units = m }}
    float desiredFiringSolutionOffset; // Offset: 0x110

    // only pay attention to these types when determining firing solutions
    aiMonsterType_t desiredFiringSolutionMonsterTypeFilter; // Offset: 0x118

    // radial size of ranged attack {{ units = m }}
    float desiredFiringSolutionRadius; // Offset: 0x120

    // if > 0, desired arc for melee intents ( overrides the default radius-distance arc calculation )
    idTypesafeNumber < float , DegreesUnique_t > desiredMeleeArc; // Offset: 0x124

    // if > 0, desired radius of melee intents ( overrides default bounds radius ) {{ units = m }}
    float desiredMeleeIntentRadius; // Offset: 0x128

    // if > 0, desired radius of melee intents ( overrides default bounds radius ) {{ units = m }}
    float desiredMoveIntentRadius; // Offset: 0x12C

    // use this if nothing else is specified in behaviors
    aiIntentType_t defaultIntentType; // Offset: 0x130

    // minimum distance from the current location for a position to be valid {{ units = m }}
    float minDistanceFromCurrent; // Offset: 0x134

    // if true, AI won't choose locations on the way of charging AIs
    bool avoidChargeCollisions; // Offset: 0x138

    // if true, major position must have a valid direct (i.e. linear) path to the target's position
    bool requireDirectNavToTarget; // Offset: 0x139

    // we want to be within this distance of our group leader {{ units = m }}
    idRange < float > leaderDistance_ideal; // Offset: 0x13C

    // outright exclude any spots outside of this distance from group leader {{ units = m }}
    idRange < float > leaderDistance_valid; // Offset: 0x144

}; // Size: 0x150
