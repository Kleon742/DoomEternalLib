struct idDeclActorModifier : idDeclInventory
{
    enum ActorModifierTarget_t : int
    {
        TARGET_SELF = 0,
        TARGET_VICTIM = 1,
        TARGET_ATTACKER = 2
    };

    enum ActorModifierActionType_t : int
    {
        ACTION_MODIFY_VALUE = 0,
        ACTION_APPLY_MODIFIER = 1,
        ACTION_DROP_POI = 2,
        ACTION_PING_POI_TAG = 3,
        ACTION_GIVE_OVERDRIVE_POINTS = 4,
        ACTION_CLEAR_OVERDRIVE_POINTS = 5,
        ACTION_ACTIVATE_DEMON = 6,
        ACTION_SPAWN_ENTITY = 7,
        ACTION_CLEAR_KILLCOUNT = 8,
        ACTION_APPLY_CUSTOM_MATERIAL = 9,
        ACTION_TELEPORT_SPAWN = 10,
        ACTION_ENABLE_INCOGNITO_MODE = 11,
        ACTION_ACTIVATE_MINIMAP_PING = 12,
        ACTION_ACTIVATE_EQUIPMENT_LAUNCHER = 13,
        ACTION_CHANGE_GAME_TEAM = 14,
        MODIFIER_ACTION_COUNT = 15
    };

    enum ActorModifierAttribute_t : int
    {
        NULL_MODIFICATION = 0,
        SPEED_MODIFICATION = 1,
        DAMAGE_MODIFICATION = 2,
        SELF_DAMAGE_MODIFICATION = 3,
        OVERDRIVE_DISABLE_MODIFICATION = 4,
        STAMINA_MODIFICATION = 5,
        AMMO_PICKUP_BONUS_MODIFICATION = 6,
        ARMOR_PICKUP_BONUS_MODIFICATION = 7,
        EQUIPMENT_LAUNCHER_LEFT = 8,
        EQUIPMENT_LAUNCHER_RIGHT = 9,
        GAME_TEAM_DEMONS_MODIFICATION = 10,
        GAME_TEAM_SLAYERS_MODIFICATION = 11,
        MODIFIER_ATTRIB_COUNT = 12
    };

    enum ActorModifierAttributeOperation_t : int
    {
        MULTIPLY_VALUE = 0,
        ADD_VALUE = 1
    };

    enum ActorModifierDependency_t : int
    {
        NULL_DEPTYPE = 0,
        OVERDRIVE_FULL_DEPTYPE = 1,
        KILLCOUNT_FULL_DEPTYPE = 2,
        KILLSTREAK_DEPTYPE = 3,
        DEPTYPE_COUNT = 4
    };

    enum TriggerType_t : int
    {
        TRIGGER_TYPE_BUTTON = 0,
        TRIGGER_TYPE_ALWAYS_ON = 1,
        TRIGGER_TYPE_DAMAGE_DEALT = 2,
        TRIGGER_TYPE_DAMAGE_TAKEN = 3,
        TRIGGER_TYPE_TIMER = 4,
        TRIGGER_TYPE_ACTIVATE_DEMON = 5,
        TRIGGER_TYPE_HEADSHOT_KILL = 6,
        TRIGGER_TYPE_HEADSHOT = 7,
        TRIGGER_TYPE_KILL = 8,
        TRIGGER_TYPE_REVEAL = 9,
        TRIGGER_TYPE_COUNT = 10
    };

    enum ActorModifierUISlot_t : int
    {
        SLOT_HIDDEN = 0,
        SLOT_ACTIVE = 1,
        SLOT_PASSIVE = 2,
        SLOT_OVERDRIVE = 3,
        SLOT_DEMON = 4,
        SLOT_SLAYER = 5
    };

    struct ActorModifierSounds_t
    {
        // Sound to apply when attacking
        idSoundEvent* attackSound; // Offset: 0x0

        // Sound to play while property is active. (most likely looping)
        idSoundEvent* activeSound; // Offset: 0x8

        // Sound to play when the property goes active.
        idSoundEvent* startSound; // Offset: 0x10

        // Sound to play when the property goes inactive.
        idSoundEvent* stopSound; // Offset: 0x18

        // This field can be used for outro sounds, or indicate a near expiration condition.
        idSoundEvent* almostDoneSound; // Offset: 0x20

    }; // Size: 0x28

    struct ActorModifierAction_t
    {
        // Action that this output should apply.
        idDeclActorModifier::ActorModifierActionType_t type; // Offset: 0x0

        // Attribute that the output will modify (speed, damage, etc...)
        idDeclActorModifier::ActorModifierAttribute_t attrib; // Offset: 0x4

        // Operation. (Should this be additive or multiplicitive) !Not currently supported!
        idDeclActorModifier::ActorModifierAttributeOperation_t operation; // Offset: 0x8

        // Target for this output to apply. (Self or target)
        idDeclActorModifier::ActorModifierTarget_t target; // Offset: 0xC

        // The modifier value to apply.
        float value; // Offset: 0x10

        // Used by ACTION_SPAWN_ENITTY action. The amount of time the entity will be spawned.
        milliToGameTime_t spawnTime; // Offset: 0x18

        // If ACTION_APPLY_MODIFIER is set as the action, apply the this decl to the receiver.
        idDeclActorModifier* decl; // Offset: 0x28

        // Used by ACTION_ACTIVATE_DEMON or ACTION_SPAWN_ENTITY action. Specifies the entity to spawn or the demon to become
        idDeclEntityDef* entityDef; // Offset: 0x30

        // custom material to apply to the first person hands model.
        idMaterial2* customMaterial; // Offset: 0x38

        // custom material to apply to the first person weapon model.
        idMaterial2* customWeaponMaterial; // Offset: 0x40

        // custom material to apply to the third person model.
        idMaterial2* customMaterial3rdPerson; // Offset: 0x48

        // custom material to apply to the third person weapon model.
        idMaterial2* customWeaponMaterial3rdPerson; // Offset: 0x50

        // Sounds associated with this output.
        idDeclActorModifier::ActorModifierSounds_t sounds; // Offset: 0x58

        // Is this an output that should be predicted on the client? (i.e. run before confirmation from the server)
        bool predicted; // Offset: 0x80

        // Is this action supported in coop?
        bool supportedInCoop; // Offset: 0x81

    }; // Size: 0x88

    struct ActorModifierTrigger_t
    {
        // Trigger type
        idDeclActorModifier::TriggerType_t type; // Offset: 0x0

        // If the type is TRIGGER_TYPE_BUTTON, which button are we listening for?
        usercmdButton_t button; // Offset: 0x8

        // Time in between ticks.
        milliToGameTime_t timerDelay; // Offset: 0x10

    }; // Size: 0x20

    struct ActorModifierDeps_t
    {
        // Dependency type
        idDeclActorModifier::ActorModifierDependency_t type; // Offset: 0x0

    }; // Size: 0x4

    struct ActorModifierUiDisplay_t
    {
        // Gui Weapon Scale.
        float scale; // Offset: 0x0

        // Gui Weapon position offset.
        idVec3 offset; // Offset: 0x4

        // display roll.
        float roll; // Offset: 0x10

    }; // Size: 0x14

    // These will be applied if the modifier goes active.
    idList < idDeclActorModifier::ActorModifierAction_t , TAG_IDLIST , false > actions; // Offset: 0x3F8

    // This activity will activate the modifier.
    idDeclActorModifier::ActorModifierTrigger_t trigger; // Offset: 0x410

    // Dependencies of the modifier. These must be met in addition to the trigger to activate.
    idList < idDeclActorModifier::ActorModifierDeps_t , TAG_IDLIST , false > deps; // Offset: 0x430

    // Time to live, in milliseconds (per use)
    milliToGameTime_t lifetime; // Offset: 0x448

    // Time until removal.
    milliToGameTime_t removeAfter; // Offset: 0x458

    // Time delay until the modifier is available again.
    milliToGameTime_t cooldown; // Offset: 0x468

    // FX decl.
    idDeclFX* fxDecl; // Offset: 0x478

    // New upgrades - the normal upgrade list for the character.
    idDeclPVPUpgrade* pvpNormalUpgrades; // Offset: 0x480

    // New upgrades - the power upgrade list for the character.
    idDeclPVPUpgrade* pvpPowerUpgrades; // Offset: 0x488

    // Slot for display in the UI.
    idDeclActorModifier::ActorModifierUISlot_t uiSlot; // Offset: 0x490

    // Icon to display on the UI.
    idMaterial2* uiIcon; // Offset: 0x498

    // Alternate Icon to display on the UI.
    idMaterial2* uiIconAlt; // Offset: 0x4A0

    // Large Icon to display on the UI.
    idMaterial2* uiIconLarge; // Offset: 0x4A8

    // Icon to display in the menu when selected.
    idMaterial2* uiSelectedIcon; // Offset: 0x4B0

    // Icon to display in the menu when unselected.
    idMaterial2* uiUnselectedIcon; // Offset: 0x4B8

    // Model display properties for the UI (e.g. on invasion demon select).
    idDeclActorModifier::ActorModifierUiDisplay_t uiModelDisplay; // Offset: 0x4C0

    // Drop this item when the parent dies.
    bool dropOnDeath; // Offset: 0x4D4

    // Remaining duration must be more than this to allow drop
    int dropDurationThreshold; // Offset: 0x4D8

    // Remove if the parent dies.
    bool removeOnDeath; // Offset: 0x4DC

    // Remove if instigator dies.
    bool removeOnInstigatorDeath; // Offset: 0x4DD

    // Remove if the weapon is fired (temp hack for stealth)
    bool removeOnWeaponFire; // Offset: 0x4DE

    // playable character decl (contains podium info)
    idDeclPlayableCharacter* playableCharacter; // Offset: 0x4E0

    // The value to set "g_demonSelect" when loading into the tutorial map
    int pvpTutorialCvarValue; // Offset: 0x4E8

}; // Size: 0x4F0
