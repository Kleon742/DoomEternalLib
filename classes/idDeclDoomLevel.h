struct idDeclDoomLevel : idGameDeclTypeInfo
{
    struct doomLevelSounds_t
    {
        // Sound to play when filling the XP Counter number before the player badge is shown
        idSoundEvent* xpCounterFill; // Offset: 0x0

        // Sound to play when completing the XP Counter number before the player badge is shown
        idSoundEvent* xpCounterComplete; // Offset: 0x8

        // Sound to play when animating the XP meter on the player badge for an XP incrase
        idSoundEvent* xpMeterUpSound; // Offset: 0x10

        // Sound ID for the player badge XP meter animation sound
        int xpMeterUpSoundId; // Offset: 0x18

        // Sound to play when leveling up (no tier increase)
        idSoundEvent* levelUpSound; // Offset: 0x20

        // Sound to play when leveling up (minor tier increase)
        idSoundEvent* minorTierUpSound; // Offset: 0x28

        // Sound to play when leveling up (major tier increase)
        idSoundEvent* majorTierUpSound; // Offset: 0x30

        // Sound to play when prestiging (minor; adds a star)
        idSoundEvent* minorPrestigeSound; // Offset: 0x38

        // Sound to play when prestiging (major; prestige star tier increase)
        idSoundEvent* majorPrestigeSound; // Offset: 0x40

    }; // Size: 0x48

    // XP and reward info for each level. Index 0, the first item in this list, is level 1.
    idList < doomLevelInfo_t , TAG_IDLIST , false > levels; // Offset: 0x90

    // Data for prestige
    prestigeInfo_t prestigeInfo; // Offset: 0xA8

    // Display info for various player badge styles.
    idList < playerBadgeDisplayInfo_t , TAG_IDLIST , false > playerBadgeDisplayInfo; // Offset: 0xC8

    // Display info for player streaks.
    playerStreakInfo_t playerStreakInfo; // Offset: 0xE0

    // Display info for player ranks.
    playerRankInfo_t playerRankInfo; // Offset: 0x108

    // Sounds to play when for player badge XP/Level up animations.
    idDeclDoomLevel::doomLevelSounds_t sounds; // Offset: 0x188

    // Logic decl for animations (experimental)
    idDeclLogicEntity* animationLogicDecl; // Offset: 0x1D0

    // QUICK PATCH: amount of XP to grant per Horde round. Tossing this here real quick so we can adjust it in a tunable.
    int hordeRoundXP; // Offset: 0x1D8

    idArray < const playerBadgeDisplayInfo_t * , 6 > playerBadgeDisplayMapping; // Offset: 0x1E0

}; // Size: 0x210
