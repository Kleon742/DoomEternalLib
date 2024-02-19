struct idDeclCombatEncounterScoring : idDeclTypeInfo
{
    enum scoringEvent_t : int
    {
        INVALID = -1,
        KILL = 0,
        MULTIPLE_KILLS = 1,
        HEADSHOT_KILL = 2,
        GLORY_KILLS = 3,
        GLORY_KILLS_VARIETY = 4,
        FULL_BODY_GIBS = 5,
        SIGNATURE_DEATH = 6,
        MID_AIR_KILL = 7,
        MULTI_WEAPON_KILL = 8,
        COLLATERAL_DAMAGE = 9,
        EXPLOSIVE_BARREL_KILL = 10,
        BOSS_STAGGER = 11,
        BOSS_COUNTER = 12,
        POWER_UP_KILL = 13,
        AIR_COUNTER_KILL = 14,
        CLOSE_CALL = 15,
        NUM_OF_SCORING_EVENTS = 16
    };

    struct baseKillScores_t
    {
        // Ai type to be used
        aiMonsterType_t aiMonsterType; // Offset: 0x0

        // score points for this Ai type
        int killPoints; // Offset: 0x8

        // the fuse points to be awarded when killed
        int fusePoints; // Offset: 0xC

        // the fuse points to increment the fuse by when performing a gk
        int gkFusePoints; // Offset: 0x10

        // the grace period in ms before the fuse starts to go down again after a gk
        milliToGameTime_t gkFuseGracePeriod; // Offset: 0x18

    }; // Size: 0x28

    struct scoreMultiplier_t
    {
        // the scoring event that matches the Ai Kill
        idDeclCombatEncounterScoring::scoringEvent_t scoringEvent; // Offset: 0x0

        // the scoring multiplier associated with this Kill
        float scoringMultipier; // Offset: 0x4

        // does this event require direct damage from player
        bool requiresDirectDamageFromPlayer; // Offset: 0x8

        // name of the scoring event to show in the ticker
        idStrId scoringEventName; // Offset: 0xC

        // Medal image on EOL for scoring event
        idMaterial2* scoringIcon; // Offset: 0x10

    }; // Size: 0x18

    struct momentumMultiplier_t
    {
        // the scoring event associated with the event multiplier
        idDeclCombatEncounterScoring::scoringEvent_t scoringEvent; // Offset: 0x0

        // the value of the momentum multiplier
        float momentumMultiplier; // Offset: 0x4

        // does this event require direct damage from player
        bool requiresDirectDamageFromPlayer; // Offset: 0x8

    }; // Size: 0xC

    struct playerBehaviorModifiers_t
    {
        // the mod operator
        upgradeModOperator_t modOperator; // Offset: 0x0

        // the values to apply at each level, starting at level 0
        idList < float , TAG_IDLIST , false > modValuesPerLevel; // Offset: 0x8

    }; // Size: 0x20

    struct genericScores_t
    {
        // Ai type to be used
        aiMonsterType_t aiMonsterType; // Offset: 0x0

        // score points for this Ai type
        int points; // Offset: 0x8

    }; // Size: 0x10

    struct fuseMultiplierLevel_t
    {
        // the units per second to decay, 0.0f = none
        float timeDecay; // Offset: 0x0

        // the current value of the multiplier
        float multiplier; // Offset: 0x4

        // the value that must be reached before going to the next multiplier level, -1 = infinite
        float fuseMaxValue; // Offset: 0x8

        // the minimum value to give the player if we detect we just increased to this level
        float fuseBarFilled; // Offset: 0xC

        // the maximum value to give the player if we detect we just decreased to this level
        float fuseBarEmptied; // Offset: 0x10

        // the player damage taken in scalar, 0.0f == off
        float plyrDmgTakenScalar; // Offset: 0x14

        // the player damage dealt out scalar, 0.0f == off
        float plyrDmgDealtScalar; // Offset: 0x18

        // the time to perform a save in ms, 0 == do not allow fuse save
        milliToGameTime_t fuseSaveTimeMs; // Offset: 0x20

        // the grace period in ms after a fuse increment before the fuse starts to go down again
        milliToGameTime_t fuseGracePeriodMs; // Offset: 0x30

        // the number of levels to drop when the fuse expires, [ 1-max num levels ]
        int fuseLevelDrop; // Offset: 0x40

        // the grace period in ms after we have picked up a prop item before the fuse starts to go down again
        milliToGameTime_t pickUpGracePeriodMs; // Offset: 0x48

        // the fuse bonus whenever given to the player when picking up props
        int pickUpFuseBonus; // Offset: 0x58

        // Which floating Text Type to use.
        swfFloatingTextTypes_t floatingTextType; // Offset: 0x5C

    }; // Size: 0x60

    struct quantizationEntry_t
    {
        // the maximum value of the range
        float maxValue; // Offset: 0x0

        // the resulting value from the range
        float resultingValue; // Offset: 0x4

    }; // Size: 0x8

    struct combatScoringSounds_t
    {
        // the sound to play when incrementing the score
        idSoundEvent* scoreIncrementSound; // Offset: 0x0

        // the sound to play when incrementing the score
        idSoundEvent* scoreDecrementSound; // Offset: 0x8

        // increasing the score tick sound.
        idSoundEvent* scoreIncreaseTick; // Offset: 0x10

        // sound to play when crossing the finish line
        idSoundEvent* finishLineCrossedSound; // Offset: 0x18

        // the list of sounds to play per level when the level is increased
        idList < const idSoundEvent * , TAG_IDLIST , false > levelIncrementSounds; // Offset: 0x20

        // the list of sounds to play per level when the level is decreased
        idList < const idSoundEvent * , TAG_IDLIST , false > levelDecrementSounds; // Offset: 0x38

    }; // Size: 0x50

    struct levelRatingPars_t
    {
        enum parTimeScoringType_t : int
        {
            SCORE_DECAY = 0,
            TIME_DECAY = 1,
            GOOD_BETTER_BEST = 2
        };

        // Map name for the level rating Pars.
        idStr mapName; // Offset: 0x0

        // the type of scoring to use for par time
        idDeclCombatEncounterScoring::levelRatingPars_t::parTimeScoringType_t parTimeScoringType; // Offset: 0x30

    }; // Size: 0x38

    // list of base kill scoring values
    idList < idDeclCombatEncounterScoring::baseKillScores_t , TAG_IDLIST , false > baseKillScores; // Offset: 0x88

    // list of event multipliers
    idList < idDeclCombatEncounterScoring::scoreMultiplier_t , TAG_IDLIST , false > scoreMultipliers; // Offset: 0xA0

    // list of momentum multipliers
    idList < idDeclCombatEncounterScoring::momentumMultiplier_t , TAG_IDLIST , false > momentumMultipliers; // Offset: 0xB8

    // specialty scoring score given if the player went through a level without dying
    int noDeathScore; // Offset: 0xD0

    // score removed for each time the player died
    int playerDeathScore; // Offset: 0xD4

    // score given each time the cyberdemon is staggered
    int cyberDemonStaggerScore; // Offset: 0xD8

    // score given each time the talisman is countered
    int talismanCounterScore; // Offset: 0xDC

    // score given each time the spider mastermind is countered
    int spiderMastermindCounterScore; // Offset: 0xE0

    // the level at which the player can use Gk Animations
    int allowGkAnimationsAfterLevel; // Offset: 0xE4

    // the highest level in the combat meter
    int highestLevelAttainable; // Offset: 0xE8

    // time for a multi-weapon kill to be valid;
    float multiWeaponKillTimeSec; // Offset: 0xEC

    // the max momentum we can have
    float maxMomentumMultiplierCap; // Offset: 0xF0

    // the max momentum multiplier we can have that has some slop
    float maxMomentumMultiplierSlop; // Offset: 0xF4

    // the value for the encounter star
    float encounterMomentumStart; // Offset: 0xF8

    // the value for the encounter end
    float encounterMomentumEnd; // Offset: 0xFC

    // the value to reduce the multiplier by when taking damage
    float damageTakenMultiplier; // Offset: 0x100

    // the value to increase the multiplier by when doing damage
    float damageInflictedMultiplier; // Offset: 0x104

    // the value to increase the momentum when canceling an attack
    float cancelAttackMultiplier; // Offset: 0x108

    // the score value when canceling an attack
    idList < idDeclCombatEncounterScoring::genericScores_t , TAG_IDLIST , false > cancelAttackScoring; // Offset: 0x110

    // the value to increase the momentum when canceling an attack
    float reflectionParryMultiplier; // Offset: 0x128

    // the value to award if the player has completed the game in nightmare
    float nightmareCompletionBonus; // Offset: 0x12C

    // how much bonus score for each remaining BFG ammo
    int bfgPerAmmoBonusScore; // Offset: 0x130

    // how much bonus score if the BFG has max ammo
    int bfgFullAmmoBonusScore; // Offset: 0x134

    // the bonus percent to apply to scores while a powerup is active (1.0 = 100%)
    float powerUpScoreBonusPct; // Offset: 0x138

    // fuse points to add per sec while a powerup is active
    float powerUpFusePointsPerSec; // Offset: 0x13C

    // modifiers for player speed per level
    idDeclCombatEncounterScoring::playerBehaviorModifiers_t playerMovementSpeed; // Offset: 0x140

    // modifiers for player gk distance
    idDeclCombatEncounterScoring::playerBehaviorModifiers_t gloryKillDistance; // Offset: 0x160

    // modifiers for player damage dealing
    idDeclCombatEncounterScoring::playerBehaviorModifiers_t damageDealth; // Offset: 0x180

    // modifiers for player damage receiving
    idDeclCombatEncounterScoring::playerBehaviorModifiers_t damageReceived; // Offset: 0x1A0

    // modifiers for player fx intensity
    idDeclCombatEncounterScoring::playerBehaviorModifiers_t fxIntensity; // Offset: 0x1C0

    // sounds to play during combat scoring
    idDeclCombatEncounterScoring::combatScoringSounds_t combatScoringSounds; // Offset: 0x1E0

    // the score multiplier values in sequence to be used after fuse values have been reached
    idList < idDeclCombatEncounterScoring::fuseMultiplierLevel_t , TAG_IDLIST , false > fuseMultiplierLevels; // Offset: 0x230

    // if true the current level decay value will go into effect and to reduce the fuse
    bool useTimeFuseDecay; // Offset: 0x248

    // if true we will try to use the quantization table for damage received and taken
    bool useQuantizationTable; // Offset: 0x249

    // the player's damage taken quantization table
    idList < idDeclCombatEncounterScoring::quantizationEntry_t , TAG_IDLIST , false > damageTakenQTable; // Offset: 0x250

    // the player's damage dealt quantization table
    idList < idDeclCombatEncounterScoring::quantizationEntry_t , TAG_IDLIST , false > damageDealtQTable; // Offset: 0x268

    // if true a gk can save the multiplier
    bool allowGKFuseSave; // Offset: 0x280

    // if true a head shot can save the multiplier
    bool allowHeadShotFuseSave; // Offset: 0x281

    // if true a gk can save the multiplier
    bool allowBarrellFuseSave; // Offset: 0x282

    // if true a gk can save the multiplier
    bool allowMultiKillFuseSave; // Offset: 0x283

    // if true suppresses the multiplier from being applied to entities spawned by archvile/summoner
    bool supressMultIfArchvileSpwnd; // Offset: 0x284

    // the sound to play when the fuse enters the save time
    idSoundEvent* fuseSaveSignalSound; // Offset: 0x288

    // the sound to play when the fuse is saved
    idSoundEvent* fuseSaveFailedSound; // Offset: 0x290

    // the sound to play when we failed to save the fuse
    idSoundEvent* fuseSaveSuccessSound; // Offset: 0x298

    // the sound to play when we get an extra live
    idSoundEvent* extraLiveAddedSound; // Offset: 0x2A0

    // the sound to play when an enemy is killed
    idSoundEvent* enemyKilledSound; // Offset: 0x2A8

    // the list of sounds to play when multiplier is incremented
    idList < const idSoundEvent * , TAG_IDLIST , false > fuseMultIncreasedSound; // Offset: 0x2B0

    // the sound to play when multiplier is decremented
    idSoundEvent* fuseMultDecreasedSound; // Offset: 0x2C8

    // the multipliers per difficulty to apply to the base kill points per difficulty
    idList < float , TAG_IDLIST , false > baseKillPtsMultPerDiff; // Offset: 0x2D0

    // the multipliers per difficulty to apply to the fuse damage taken per difficulty
    idList < float , TAG_IDLIST , false > incomingDamageMultPerDiff; // Offset: 0x2E8

    // Scores needed for Bronze/Silver/Gold
    idList < idDeclCombatEncounterScoring::levelRatingPars_t , TAG_IDLIST , false > levelRatingPars; // Offset: 0x300

    // the bonus to give out if the user ends the level with maxed out lives
    int barrelMaxedOutBarrelBonus; // Offset: 0x318

    // the bonus to give out per barrel at the end of a level
    int barrelPerBarrelBonus; // Offset: 0x31C

    // color to use for highlighting final AI in encounters
    idColor aiHighlightColor; // Offset: 0x320

    // number of AI remaining to initiate highlighting
    int aiRemainingForHighlight; // Offset: 0x330

    // amount of time, after dying and restarting, that player is invulnerable to damage
    float invulnerableTimeSec; // Offset: 0x334

}; // Size: 0x338
