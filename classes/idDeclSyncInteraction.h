struct idDeclSyncInteraction : idGameDeclTypeInfo
{
    enum enum_1F401 : int
    {
        MaxInputTypes = 2
    };

    struct visualData_t
    {
        struct cameraData_t
        {
            // Sync Entity animation joint for the cam
            idAtomicString jointName; // Offset: 0x0

            // Likelihood to select this camera
            float weight; // Offset: 0x8

        }; // Size: 0x10

        // Where my focal point is.
        idStr focalTagName; // Offset: 0x0

        // Animation-driven cameras
        idList < idDeclSyncInteraction::visualData_t::cameraData_t , TAG_IDLIST , false > cameras; // Offset: 0x30

        // Sphere where the highlight masks.
        idVec4 highlightMaskSphere; // Offset: 0x48

    }; // Size: 0x58

    struct animationData_t
    {
        // Animation infos for this sync.
        idList < syncAnimationInfo_t , TAG_IDLIST , false > anims; // Offset: 0x0

        // How the animation is picked.
        syncAnimChoice_t chosenBy; // Offset: 0x18

        // If set to something besides -1, it will force the animation to that index.
        int debug_forceAnimIndex; // Offset: 0x1C

    }; // Size: 0x20

    struct validationRules_t
    {
        // If true, will perform position/orientation etc validation to see if the syncInteraction is acceptable. Otherwise just accepts it.
        bool performPositionValidation; // Offset: 0x0

        // If true, this will perform slide move checks to the projected position. ( Will no check if Position validation is off )
        bool performSlideMoveValidation; // Offset: 0x1

        // When the server is doing sync validation, should it verify the target is within lunge distance? (Will not check if Position Validation is off)
        bool performServerLungeDistanceValidation; // Offset: 0x2

        // When the server is doing sync validation, should it verify the final attacker position?
        bool performServerFinalAttackerPositionValidation; // Offset: 0x3

        // Do special processing for kills that are supposed to be on slopes.
        bool handleAsSlopedKill; // Offset: 0x4

        // The valid states for the instigator in this interaction
        syncParticipantStates_t validInstigatorStates; // Offset: 0x8

        // The valid states for the target in this interaction
        syncParticipantStates_t validTargetStates; // Offset: 0xC

        // The points this interaction relies on for validation. ( Empty = Uses the attach point of the interaction. )
        idStr commonSlideMove; // Offset: 0x10

        // Include player clip in trace results
        bool testPlayerClipInSlideMove; // Offset: 0x40

        // Tag in the md6 that will be tested against the aas. This can be used for animations that might move the player off of AAS or out of collision.
        idStr aasTestTag; // Offset: 0x48

        // do check lunge distance ?
        bool checkLungeDistance; // Offset: 0x78

        // max lateral radius required for validation of this sync{{ units = m }}
        float minRadiusXY; // Offset: 0x7C

        // min lateral radius required for validation of this sync{{ units = m }}
        float maxRadiusXY; // Offset: 0x80

        // min vertical height required for validation of this sync{{ units = m }}
        float minRadiusZ; // Offset: 0x84

        // max vertical height required for validation of this sync{{ units = m }}
        float maxRadiusZ; // Offset: 0x88

        // the difference allowed in the pitch for this sync.
        float pitchDeltaMax; // Offset: 0x8C

        // the difference allowed in the yaw for this sync.
        float yawDeltaMax; // Offset: 0x90

        // the total error tolerance allowed for this sync.{{ units = m }}
        float totalDistanceError; // Offset: 0x94

        // the horizontal error tolerance allowed for this sync (checked if the total error is within tolerance){{ units = m }}
        float horizontalDistanceError; // Offset: 0x98

        // the vertical error tolerance allowed for this sync (checked if the total error is within tolerance){{ units = m }}
        float verticalDistanceError; // Offset: 0x9C

        // What fraction of the distance from where the adjusted joint starts to where the centered joint starts does the adjustable move during the interaction? (And therefore need to fit)
        float jointToCenterSlideScale; // Offset: 0xA0

        // Adds to target position for purposes of joint->joint slide move test. If the attacker goes to a position different from the target( at least during the portion that needs validation), this lets us test a different slide move target position.
        float jointToCenterSlideTargetPositionVerticalOffset; // Offset: 0xA4

        // min health needed for sync ( on target )
        float healthRatioMin; // Offset: 0xA8

        // max health needed for sync ( on target )
        float healthRatioMax; // Offset: 0xAC

        // if set, perform world space validation using this navigation layer
        navSize_t aasTrace; // Offset: 0xB0

        // Will find a better location for the sync if there's not enough Padding room.
        bool padExtraRoom; // Offset: 0xB4

        // Will not readjust the glory kill if we are next to a wall.
        bool dontAdjustForWallCollisions; // Offset: 0xB5

    }; // Size: 0xB8

    struct ammoRequirement_t
    {
        // if set, this sync requires ammoCount number of ammoType ammo for this sync to validate
        idDeclAmmo* ammoType; // Offset: 0x0

        // required count of ammoType to validate
        int ammoCount; // Offset: 0x8

        // do extra validation so we don't consume ammo twice. useful for mp chainsaw which both tries to start a sync and does a fireWeapon which both consume ammo.
        bool validateVersusExpected; // Offset: 0xC

    }; // Size: 0x10

    struct playerRequirements_t
    {
        // this should be used in the ai interaction
        idList < idAtomicString , TAG_IDLIST , false > damageGroupNames; // Offset: 0x0

        // Required Equipped Weapon.
        idDeclInventoryRef requiredEquipt; // Offset: 0x18

        // if this input type is used, "requiredEquipt" isn't actually required. (added for the 2 different ways chainsaw can be used)
        playerInput_t requiredEquipt_inputOverride; // Offset: 0x20

        // Sync Can't be done with these weapons Equipped.
        idList < idDeclInventoryRef , TAG_IDLIST , false > requiredNonEquipt; // Offset: 0x28

        // required inventory items to be used to do this sync
        idList < idDeclInventoryRef , TAG_IDLIST , false > requiredInUse; // Offset: 0x40

        // required inventory items to be used to do this sync
        idList < idDeclInventoryRef , TAG_IDLIST , false > requiredNotInUse; // Offset: 0x58

        // Which quadrant does the screen focal point need to be in.
        syncQuadrant_t focalScreenQuadrants; // Offset: 0x70

        // berserk is required.
        bool requiredBerserk; // Offset: 0x74

        // crucible is required.
        bool requiredCrucible; // Offset: 0x75

        // does this sync allow giving bloodpunch charges (not allowed for crucible or chainsaw)
        bool canAwardBloodpunchCharge; // Offset: 0x76

        // Do we need momentum to be at a certain level for this to happen?
        bool requiredMomentum; // Offset: 0x77

    }; // Size: 0x78

    struct aiRequirements_t
    {
        struct wallSmashRequirement_t
        {
            // the distance to trace out from the head {{ units = m }}
            float traceDistance; // Offset: 0x0

            // the width of the object to test {{ units = m }}
            float testWidth; // Offset: 0x4

            // the name of the joint to trace from
            idStr JointName; // Offset: 0x8

            // the max angle difference we can have between the traces collision normals before we kick them out
            float maxWallTraceAngleDifference; // Offset: 0x38

            // the max angle difference we can have between the target and the wall we wish to smash on...
            float maxWallToTargetAngleDifference; // Offset: 0x3C

            // how far from the first hit pos to the other traces have to be for this to ve a valid wall location {{ units = m }}
            float traceDistanceTollerence; // Offset: 0x40

            // how much distance can be between the head trace and the sweep trace on an XY axis {{ units = m }}
            float sweepTraceErrorTollerence; // Offset: 0x44

            // how far the target has to be from the wall to make this animation look good. {{ units = m }}
            float targetDistanceFromWall; // Offset: 0x48

            // Which direction to test for the wall.
            syncWallCheck_t wallcheck; // Offset: 0x4C

        }; // Size: 0x50

        // the requirements
        idList < idAISyncRequirements , TAG_IDLIST , false > requirements; // Offset: 0x0

        // if not PAIN_NONE then this is the required pain type
        painType_t requiredPainType; // Offset: 0x18

        // data for head smash
        idDeclSyncInteraction::aiRequirements_t::wallSmashRequirement_t headSmash; // Offset: 0x20

    }; // Size: 0x70

    struct autoDOF_t
    {
        // Auto DOF Mode
        autoDOFMode_t mode; // Offset: 0x0

        // DOF near distance {{ units = m }}
        float nearPlane; // Offset: 0x4

        // DOF far distance {{ units = m }}
        float farPlane; // Offset: 0x8

        // DOF focus distance {{ units = m }}
        float focusPlane; // Offset: 0xC

    }; // Size: 0x10

    // Which sync class to use for this interaction.
    idTypeInfoPtr < idSyncAttackInteraction > syncClass; // Offset: 0x90

    // inputs that can trigger this sync
    idArray < playerInput_t , 2 > syncInputs; // Offset: 0x98

    // flags parameters of the sync
    syncFlags_t syncFlags; // Offset: 0xA0

    // filtering flags that correspond to specific validation checks
    syncFilter_t syncFilter; // Offset: 0xA4

    // The Type of sync.
    syncType_t syncType; // Offset: 0xA8

    // Does this sync kill the target?
    bool syncIsKill; // Offset: 0xAC

    // No Visual Cue's for this sync.
    bool syncNoVisuals; // Offset: 0xAD

    // Optional mesh kit group to show when the sync is available. This is for locational highlighting.
    idStr meshKitGroup; // Offset: 0xB0

    // Override for the instigator's default glory kill damage
    idDeclDamage* mpDamageDeclOverride; // Offset: 0xE0

    // what stat to increase when doing this glory kill.
    idList < gameStat_t , TAG_IDLIST , false > syncStats; // Offset: 0xE8

    // Codex to give the player when this sync is performed.
    idDeclCodexEntry* syncCodex; // Offset: 0x100

    // whether this interaction is centered on the instigator rather than the victim. If true, the victim will move into place, rather than the instigator
    bool instigatorCentric; // Offset: 0x108

    // if instigatorCentric is true, swapping positions makes instigator move and target rotate towards instigator
    bool instigatorCentricSwappedPos; // Offset: 0x109

    // Use the stair hack.
    bool instigatorCentricStairHack; // Offset: 0x10A

    // Dont mess with this.
    bool instigatorCentricHackNoTest; // Offset: 0x10B

    // whether we need to recalculate the syncEntity's position or we use the saved value as is.
    bool recalculateSyncEntityPos; // Offset: 0x10C

    // What stage(s) we will query after performing this.
    idStr syncStageTransition; // Offset: 0x110

    // Dont allow player physics to do its thang.
    bool bypassPlayerPhysics; // Offset: 0x140

    // Don't player sounds
    bool bypassSounds; // Offset: 0x141

    // requires a height check
    bool requiresHeightCheck; // Offset: 0x142

    // overrides the start sound for this sync
    idSoundEvent* overrideStartSound; // Offset: 0x148

    // overrides the end sound for this sync
    idSoundEvent* overrideEndSound; // Offset: 0x150

    // When validating/playing, rotate the syncAnim around the up-axis of the VICTIM(whether instigator-centric or victim-centric) by this much.
    float clockwiseDegreeRotation; // Offset: 0x158

    // Barring adjustment in-game by other factors, what's the default priority of this? Higher = more likely to be chosen. This has to work in concert with code, so change cautiously.
    float defaultSyncPriority; // Offset: 0x15C

    // Whether this sync interaction is initiated by logic on the server instead of the local controller
    bool isServerInitiated; // Offset: 0x160

    // if true, player instigator will be off-limits to new AI attacks during sync
    bool markInstigatorOffLimits; // Offset: 0x161

    // if non-zero, limits anim rate
    float maxAnimRate; // Offset: 0x164

    // HANDS_GENERIC_HIDE_INSTANT or HANDS_GENERIC_HIDE_ANIMATED (requires animweb node generic_hide_into)
    idHandsGenericHideAnimSelect hideHandsSelect; // Offset: 0x168

    // Stat that only happens when the glory kill is first done.
    gameStat_t syncUniqueStat; // Offset: 0x16C

    // add this to AI's temp memory when sync begins
    idAtomicString aiMemoryKey; // Offset: 0x170

    // Visual Information for Sync Interaction.
    idDeclSyncInteraction::visualData_t visuals; // Offset: 0x178

    // All the animations this sync could possibly do.
    idDeclSyncInteraction::animationData_t animations; // Offset: 0x1D0

    // ------------------------------------------------ validation rules. - switching data to this ( organized struct ) ------------------------------------------------ Rules of Sync Validation ( Which points to try and slide to etc )
    idDeclSyncInteraction::validationRules_t validation; // Offset: 0x1F0

    // ------------------------------------------------ ammoRequirement_t ------------------------------------------------ ammo requirement for this sync
    idDeclSyncInteraction::ammoRequirement_t requiresAmmo; // Offset: 0x2A8

    // ------------------------------------------------ playerRequirements_t ------------------------------------------------ the requirements needed for players to use this interaction
    idDeclSyncInteraction::playerRequirements_t playerRequirements; // Offset: 0x2B8

    // ------------------------------------------------ aiRequirements_t ------------------------------------------------ the requirements needed for ai to use this interaction
    idDeclSyncInteraction::aiRequirements_t aiRequirements; // Offset: 0x330

    // autodof params
    idDeclSyncInteraction::autoDOF_t autoDof; // Offset: 0x3A0

}; // Size: 0x3B0
