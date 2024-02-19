struct idInjuredState
{
    // name of injured state which matches md6def path name
    idAtomicString name; // Offset: 0x0

    // subweb suffix for originating pain subweb
    idAtomicString subwebSuffix; // Offset: 0x8

    // injury name to add to pain animweb node name
    idAtomicString nodeSuffix; // Offset: 0x10

    // bleed out rate in core health/sec
    float bleedRate; // Offset: 0x18

    // animweb idle node index to use
    unsigned char idleIndex; // Offset: 0x1C

    // animweb run node index to use
    unsigned char runIndex; // Offset: 0x1D

    // maximum gore level supported for each limb in this injured state
    idList < damageGroupMaxGoreLevel_t , TAG_IDLIST , false > damageGroupMaxGoreLevels; // Offset: 0x20

    // classic death suppression flag
    systemSuppressionFlag_t classicDeathSuppressionFlags; // Offset: 0x38

    // true to allow death animations in this state
    bool enableDeathAnims; // Offset: 0x0

    // true to allow pain animations in this state
    bool enablePainAnims; // Offset: 0x0

    // true if AI should die instead of entering this injured state
    bool shouldDie; // Offset: 0x0

    // true if AI can throw in this injured state
    bool canThrow; // Offset: 0x0

    // true if AI should die instead of leaving this injured state
    bool terminalState; // Offset: 0x0

    // true if AI is allowed to track focus with head
    bool allowHeadTracking; // Offset: 0x0

    // true if AI is allowed to track focus with torso
    bool allowAimTracking; // Offset: 0x0

    // true if AI uses IK in this injured state
    bool allowIK; // Offset: 0x0

    // true if AI should be head stomped by player in this injured state
    bool canBeHeadStomped; // Offset: 0x0

    // true if AI can use all traversals in this injured state
    bool canUseAllTraversalsWhileInjured; // Offset: 0x0

    // true if AI can use down traversals in this injured state
    bool canUseDownTraversalsWhileInjured; // Offset: 0x0

}; // Size: 0x40
