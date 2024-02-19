struct twitchPainInfo_t
{
    // anim takes this long to blend in ( >= 0 overrides parent info )
    idTypesafeTime < int , millisecondUnique_t , 1000 > blendInMilliseconds; // Offset: 0x0

    // anim takes this long to blend out ( >= 0 overrides parent info )
    idTypesafeTime < int , millisecondUnique_t , 1000 > blendOutMilliseconds; // Offset: 0x4

    // anim's target alpha is this ( >= 0 overrides parent info )
    float maxAlpha; // Offset: 0x8

    // only this many of anim will play at once ( >= 0 overrides parent info )
    int maxPlaying; // Offset: 0xC

    // if total target alphas for this pain anim are over this threshold, back off ( >= 0 overrides parent info )
    float backoffAlphaThreshold; // Offset: 0x10

    // backoff to this alpha when over threshold ( >= 0 overrides parent info )
    float backoffAlpha; // Offset: 0x14

    // if the sum of all anims current alpha is over this, don't start a new one ( >= 0 overrides parent info )
    float maxCurrentAlpha; // Offset: 0x18

    // ratescale the twitch anim by this much ( >= 0 overrides parent info )
    float animRateScale; // Offset: 0x1C

}; // Size: 0x20
