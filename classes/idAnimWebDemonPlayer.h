struct idAnimWebDemonPlayer : idAnimator_GameAnimWeb
{
    idManagedClassPtr < idDemonPlayer > player; // Offset: 0x888

    // {{ units = m / s }}
    float maxRunSpeed; // Offset: 0x8A8

    // {{ units = m / s }}
    float maxWalkSpeed; // Offset: 0x8AC

    // minimum rate demon's walk anim will play at when speed is near 0
    float minWalkAnimRate; // Offset: 0x8B0

    // maximum rate demon's walk anim will play at when speed is near maxWalkSpeed
    float maxWalkAnimRate; // Offset: 0x8B4

    // minimum rate demon's run anim will play at when speed is near maxWalkSpeed
    float minRunAnimRate; // Offset: 0x8B8

    // maximum rate demon's run anim will play at when speed is near maxRunSpeed
    float maxRunAnimRate; // Offset: 0x8BC

    // percentage of the range between maxWalkSpeed and maxRunSpeed where the anims will blend
    float walkRunRangeScale; // Offset: 0x8C0

    // anim rate for the first-person and third-person ledge grab
    float ledgeGrabAnimRate; // Offset: 0x8C4

    float walkRate; // Offset: 0x8C8

    float runRate; // Offset: 0x8CC

    float sprint; // Offset: 0x8D0

    // alpha between walking and running
    float walkRunAlpha; // Offset: 0x8D4

    // alpha between normal and leaning left for turns while running forward
    float leanLeftAlpha; // Offset: 0x8D8

    // alpha between normal and leaning left for turns while running forward
    float leanRightAlpha; // Offset: 0x8DC

    // generic anim index that can be reused per demon
    float animIndex; // Offset: 0x8E0

    // rate multiplier for turn anims
    float turnAnimRate; // Offset: 0x8E4

    // index for which turn anim to play
    float turnAnimIndex; // Offset: 0x8E8

    // index for which death anim to play
    float deathAnimIndex; // Offset: 0x8EC

    // index for which ledge grab anim to play
    float ledgeGrabIndex; // Offset: 0x8F0

    // generic value that can be reused per demon
    float generic1; // Offset: 0x8F4

    // rate multipler for the spawn anim
    float spawnAnimRate; // Offset: 0x8F8

    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > frameCacheAnimNodeIndex; // Offset: 0x8FC

    int numWalkFrames; // Offset: 0x900

    // {{ units = m }}
    float totalWalkDistance; // Offset: 0x904

    int numRunFrames; // Offset: 0x908

    // {{ units = m }}
    float totalRunDistance; // Offset: 0x90C

    // cache the previous heading so we can see if we're turning and need to lean
    float prevHeading; // Offset: 0x910

    float adsPct; // Offset: 0x914

    float adsPctTarget; // Offset: 0x918

}; // Size: 0x920
