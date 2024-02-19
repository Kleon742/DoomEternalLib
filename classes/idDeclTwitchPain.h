struct idDeclTwitchPain : idGameDeclTypeInfo
{
    enum twitchPain_t : int
    {
        TWITCH_DEFAULT = 0,
        TWITCH_HEAVY = 1,
        TWITCH_STAGGER = 2,
        TWITCH_STAGGER_VULNERABLE = 3,
        TWITCH_SPECIAL_1 = 4,
        TWITCH_MAX = 5
    };

    struct damageAlpha_t
    {
        // use this alpha if damage is under this threshold
        float maxDamage; // Offset: 0x0

        // alpha to use
        float alpha; // Offset: 0x4

    }; // Size: 0x8

    struct damageTypeInfo_t
    {
        // decl to match ( or parent of decls to match )
        idDeclDamage* damageDecl; // Offset: 0x0

        // desired alpha
        float alpha; // Offset: 0x8

    }; // Size: 0x10

    struct twitchCache_t
    {
        idMD6Anim* anim; // Offset: 0x0

        idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > nodeIndex; // Offset: 0x8

        idList < idTwitchPain_WeaponGroup , TAG_IDLIST , false >* twitches; // Offset: 0x10

    }; // Size: 0x18

    // twitch pains default case
    idList < idTwitchPain_WeaponGroup , TAG_IDLIST , false > defaultPains; // Offset: 0x90

    // twitch pains heavy case
    idList < idTwitchPain_WeaponGroup , TAG_IDLIST , false > heavyPains; // Offset: 0xA8

    // pains played during stagger animations
    idList < idTwitchPain_WeaponGroup , TAG_IDLIST , false > staggerPains; // Offset: 0xC0

    // pains played during stagger animations
    idList < idTwitchPain_WeaponGroup , TAG_IDLIST , false > staggerVulnerablePains; // Offset: 0xD8

    // pains played during stagger animations
    idList < idTwitchPain_WeaponGroup , TAG_IDLIST , false > special_1_Pains; // Offset: 0xF0

    // automatic mappings between anims and web nodes to twitch data
    idList < twitchPainMapping_t , TAG_IDLIST , false > animMappings; // Offset: 0x108

    // optional sets of multiple additives to play in one chunk
    idList < customAdditiveAnimSet_t , TAG_IDLIST , false > customAnimSets; // Offset: 0x120

    // lower this to decrease amount of anim that blends in
    float maxAlpha; // Offset: 0x138

    // base data for all twitch pains
    twitchPainInfo_t info; // Offset: 0x13C

    // 0..1 percentage of health lost below which no pain reaction while standing
    float twitchThresholdStanding; // Offset: 0x15C

    // 0..1 percentage of health lost below which no pain reaction while walking
    float twitchThresholdWalking; // Offset: 0x160

    // 0..1 percentage of health lost below which no pain reaction while running
    float twitchThresholdRunning; // Offset: 0x164

    // Delay between twitch reactions (ms)
    milliToGameTime_t twitchDelayTime; // Offset: 0x168

    // list of threshold keys that then modify alpha by the value amount
    idList < idDeclTwitchPain::damageAlpha_t , TAG_IDLIST , false > damageAlphaMappings; // Offset: 0x178

    // list of threshold keys that then modify alpha by the value amount
    idList < idDeclTwitchPain::damageTypeInfo_t , TAG_IDLIST , false > damageDeclMappings; // Offset: 0x190

    // allow per-ai definition of how many animators the system should use
    int numPainAnimators; // Offset: 0x1A8

    idList < idDeclTwitchPain::twitchCache_t , TAG_IDLIST , false > twitchCache; // Offset: 0x1B0

}; // Size: 0x1C8
