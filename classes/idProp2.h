struct idProp2 : idAnimatedEntity
{
    enum difficultyScaleType_t : int
    {
        DST_INVALID = 0,
        DST_DROPPED_BOSS = 1,
        DST_DROPPED_BOSS_BFG = 2,
        DST_DROPPED = 3,
        DST_PICKUP = 4
    };

    enum category_t : int
    {
        CATEGORY_DEFAULT = 0,
        CATEGORY_MP_POWER_UP = 1,
        CATEGORY_MP_POWER_WEAPON = 2,
        CATEGORY_MP_GAME_MODE = 3
    };

    enum magnetizationEntity_t : int
    {
        MAGNETIZE_TO_NO_ONE = 0,
        MAGNETIZE_TO_CACODEMON = 1
    };

    struct propAttachment_t
    {
        // automatically instantiated idRenderModel
        idRenderModel* renderModel; // Offset: 0x0

        // offset for this model {{ units = m }}
        idVec3 renderModelOffset; // Offset: 0x8

        // scale for this model
        idVec3 renderModelScale; // Offset: 0x14

        // custom skin index for the model
        int renderModelCustomSkinIndex; // Offset: 0x20

        // name of joint tag to bind to
        idStr tagName; // Offset: 0x28

        // what fx decl to use for the attachment.
        idDeclFX* fxDecl; // Offset: 0x58

        // Starting state of the entity.
        idAnimWebPath animWebPath; // Offset: 0x60

        // List of anims associated with this attachment.
        idList < idAnimWebPath , TAG_IDLIST , false > animWebPathList; // Offset: 0x90

        // the anim web decl this component
        idDeclAnimWeb* animWebDecl; // Offset: 0xA8

        // locally created animweb.
        idAnimator_AnimWeb localAnimWeb; // Offset: 0xB0

        // __edit idList< attachmentStateColor_t >stateColors; color per state. the entity.
        idManagedClassPtr < idAnimatedEntity > attachedEntity; // Offset: 0x920

        // Does the outline get applied to this attachment.
        bool allowOutline; // Offset: 0x940

        // updates the attachment position each frame
        bool updatePostionEachFrame; // Offset: 0x941

    }; // Size: 0x948

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > savedLootRemovalGameTime; // Offset: 0x1B48

    idVec3 overrideVelocity; // Offset: 0x1B50

    // ------------------------ fading ------------------------
    idFadeHelper fade; // Offset: 0x1B60

    // physical attributes of the prop.
    idDeclProp_PhysicsAttribs* physicsAttributes; // Offset: 0x1B80

    // min time (in secs) that must pass before player can pickup prop
    float minPickupTimeSecs; // Offset: 0x1B88

    // list of attachments to apply to the entity.
    idList < idProp2::propAttachment_t , TAG_IDLIST , false > attachments; // Offset: 0x1B90

    idManagedClassPtr < idEntity > propOwner; // Offset: 0x1BA8

    // was this dropped from loot.
    bool droppedFromLoot; // Offset: 0x1BC8

    // context of this loot drop
    lootDropContextFlags_t lootDropContextFlags; // Offset: 0x1BCC

    // hide render model (allows an animated attachment to be used as the base model)
    bool hideRenderModel; // Offset: 0x0

    // static object
    bool isStatic; // Offset: 0x0

    // used to track above.
    bool hasCheckedUniqueInWorld; // Offset: 0x0

    // prop is hidden when spawned
    bool hideWhenSpawned; // Offset: 0x0

    // when a game/round ends, do we reset ourselves. overridden by removeOnEndRound
    bool resetOnEndRound; // Offset: 0x0

    // when a game/round ends, do we remove ourselves
    bool removeOnEndRound; // Offset: 0x0

    // true to equip the inventory items when this prop is activated
    bool equipOnPickup; // Offset: 0x0

    // if it's a weapon that's not ordinarily selectable, like the BFG, this will allow it to be selected on pickup anyway
    bool ignoreSelectable; // Offset: 0x0

    // if it's a weapon, this will force it to equip on pickup even if some other blockers might exist
    bool forceEquip; // Offset: 0x0

    // if it's a weapon, force it to be fully loaded.
    bool forceFullyLoaded; // Offset: 0x0

    // use the highlight to signify usable.
    bool useHighlight; // Offset: 0x0

    // Display a pickup message for the prop2
    bool displayPickupMessage; // Offset: 0x0

    // prop use can revive player
    bool canRevivePlayer; // Offset: 0x0

    // if the pick up is a perk activate it immediately
    bool activatePerkOnPickup; // Offset: 0x0

    // abandon prop will work if we're currently being used
    bool allowAbandonWhileUsing; // Offset: 0x0

    // Can this prop show the 'incoming' timer when various hack modules are used?
    bool supportsShowingGui; // Offset: 0x0

    // play FX_PROP_SPAWN when showing
    bool playSpawnFx; // Offset: 0x0

    // if 'true', the pvp spawning system will pay attention to this entity
    bool canAffectSpawning; // Offset: 0x0

    // if true we will force update the position of the prop when attached to movers
    bool forceUpdateBinding; // Offset: 0x0

    // Do we think without a think component?
    bool thinkWithoutThinkComponent; // Offset: 0x0

    // Don't pickup this item if the player's hands are busy animating (ie: firing or whatnot)
    bool dontPickupIfPlayerHandsBusy; // Offset: 0x0

    // if true will remove this interactable from all master levels
    bool removeForMasterLevels; // Offset: 0x0

    // if true, is considered a loot drop and will serialize less.
    bool isLootDrop; // Offset: 0x0

    // whether we believe the prop is magnetized to an entity
    bool isPropMagnetized; // Offset: 0x0

    // track whether the prop was picked up
    bool wasMagnetizedPropPickedUp; // Offset: 0x0

    // wether we are running on a different thread
    bool inCustomJob; // Offset: 0x0

    // We canceled our remove events.
    bool canceledRemoveForCinematic; // Offset: 0x0

    // This is an override for special behaviors. This allow the ability to turn off the usability of a prop for certain players. Masked by Player Index
    int prohibitedPlayerMask; // Offset: 0x1BD4

    // This prop was exposed during a cinematic view
    bool propIsInCinematicView; // Offset: 0x1BD8

    // this is an override from script, this give designers the ability to turn on and off the usablility of a prop. Masked by Player Index
    unsigned int isUsable; // Offset: 0x1BDC

    // custom skin index to use for this prop
    int customSkinIndex; // Offset: 0x1BE0

    // custom index set by TimedBountyManager to track reward and FX
    int customBountyRewardId; // Offset: 0x1BE4

    // Component data the decl used for usable Components
    idDeclProp_UseComponent* useableComponentDecl; // Offset: 0x1BE8

    // the useable portion of this prop.
    idUseableComponent* useableComponent; // Offset: 0x1BF0

    // Old usable Components that we've had.
    idList < idUseableComponent * , TAG_IDLIST , false > useableComponentList; // Offset: 0x1BF8

    // the decl used for think components...
    idDeclProp_ThinkComponent* thinkComponentDecl; // Offset: 0x1C10

    // the decl used for think components in pvp (falls back to thinkComponentDecl if NULL)
    idDeclProp_ThinkComponent* pvpThinkComponentDecl; // Offset: 0x1C18

    // the think portion of this prop.
    idThinkComponent* thinkComponent; // Offset: 0x1C20

    // Old Think Components we've had.
    idList < idThinkComponent * , TAG_IDLIST , false > thinkComponentList; // Offset: 0x1C28

    // the decl used for damage components.
    idDeclProp_DamageComponent* damageComponentDecl; // Offset: 0x1C40

    // the damage portion of this prop.
    idDamageComponent* damageComponent; // Offset: 0x1C48

    // Old Damage Components we've had.
    idList < idDamageComponent * , TAG_IDLIST , false > damageComponentList; // Offset: 0x1C50

    // ------------------------ serialization ------------------------ on clients, play the sound that the prop was picked up.
    idInstantNetEvent < 16 > serializedPlayedPickedUpEvents; // Offset: 0x1C68

    // on clients, user to play the events for ( if not locally controlled )
    idManagedClassPtr < idEntity > serializedPickedUpUser; // Offset: 0x1C70

    // entity we're magnetized to
    idManagedClassPtr < idEntity > magnetizedEntity; // Offset: 0x1C90

    // timer until we just give the magnetized prop to the entity
    idSmartTimer < GAMETIME_SCALED > magnetizedPickupTimer; // Offset: 0x1CB0

    // spawn origin at start of magnetization {{ units = m }}
    idVec3 magnetizedSpawnOrigin; // Offset: 0x1CB8

    // last good origin for the magnetizedEntity {{ units = m }}
    idVec3 magnetizedEntityOrigin; // Offset: 0x1CC4

    // if this is set, the prop will magnetize to that entity
    idProp2::magnetizationEntity_t entityToMagnetizeTo; // Offset: 0x1CD0

    // ------------------------ Useability ------------------------ Hide instead of remove if item is set to never respawn
    bool hideOnUse; // Offset: 0x1CD4

    // When entity is to be removed, it waits this amount of time beforehand (so FX can play)
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeBeforeRemovingMS; // Offset: 0x1CD8

    // Amount of time in MS until the health pickup respawns, -1 mean never respawning
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeUntilRespawnMS; // Offset: 0x1CDC

    // Amount of time in MS before initially being visible; 0 or less means it starts visible
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeBeforeInitialSpawnMS; // Offset: 0x1CE0

    // For props that quickly animate their scale, what should the initial scale be for the start of the animation
    idVec3 startingScale; // Offset: 0x1CE4

    // For props that quickly animate their scale, over how many milliseconds should we animate to the intended scale
    int scaleAnimationLengthMS; // Offset: 0x1CF0

    // Should we animate scale when the prop gets shown
    bool animateScaleOnShow; // Offset: 0x1CF4

    // Amount of time in MS that the prop can be visible before it removes itself; 0 or less means no limit.
    idTypesafeTime < int , millisecondUnique_t , 1000 > abandonmentTimeMS; // Offset: 0x1CF8

    // Additional scale multiplier for gui
    float guiScaleMultiplier; // Offset: 0x1CFC

    // Offset to apply from prop position {{ units = m }}
    idVec3 guiOffset; // Offset: 0x1D00

    // Time at which we should abandon and remove the prop if any
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > abandonmentTriggerTime; // Offset: 0x1D10

    // Time at which the current prop will spawn
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentRespawnTime; // Offset: 0x1D18

    // Current time that was used to delay spawning
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTotalRespawnTime; // Offset: 0x1D20

    // Must pass this time before being useable;
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > earliestUseableTime; // Offset: 0x1D28

    // max number of uses (-1 == infinite)
    int maxUses; // Offset: 0x1D30

    // if true, allows bots to pickup item.
    bool allowBots; // Offset: 0x1D34

    // if true, allows demon players to pickup item.
    bool allowDemonPlayers; // Offset: 0x1D35

    // if true, this item can be touched up by a player currently PERFORMING a glory kill ( NOT the victim ).
    bool allowTouchDuringGloryKill; // Offset: 0x1D36

    // allowed AI types
    aiMonsterType_t allowAITypeMask; // Offset: 0x1D38

    // if true and this prop is team affiliated, only players on the same team can use it. If the prop is neutral, any player can use it.
    bool requiresSameTeam; // Offset: 0x1D40

    // if style is touch then on touch of the volume it will auto loot if it can. if it is use on touch will put up a use prompt or on look will put up the use prompt.
    lootStyle_t lootStyle; // Offset: 0x1D44

    // in MS, if we're using the LOOT_TOUCH_USE_TIMED loot style, how long must the player hold the use button while in the trigger
    int lootDuration; // Offset: 0x1D48

    // touch trigger definition
    idDeclEntityDef* triggerDef; // Offset: 0x1D50

    // the trigger used to determine touch on this item for players and AI.
    idManagedClassPtr < idTrigger > trigger; // Offset: 0x1D58

    // sound to play when the object spawns
    idSoundEvent* sound_spawn; // Offset: 0x1D78

    // [DEPRECATED] looping sound which plays while this prop is active
    idSoundEvent* sound_loop; // Offset: 0x1D80

    // stop sound to play when this object is destroyed or hidden
    idSoundEvent* sound_stop; // Offset: 0x1D88

    // secret material to swap to if useSecretMaterial = true
    idMaterial2* secretMaterial; // Offset: 0x1D90

    // Per instance if we should use the secret prop material instead of the main path one
    bool useSecretMaterial; // Offset: 0x1D98

    // alternate materials this prop may use (it is expected for a managing system to perform the swap)
    idList < const idMaterial2 * , TAG_IDLIST , false > alternateMaterials; // Offset: 0x1DA0

    // if true, ignore using the visibility boxes flag to indicate visibility
    bool ignoreVisibilityBox; // Offset: 0x1DB8

    // if true, we have been spawned as a part of a timed bounty and need to notify the Horde mode when we are picked up
    bool isTimedBountyReward; // Offset: 0x1DB9

    // if true, register with the staged timer for highlight updates
    bool isHordePointCoin; // Offset: 0x1DBA

    // ------------------------ movement ------------------------ physics object. always check vs NULL before using
    idPhysics* physicsObj; // Offset: 0x1DC0

    // velocity override set during ResetPropPhysics {{ units = m / s }}
    idVec3 initialLinearVelocity; // Offset: 0x1DC8

    // next time the movable can hurt the player
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextDamageTime; // Offset: 0x1DD8

    // next time the moveable can make a bounce sound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextBounceTime; // Offset: 0x1DE0

    // next time the moveable can make a scrape sound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextScrapeTime; // Offset: 0x1DE8

    // next time the moveable can be damaged by any collision
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSelfDamageTime; // Offset: 0x1DF0

    // next time we can apply an impulse
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextImpulseTime; // Offset: 0x1DF8

    // for props that quickly animate their scale, this saves the intended scale for the object
    idVec3 targetScale; // Offset: 0x1E00

    float currentScaleLerp; // Offset: 0x1E0C

    float frameLerpAmount; // Offset: 0x1E10

    // type of difficulty scale applied to this prop
    idProp2::difficultyScaleType_t difficultyScaleType; // Offset: 0x1E14

    // category of prop (used in mp)
    idProp2::category_t category; // Offset: 0x1E18

    // If the item is a progression item, what type
    progressionCategory_t progressionCategory; // Offset: 0x1E1C

    // The map group the item belongs in
    automapMapGroupId_t automapGroup; // Offset: 0x1E20

    // Don't show on the dossier if this entity is hidden
    bool hideProgressionWhenHidden; // Offset: 0x1E24

    // was this prop dropped from an AI?
    bool droppedFromAI; // Offset: 0x1E25

    // does this prop drop loot?
    idLootDropComponent lootDrop; // Offset: 0x1E28

    // ------------------------ FX ------------------------ do we update FX every frame for this prop?
    bool updateFX; // Offset: 0x1EC0

    // screen to show for this gui
    arGuiScreen_t guiScreen; // Offset: 0x1EC4

    // spawnID of the "user" of this prop.
    idSpawnId userSpawnID; // Offset: 0x1EC8

    // ------------------------ Stat Manipulation ------------------------ Increase these stats on use.
    idList < statManipulation_t , TAG_IDLIST , false > use_statIncreases; // Offset: 0x1ED0

    // Increase these stats on pickup.
    idList < statManipulation_t , TAG_IDLIST , false > pickup_statIncreases; // Offset: 0x1EE8

    // handle to spawn manager representation of this prop
    idHandle < int , invalidSpawnInfluencer_t , INVALID_INFLUENCER > spawnInfluencer; // Offset: 0x1F00

    // the unique id for a specific prop object
    idUUID uniqueId; // Offset: 0x1F04

    // track bobbing and rotating seperate from physics so it does not get networked {{ units = m }}
    idVec3 bobbingOffsetPos; // Offset: 0x1F14

    float bobbingRotationUp; // Offset: 0x1F20

    // can this prop be possessed by a demon player
    bool canBePossessed; // Offset: 0x1F24

    // currently possessed
    bool possessed; // Offset: 0x1F25

    // cached from player initially
    uint16 broadcastID; // Offset: 0x1F26

    // item is sufficiently notable for telemetry event when picked up
    bool sendNotableItemTelemetryEvent; // Offset: 0x1F28

    idSysMutex unTouchMutex; // Offset: 0x1F30

}; // Size: 0x1F58
