struct idDemonPlayer_Revenant : idDemonPlayer
{
    enum eRevenantFireMode : int
    {
        FIREMODE_NORMAL = 0,
        FIREMODE_BARRAGE = 1
    };

    struct barrageData_t
    {
        // is barrage mode in cooldown?
        bool coolingDown; // Offset: 0x0

        // Launch barrage as soon as we enter barrage mode
        bool immediateLaunch; // Offset: 0x1

        // When set to immediate launch, how long before firing when trigger is pulled?
        idTypesafeTime < int , millisecondUnique_t , 1000 > barrageSpinupTime; // Offset: 0x4

        // how many MS to transition from regular to mortar mode
        idTypesafeTime < int , millisecondUnique_t , 1000 > transitionTimeIn; // Offset: 0x8

        // how many MS to transition from mortar mode to regular
        idTypesafeTime < int , millisecondUnique_t , 1000 > transitionTimeOut; // Offset: 0xC

        // how many MS after transitioning out from mortar mode can they re-enter mortar mode
        idBranchedOptionValue < declInputBranch_t , idTypesafeTime < int , millisecondUnique_t , 1000 > > cooldown; // Offset: 0x10

        // Number of bursts to fire
        int numBursts; // Offset: 0x38

        // How many shots per burst
        int numShotsPerBurst; // Offset: 0x3C

        // time between shots
        idTypesafeTime < int , millisecondUnique_t , 1000 > shotDelay; // Offset: 0x40

        // time between bursts
        idTypesafeTime < int , millisecondUnique_t , 1000 > burstDelay; // Offset: 0x44

        // How much to scale speed when barrage is firing
        float speedScaleBarrageFiring; // Offset: 0x48

        // How much to scale speed when in barrage mode
        float speedScaleBarrageAmbient; // Offset: 0x4C

        // look sensitivity while in barrage is firing w/ gamepad
        float lookSensitivityBarrageFiring; // Offset: 0x50

        // look sensitivity while in barrage mode w/ gamepad
        float lookSensitivityBarrageAmbient; // Offset: 0x54

        // look sensitivity while in barrage is firing w/ kb + m
        float lookSensitivityKeyboardFiring; // Offset: 0x58

        // look sensitivity while in barrage is firing w/ kb + m
        float lookSensitivityKeyboardAmbient; // Offset: 0x5C

        // barrage damage scale (can be upgraded mid-match in PVP)
        float damageScale; // Offset: 0x60

        // targetting entity def
        idDeclEntityDef* targetEntityDef; // Offset: 0x68

        // sound upon entering mortar mode
        idSoundEvent* enterSound; // Offset: 0x70

        // sound upon exiting mortar mode
        idSoundEvent* exitSound; // Offset: 0x78

        // sound upon pulling trigger in barrage mode
        idSoundEvent* barrageFireSound; // Offset: 0x80

        // sound to play when switching to a new burst
        idSoundEvent* betweenBurstSound; // Offset: 0x88

        // sound to play when ability is ready to use
        idSoundEvent* cooldownCompleteSound; // Offset: 0x90

        // demon card info for the barrage ability
        idDeclDemonCard* demonCard; // Offset: 0x98

        // status effect to apply when barrage is activated
        idDeclStatusEffect* barrageStatusEffect; // Offset: 0xA0

        // if true, the jetpack will refill to full when barrage is over.
        bool refillsJetPackOnExit; // Offset: 0xA8

    }; // Size: 0xB0

    struct redlineData_t
    {
        // is the redline upgrade currently active?
        bool isActive; // Offset: 0x0

        // Health percentage to trigger redline. Value between (0.0 - 1.0)
        float healthPercentage; // Offset: 0x4

        // Ammo to use when in redline
        idDeclAmmo* ammo; // Offset: 0x8

        // Weapon decl for knockback value
        idDeclWeapon* knockbackWeaponDecl; // Offset: 0x10

        // Firing intverval when in redline
        milliToGameTime_t firingInterval; // Offset: 0x18

    }; // Size: 0x28

    struct RevenantInput
    {
        // Main fire
        usercmdButton_t primaryAttack; // Offset: 0x0

        // Swaps firemode
        usercmdButton_t fireModeSwap; // Offset: 0x8

        // activate afterburner / dash
        usercmdButton_t afterBurner; // Offset: 0x10

        // use jetpack
        usercmdButton_t jetpack; // Offset: 0x18

        // jump button
        usercmdButton_t jump; // Offset: 0x20

    }; // Size: 0x28

    // what is my current fire mode
    idDemonPlayer_Revenant::eRevenantFireMode currentFireMode; // Offset: 0x36FC8

    // How long can you fire the jet pack?
    idTypesafeTime < int , millisecondUnique_t , 1000 > jetPackPowerTimeMS; // Offset: 0x36FCC

    // For every N milliseconds that pass, what fraction of that do you get back as fuel?
    float jetPackRechargeRate; // Offset: 0x36FD0

    // How many milliseconds of power are used up each time you start activating the jetpack ( cuts down on 'feathering' )
    idTypesafeTime < int , millisecondUnique_t , 1000 > jetPackActivationPowerUse; // Offset: 0x36FD4

    // How long after turning it off does it take for the jetpack to start charging?
    idTypesafeTime < int , millisecondUnique_t , 1000 > jetPackRechargeDelayMS; // Offset: 0x36FD8

    // How much time ( on top of normal recharge delay ) to penalize the player when at or below 0
    idTypesafeTime < int , millisecondUnique_t , 1000 > jetPackDashPenaltyMS; // Offset: 0x36FDC

    // Initial boost given to jetpack velocity when starting from ground
    float jetPackGroundBoost; // Offset: 0x36FE0

    // Boost applied when jetpack is activated in air ( only when velocity.z <= 0 )
    float jetPackMidAirBoost; // Offset: 0x36FE4

    // Minimum fuel fraction required for dash [1.0, 0.0]
    float jetPackDashMinFraction; // Offset: 0x36FE8

    // was it just pressed
    bool wasJetpackButtonPressed; // Offset: 0x36FEC

    // Ground recharge only: only recharge if revenant is grounded
    bool jetpackGroundRechargeOnly; // Offset: 0x36FED

    // the revenant does not have to be grounded to recharge if we've touched the ground once *after* the jetpack is made empty
    bool jetpackAllowRechargeOnEmptyAfterFirstGroundContact; // Offset: 0x36FEE

    // recharge rate if ground recharge only
    float jetpackGroundRechargeRate; // Offset: 0x36FF0

    // how long to delay recharge once grounded
    idTypesafeTime < int , millisecondUnique_t , 1000 > jetpackGroundRechargeDelay; // Offset: 0x36FF4

    // How much jetpack power ( percentage ) does it cost to dash?
    float dashCost; // Offset: 0x36FF8

    // Will dash break enemy player targeting?
    bool breakTargetLock; // Offset: 0x36FFC

    // how long before the enemy can acquire a new lock?
    idTypesafeTime < int , millisecondUnique_t , 1000 > lockBreakTime; // Offset: 0x37000

    // current jet pack power in MS of usage
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentJetPackPower; // Offset: 0x37008

    // whether the jet pack is active locally for us
    bool jetPackIsActiveLocally; // Offset: 0x37010

    // whether the server thinks the jet pack is active
    bool jetPackIsActiveOnServer; // Offset: 0x37011

    // Last game time the jetpack was active.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > jetPackLastActiveTime; // Offset: 0x37018

    // ran out of fuel and requires new input to start
    bool jetPackRequiresRelease; // Offset: 0x37020

    // entity number of the last entity to hit the jetpacklast
    idManagedClassPtr < idEntity > lastDamagedJetPackEntity; // Offset: 0x37028

    // Has the jetpack been overheated by dash overdraw?
    bool jetpackOverheated; // Offset: 0x37048

    // when is the jetpack no longer overheated?
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > overHeatEndTime; // Offset: 0x37050

    // last time we could recharge for ground contacts
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > canRechargeStartTime; // Offset: 0x37058

    // next time we could recharge for ground contacts
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > canRechargeEndTime; // Offset: 0x37060

    // if this current recharge delay/window is after emptying the jetpack entirely
    bool rechargeFromEmptyJetpack; // Offset: 0x37068

    // is the HUD in need of update?
    bool hudDirty; // Offset: 0x37069

    // started overheat fx
    bool startedOverheatFX; // Offset: 0x3706A

    // Enable infinite revenant jetpack
    bool jetPackInfinite; // Offset: 0x3706B

    // At low or negative upward velocities, how much velocity does the revenant jetpack add per frame? {{ units = m / s }}
    float jetPackBoostVelocityGain; // Offset: 0x3706C

    // At higher upward velocities, how much velocity does the revenant jetpack add per frame? {{ units = m / s }}
    float jetPackHoverVelocityGain; // Offset: 0x37070

    // At what upward velocity do we switch from boost to hover? {{ units = m / s }}
    float jetPackBoostToHoverSwitch; // Offset: 0x37074

    // Above this upward velocity, we actually drain some velocity to get to a hover point. {{ units = m / s }}
    float jetPackMaxUpwardVelocity; // Offset: 0x37078

    // When climbing too quickly (above revenant_jetPackMaxUpwardVelocity) at what velocity per frame do we return to that? {{ units = m / s }}
    float jetPackFallToMaxRate; // Offset: 0x3707C

    // sound shader to play when jetpack is started
    idSoundEvent* jetPackStartSnd; // Offset: 0x37080

    // sound shader to loop when jetpack is active
    idSoundEvent* jetPackLoopingSnd; // Offset: 0x37088

    // sound shader to play when jetpack is stopped
    idSoundEvent* jetPackStopSnd; // Offset: 0x37090

    // sound shader to play when jetpack tries to start but is empty
    idSoundEvent* jetPackFizzleSnd; // Offset: 0x37098

    // rumble to play when jetpack is active
    idDeclRumble* jetPackRumble; // Offset: 0x370A0

    // last time I was on the ground - used for medal tracking.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeOnGround; // Offset: 0x370A8

    // sound shader to loop when weakened
    idSoundEvent* weakenedLoopingSnd; // Offset: 0x370B0

    // sound shader to play when we attempt a fire while it's disabled
    idSoundEvent* weakenedFireDisabledFireSnd; // Offset: 0x370B8

    // sound to play when using the dash brings jetpack fuel to or below zero
    idSoundEvent* dashOverdrawSound; // Offset: 0x370C0

    // sound to play when jetpack recharges
    idSoundEvent* jetpackRechargeSound; // Offset: 0x370C8

    // redline round upgrade data
    idDemonPlayer_Revenant::redlineData_t redlineData; // Offset: 0x370D0

    // are we in redline state?
    bool inRedline; // Offset: 0x370F8

    // started redline fx
    bool startedRedlineFX; // Offset: 0x370F9

    // used to serialize that the redline effect is active
    bool redlineIsActive; // Offset: 0x370FA

    // used to store a reference to the original ammo while in redline
    idDeclAmmo* defaultAmmoDecl; // Offset: 0x37100

    // used to store a reference to the original weapon decl while in redline
    idDeclWeapon* defaultKnockbackWeaponDecl; // Offset: 0x37108

    // used to store the original weapond firing interval while in redline
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > defaultWeaponFiringInterval; // Offset: 0x37110

    // barrage attack data
    idDemonPlayer_Revenant::barrageData_t barrageData; // Offset: 0x37118

    // we create an entity to display FX at the target point
    idManagedClassPtr < idEntity > barrageTargetEntity; // Offset: 0x371C8

    // Game time when the last shot of the barrage will fire
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > barrageEndTime; // Offset: 0x371E8

    // Time it takes for all rockets to fire from start to end of a barrage
    idTypesafeTime < int , millisecondUnique_t , 1000 > barrageTimeToFinish; // Offset: 0x371F0

    // barrage data when are we able to swap fire modes again?
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextFireModeSwapTime; // Offset: 0x371F8

    // next time we can fire barrage
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextBarrageFireTime; // Offset: 0x37200

    // last time we tried to fire barrage, but failed (due to cooldown)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastBarrageUseFailTime; // Offset: 0x37208

    // damage accumulated towards putting the revenant into a weakened state
    float weakenedAccumDamage; // Offset: 0x37210

    // time we last took damage that went towards a weakened state
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weakenedLastDamageTime; // Offset: 0x37218

    // time our weakened state ends started from weak spot hit
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > weakenedEndTime; // Offset: 0x37220

    // true = weakened, false = normal
    bool weakenedState; // Offset: 0x37228

    // whether we've setup the weakened state properly yet
    bool weakenedStateInitted; // Offset: 0x37229

    // could the jetpack recharge last frame?
    bool couldRecharge; // Offset: 0x3722A

    // what was the last position we laid down our trail FX at {{ units = m }}
    idVec3 lastTrailFXPos; // Offset: 0x3722C

    // timer for min time between trail fx in case we're not moving
    idSmartTimer < GAMETIME_SCALED > lastTrailFXTimer; // Offset: 0x37238

    // integer distance moved in air, used for podium stat
    int totalDistanceMovedInAir; // Offset: 0x37240

    // time spent moving in air, used for milestone stat.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > moveInAirStart; // Offset: 0x37248

    // This is the cumulative time spent int he air so we can hit the milestone
    idTypesafeTime < int , millisecondUnique_t , 1000 > cumalativeTimeInTheAir; // Offset: 0x37250

    // Laser Targetting decl used for targetting lasers
    idDeclRibbon2* laserRibbonDecl; // Offset: 0x37258

    idRibbon2 laserRibbons[2]; // Offset: 0x37260

    // Revenant input bindings
    idDemonPlayer_Revenant::RevenantInput inputBindings; // Offset: 0x37490

    // Dash info color the dash UI will show in
    demonHudColor_t dashHudColor; // Offset: 0x374B8

    // icon shown in the dash UI
    idMaterial2* dashHudIcon; // Offset: 0x374C0

    // Hud controls tutorial decl containing hud control icons
    idDeclTutorialEvent* tutorialDecl; // Offset: 0x374C8

}; // Size: 0x374D0
