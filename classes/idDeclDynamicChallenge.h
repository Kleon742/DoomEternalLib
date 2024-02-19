struct idDeclDynamicChallenge : idGameDeclTypeInfo
{
    enum enum_1FB01 : int
    {
        MAX_BONUS_COMBOS = 10
    };

    struct combo_t
    {
        // combo level is increased if another kill is made within this time in seconds
        int time; // Offset: 0x0

        // bonus points for each combo level
        int points[10]; // Offset: 0x4

    }; // Size: 0x2C

    // name of map to load
    idStr mapName; // Offset: 0x90

    // name of checkpoint to load into
    idStr checkpointName; // Offset: 0xC0

    // name of the challenge
    idStrId challengeName; // Offset: 0xF0

    // description of the challenge
    idStrId challengeDescription; // Offset: 0xF4

    // additional information about the challenge, usually with parentheses
    idStrId challengeSubheading; // Offset: 0xF8

    // short phrased goal of the challenge
    idStrId challengeObjective; // Offset: 0xFC

    // text that explains any bonuses
    idStrId challengeBonus; // Offset: 0x100

    // time (seconds) to countdown before start
    float countDownSec; // Offset: 0x104

    // index of the challenge
    int challengeNumber; // Offset: 0x108

    // time (seconds) to fade in during countdown
    idTypesafeTime < float , secondUnique_t , 1 > countDownFadeInSec; // Offset: 0x10C

    // maximum time (seconds) the challenge can take
    idTypesafeTime < float , secondUnique_t , 1 > timeLimitSec; // Offset: 0x110

    // time (seconds) bonus for glory kill
    idTypesafeTime < float , secondUnique_t , 1 > gloryKillBonusSec; // Offset: 0x114

    // bonus points for glory kill
    int gloryKillBonusPoints; // Offset: 0x118

    // how many kills needed.
    int maxKills; // Offset: 0x11C

    // how many bonus items needed.
    int maxBonus; // Offset: 0x120

    // show these stats on the HUD while doing the challenge
    idList < gameStat_t , TAG_IDLIST , false > hudStats; // Offset: 0x128

    // music to play for the challenge
    idSoundEvent* challengeMusic; // Offset: 0x140

    // music to play for the challenge
    idSoundEvent* victorySound; // Offset: 0x148

    // music to play for the challenge
    idSoundEvent* failureSound; // Offset: 0x150

    // sound that plays during countdown 3,2,1
    idSoundEvent* challengeStartSound; // Offset: 0x158

    // sound that plays when challenge starts
    idSoundEvent* countdownEndSound; // Offset: 0x160

    // challenge uses the bonus count instead of the kill count
    bool useBonusScore; // Offset: 0x168

    // challenge uses a timer
    bool useTimer; // Offset: 0x169

    // challenge is completed when the timer runs out
    bool completeOnTimeOut; // Offset: 0x16A

    // challenge is over (failed) if player takes damage
    bool failWhenPlayerTakesDamage; // Offset: 0x16B

    // fails when AI is killed by something other than glory kill
    bool failWhenAINormalKill; // Offset: 0x16C

    // ammo drops are disabled for this challenge
    bool allowAmmoDrops; // Offset: 0x16D

    // armor drops are disabled for this challenge
    bool allowArmorDrops; // Offset: 0x16E

    // health drops are disabled for this challenge
    bool allowHealthDrops; // Offset: 0x16F

    // energy drops are disabled for this challenge
    bool allowEnergyDrops; // Offset: 0x170

    // clamps any bonus time given to the highest of bronze/silver/gold TimeSec
    bool clampBonusTime; // Offset: 0x171

    // damages applied to player when shooting his weapon
    idDeclDamage* damageFromFiringWeaponDecl; // Offset: 0x178

    // number of secs player is allowed to move after killing enemy (0 disables this function)
    idTypesafeTime < float , secondUnique_t , 1 > timeToMoveAfterKillingEnemySecs; // Offset: 0x180

    // number of secs to transition from moving to slowing down to stop
    idTypesafeTime < float , secondUnique_t , 1 > timeToTransitionToStopSecs; // Offset: 0x184

    // rune that is unlocked from the challenge
    idDeclPerk* runeToGet; // Offset: 0x188

    // DOF near field distance {{ units = m }}
    float dof_near; // Offset: 0x190

    // DOF far field distance {{ units = m }}
    float dof_far; // Offset: 0x194

    // DOF focal distance {{ units = m }}
    float dof_focus; // Offset: 0x198

    // DOF Fade In time in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > dof_fadeinMS; // Offset: 0x19C

    // DOF Fade Out time in MS
    idTypesafeTime < int , millisecondUnique_t , 1000 > dof_fadeoutMS; // Offset: 0x1A0

    // Frequency of how often the popup shows up, set to -1 to disable popup
    int popupIncrement; // Offset: 0x1A4

    // Amount where the popup will appear on every instance
    int popupMinumum; // Offset: 0x1A8

    // unlockable that contains gamestat, count, and names
    idDeclUnlockable* encounterQuest; // Offset: 0x1B0

    // inventory for the challenge
    idDeclDevInvLoadout* loadout; // Offset: 0x1B8

    // kill combo
    idDeclDynamicChallenge::combo_t combo; // Offset: 0x1C0

}; // Size: 0x1F0
