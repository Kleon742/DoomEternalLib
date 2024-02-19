struct Shared_FiringIntentCollisions : idAIStateTransition
{
    // bitflags of the monsters I want to check against
    aiMonsterType_t monsterTypes; // Offset: 0xF8

    // radius for query {{ units = m }}
    float radius; // Offset: 0x100

    // number of friendlies I must be blocking for transcode yes
    int threshold_ImBlocking; // Offset: 0x104

    // number of friendlies must be blocking me for transcode yes
    int threshold_BlockingMe; // Offset: 0x108

    // if true, use my current origin rather than my reserved future intent
    bool useCurrentOrigin; // Offset: 0x10C

    // maximum allowable path collision fraction, 1.0 implies no check will be made
    float pathCollisionFractionMax; // Offset: 0x110

    // maximum allowable path collision fraction per frame over and above starting value
    float pathCollisionFractionMaxIncrease; // Offset: 0x114

    // fov of our perception of firing collisions
    idTypesafeNumber < float , DegreesUnique_t > perceptionFOV; // Offset: 0x118

}; // Size: 0x120
