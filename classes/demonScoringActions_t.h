struct demonScoringActions_t
{
    // the action that we need to track from the match
    demonScoringActionsPvp_t demonScoringAction; // Offset: 0x0

    // the damage we need in order to award points, 0 == just give points
    int damageInficted; // Offset: 0x4

    // the points we need to award on action
    int awardPoints; // Offset: 0x8

    // the max damage cut off we need in order to award points, 0 == ignore max
    int damageHitMax; // Offset: 0xC

}; // Size: 0x10
