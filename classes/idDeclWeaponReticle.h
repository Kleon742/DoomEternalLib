struct idDeclWeaponReticle : idGameDeclTypeInfo
{
    enum reticleStyle_t : int
    {
        RETICLE_STYLE_NONE = 0,
        RETICLE_STYLE_DOT = 1,
        RETICLE_STYLE_ROCKET_LAUNCHER = 2,
        RETICLE_STYLE_SHOTGUN = 3,
        RETICLE_STYLE_SHOTGUN_STICKY_BOMBS = 4,
        RETICLE_STYLE_SHOTGUN_STICKY_BOMBS_MASTERY = 5,
        RETICLE_STYLE_SHOTGUN_FULL_AUTO = 6,
        RETICLE_STYLE_HEAVY_CANNON = 7,
        RETICLE_STYLE_HEAVY_CANNON_BOLT = 8,
        RETICLE_STYLE_DB_SHOTGUN = 9,
        RETICLE_STYLE_DB_SHOTGUN_MEATHOOK = 10,
        RETICLE_STYLE_PLASMA = 11,
        RETICLE_STYLE_PLASMA_MICROWAVE = 12,
        RETICLE_STYLE_PLASMA_AOE = 13,
        RETICLE_STYLE_PLASMA_STUN_FASTER_RECHARGE = 14,
        RETICLE_STYLE_CHAINGUN = 15,
        RETICLE_STYLE_CHAINGUN_TURRET = 16,
        RETICLE_STYLE_CHAINGUN_TURRET_NOHEAT = 17,
        RETICLE_STYLE_BALLISTA_ARBALEST = 18,
        RETICLE_STYLE_BALLISTA_DESTROYER = 19,
        RETICLE_STYLE_BALLISTA_DESTROYER_MASTERY = 20,
        RETICLE_STYLE_CHAINSAW = 21,
        RETICLE_STYLE_ROCKET_LAUNCHER_LOCKON = 22,
        RETICLE_STYLE_BFG = 23,
        RETICLE_STYLE_CRUCIBLE = 24,
        RETICLE_STYLE_UNMAKYR = 25,
        RETICLE_STYLE_PISTOL = 26,
        RETICLE_STYLE_MP_BARON = 27,
        RETICLE_STYLE_MP_REVENANT = 28,
        RETICLE_STYLE_MP_PROWLER = 29,
        RETICLE_STYLE_MP_MANCUBUS = 30,
        RETICLE_STYLE_MP_HARVESTER = 31,
        RETICLE_STYLE_MP_CACODEMON = 32,
        RETICLE_STYLE_MP_PINKY = 33,
        RETICLE_STYLE_MP_ARCHVILE = 34,
        RETICLE_STYLE_MP_MARAUDER = 35,
        RETICLE_STYLE_MP_DREADKNIGHT = 36,
        RETICLE_STYLE_MAX = 37
    };

    enum reticleZoomStyle_t : int
    {
        RETICLE_ZOOM_STYLE_NONE = 0,
        RETICLE_ZOOM_STYLE_IRON_SIGHTS = 1,
        RETICLE_ZOOM_STYLE_SCOPE = 2
    };

    struct barSWFInfo_t
    {
        // name1->name2->name3 is the object hierarchy to the bar object in the swf
        idStr name1; // Offset: 0x0

        // name1->name2->name3 is the object hierarchy to the bar object in the swf
        idStr name2; // Offset: 0x30

        // name1->name2->name3 is the object hierarchy to the bar object in the swf
        idStr name3; // Offset: 0x60

    }; // Size: 0x90

    struct spritePath_t
    {
        // Path to the sprite object in the swf
        idList < idAtomicString , TAG_IDLIST , false > spritePath; // Offset: 0x0

    }; // Size: 0x18

    struct fireControlHelper_t
    {
        // show this helper
        bool show; // Offset: 0x0

        // delay before showing in ms
        milliToGameTime_t delayToShowTimeMS; // Offset: 0x8

        // how long do we show it in ms
        milliToGameTime_t displayTimeMS; // Offset: 0x18

        // the "tooltip" text for primary fire
        idStrId primaryDesc; // Offset: 0x28

        // the "tooltip" text for secondary fire
        idStrId secondaryDesc; // Offset: 0x2C

    }; // Size: 0x30

    struct spectatorControlHelper_t
    {
        // Show this helper in spectator mode
        bool showSpectatorInfo; // Offset: 0x0

        // press BLAH for previous player
        idStrId followCameraPreviousPlayerDesc; // Offset: 0x4

        // press BLAH for next player
        idStrId followCameraNextPlayerDesc; // Offset: 0x8

        // press BLAH to return to self
        idStrId followCameraReturnToSelfDesc; // Offset: 0xC

        // press BLAH to switch to camera BLAH
        idStrId followCameraNextCameraModeDec; // Offset: 0x10

        // press BLAH to recenter camera
        idStrId followCameraRecenterDesc; // Offset: 0x14

        // press BLAH to switch to camera BLAH
        idStrId freeCameraNextCameraModeDesc; // Offset: 0x18

        // press BLAH for mo' speed
        idStrId freeCameraFastMoveDesc; // Offset: 0x1C

        // press BLAH for slow speed
        idStrId freeCameraSlowMoveDesc; // Offset: 0x20

    }; // Size: 0x24

    struct customHeatPipInfo_t
    {
        struct pipInfo_t
        {
            // The sprites that represent this pip
            idList < idDeclWeaponReticle::spritePath_t , TAG_IDLIST , false > spriteList; // Offset: 0x0

        }; // Size: 0x18

        // The list of pips, each pip can use a list of sprites
        idList < idDeclWeaponReticle::customHeatPipInfo_t::pipInfo_t , TAG_IDLIST , false > pipList; // Offset: 0x0

    }; // Size: 0x18

    // how the reticle should look
    idDeclWeaponReticle::reticleStyle_t style; // Offset: 0x90

    // does the reticle use anything special for it's zoom
    idDeclWeaponReticle::reticleZoomStyle_t zoomStyle; // Offset: 0x94

    // used to display a helper widget along with reticle
    idDeclWeaponReticle::fireControlHelper_t fireControlHelper; // Offset: 0x98

    // used to display helper widget in spectator mode
    idDeclWeaponReticle::spectatorControlHelper_t spectatorControlHelper; // Offset: 0xC8

    // scale of the zoom fx
    float zoomFxScale; // Offset: 0xEC

    // scale of the magnification portion of the screen
    float magnificationScale; // Offset: 0xF0

    // affects how the reticle spreads
    float spreadFactor; // Offset: 0xF4

    // scale of the rendermodel for the reticle
    float reticleModelScale; // Offset: 0xF8

    // scalar applied to the arc that makes it so the player doesn't have to look straight up or down to get the full arc display
    float arcScale; // Offset: 0xFC

    // What frame is max charge for this reticle? Default is 100
    int maxChargeFrame; // Offset: 0x100

    // How many shots should the reticle show?
    int shotsToShow; // Offset: 0x104

    // whether to show weapon spread
    bool showSpread; // Offset: 0x108

    // whether to show the zoomed reticle
    bool showZoom; // Offset: 0x109

    // does this reticle have a seperate zoom anim in the swf for when it is mastered
    bool hasMasteredZoom; // Offset: 0x10A

    // whether to show reticle centered health/ammo/etc indicators while zoomed
    bool showReticleIndicatorsWhileZoomed; // Offset: 0x10B

    // whether to show the default reticle when zoomed
    bool showReticleWhileZoomed; // Offset: 0x10C

    // whether, when zoomed in, to show a reticle that changes with spread
    bool showZoomedReticleSpread; // Offset: 0x10D

    // only play the reticle zoom in or zoom out animations when the weapon animation is fully zoomed in or fully zoomed out
    bool zoomOnlyWhenFullyZoomed; // Offset: 0x10E

    // whether to show heat information on reticle
    bool showHeat; // Offset: 0x10F

    // whether to show charging/discharging information on the reticle
    bool showCharge; // Offset: 0x110

    // whether to show charging/discharging information on the reticle after using the charge
    bool showChargeAfterUse; // Offset: 0x111

    // Dont show cooldown bar when charging.
    bool hideCooldownOnCharge; // Offset: 0x112

    // Dont show cooldown bar when burst is available (1 or higher).
    bool hideCooldownOnBurst; // Offset: 0x113

    // whether to show the lock-on timer info
    bool showLockOn; // Offset: 0x114

    // whether to show the lock-on timer as a delayed series of steps
    bool showLockSteps; // Offset: 0x115

    // whether to show an indication you are in lunge range on the reticle
    bool showLunge; // Offset: 0x116

    // the fire mode to show ammo in
    weaponFireMode_t showAmmoFireMode; // Offset: 0x118

    // whether to show weapon ammo as fuel or not
    bool showFuel; // Offset: 0x11C

    // show when a sync attack plays (chainsaw)
    bool showDuringSyncAttacks; // Offset: 0x11D

    // show when a weapon has an unable to attack state
    bool showUnableToAttack; // Offset: 0x11E

    // show a clip when the weapon fires
    bool showShot; // Offset: 0x11F

    // show a clip when the weapon charge is released (either through firing or the user no longer holding charge input)
    bool showChargeRelease; // Offset: 0x120

    // show a clip that displays the weapon fire arc
    bool showArc; // Offset: 0x121

    // do this reticles zoom in/out as it charges rather than if it is in scope
    bool zoomOnCharge; // Offset: 0x122

    // Does this reticle need to show individual charges? (basically should charges be displayed as an integer rather than a float percentage)
    bool showIndividualCharges; // Offset: 0x123

    // Shows when the chaingun is up to full spin speed
    bool showsSpinUp; // Offset: 0x124

    // If we are showing a movie clip for heat do we want to hide text inside it?
    bool hideHeatText; // Offset: 0x125

    // Only update our spin sprite when zooming or fully zoomed in
    bool spinOnlyOnZoom; // Offset: 0x126

    // HACK for playtest bc I don't know the correct name of the fully cooled frame in the gauss sniper reticle, -1 to ignore
    int forceFullyCooledFrame; // Offset: 0x128

    // The reticle doesn't use the weapons charge to populate its charge bar but instead has a special case
    bool usesSpecialCharge; // Offset: 0x12C

    // whether to show the hostile target on the reticle or not
    bool showHostileTarget; // Offset: 0x12D

    // only show hostile target when zoomed
    bool showHostileTargetOnlyWhenZoomed; // Offset: 0x12E

    // whether to show visuals when over a hostile weak point or not. only works if 'showHostileTarget' is true
    bool showHostileTargetWeakPoint; // Offset: 0x12F

    // ambient sound shader
    idSoundEvent* zoomInSound; // Offset: 0x130

    // ambient sound shader
    idSoundEvent* zoomOutSound; // Offset: 0x138

    // to display a burst count
    idDeclWeaponReticle::barSWFInfo_t burstBar0; // Offset: 0x140

    // to display a burst count
    idDeclWeaponReticle::barSWFInfo_t burstBar1; // Offset: 0x1D0

    // to display cooldown
    idList < idDeclWeaponReticle::spritePath_t , TAG_IDLIST , false > cooldownBars; // Offset: 0x260

    // to display charge percent
    idList < idDeclWeaponReticle::spritePath_t , TAG_IDLIST , false > chargeBars; // Offset: 0x278

    // to display a piece of the reticle that matches the weapon barrel rotation
    idDeclWeaponReticle::barSWFInfo_t spinBar; // Offset: 0x290

    // to display a supercharge bar
    idDeclWeaponReticle::barSWFInfo_t superchargeBar; // Offset: 0x320

    // to display target health
    idList < idDeclWeaponReticle::spritePath_t , TAG_IDLIST , false > targetHealthBars; // Offset: 0x3B0

    // to pulse when ammo is given via idDeclDamage::ammoReturnOnDeath
    idDeclWeaponReticle::spritePath_t giveAmmoSprite; // Offset: 0x3C8

    // The explicit custom pips to use instead of the default ( "heat", "pips" ) usage. Heat pips are meant to be dynamic in number but this makes it expect a specific number.
    idDeclWeaponReticle::customHeatPipInfo_t heatCustomPipInfo; // Offset: 0x3E0

    // List of sprite paths from "reticle" to sprites that needs to update their hostile target visual state
    idList < idDeclWeaponReticle::spritePath_t , TAG_IDLIST , false > hostileTargetSpritePaths; // Offset: 0x3F8

    // List of sprite paths from "reticle" to sprites that needs to update their weakpoint visual state
    idList < idDeclWeaponReticle::spritePath_t , TAG_IDLIST , false > hostileTargetWeakPointSpritePaths; // Offset: 0x410

}; // Size: 0x428
