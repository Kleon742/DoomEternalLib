struct idInteractable : idAnimatedEntity
{
    enum onUsePositionType_t : int
    {
        ON_USE_POSITION_TYPE_NONE = 0,
        ON_USE_POSITION_TYPE_FIRST_PERSON_END_POSITION = 1,
        ON_USE_POSITION_TYPE_THIRD_PERSON_START_POSITION = 2
    };

    struct idAdditionalInventoryItem
    {
        // item to add
        idDeclInventory* decl; // Offset: 0x0

        // fixed count to add
        int count; // Offset: 0x8

        // additional random count to add
        int randCount; // Offset: 0xC

        // use the exact ( count + randCount ) amount, instead of multiplying it by the count value specified in the decl
        bool forceCount; // Offset: 0x10

    }; // Size: 0x18

    struct thirdPersonInteractionData_t
    {
        // generic interaction type
        playerMechanicInteractType_t thirdPersonInteractionType; // Offset: 0x0

        // sync entity that is used for the interact in first person - used to determine position for third person interact and start on use
        idDeclEntityDef* firstPersonSyncEntityForInteractionToPositionOnUse; // Offset: 0x8

        // sync anim web path used for the interact in first person - used to determine position for third person interact
        idAnimWebPath firstPersonSyncAnimWebPath; // Offset: 0x10

        // sync entity that is used for the interact in third person - used to calculate the start position if we have a loop before the custom 3p sync
        idDeclEntityDef* thirdPersonSyncEntityForInteractionStartPositionOnUse; // Offset: 0x40

        // sync anim web path used for the interact in third person - used to determine start position for third person interact
        idAnimWebPath thirdPersonSyncAnimWebPathForStartPositionOnUse; // Offset: 0x48

    }; // Size: 0x78

    // give this inventory when interact is used
    idList < idInteractable::idAdditionalInventoryItem , TAG_IDLIST , false > giveInventory; // Offset: 0x1B48

    // remove inventory items when interact is used
    idList < const idDeclInventory * , TAG_IDLIST , false > removeInventory; // Offset: 0x1B60

    // give this amount of XP when interact is used
    int giveXP; // Offset: 0x1B78

    // Interaction component. Manages Entity's animation states.
    idInteractionComponent interaction; // Offset: 0x1B80

    // Data for the trigger for this entity.
    interactable_triggerData_t touchData; // Offset: 0x25E8

    // list of attachments to apply to the entity.
    idList < interactableAttachment_t , TAG_IDLIST , false > attachments; // Offset: 0x2650

    // The Gui Data to use for this interactable.
    idGUIComponent guiData; // Offset: 0x2668

    // The health of the interactable.
    idSimpleHealth healthComponent; // Offset: 0x2818

    // Do we activate our targets on use of this entity.
    bool activateTargetsOnUse; // Offset: 0x2948

    // Is aware if player is damaged, full health
    bool trackPlayerHealth; // Offset: 0x2949

    // if true we need to track the players shots
    bool trackPlayerFiringShot; // Offset: 0x294A

    // Flags specific to interactables.
    interactableFlags_t interactable_flags; // Offset: 0x294C

    // codex entry to signal on use
    idDeclCodexEntry* onUseCodexEntry; // Offset: 0x2950

    // the last user of this entity.
    idManagedClassPtr < idEntity > lastUser; // Offset: 0x2958

    // color per state.
    idList < attachmentStateColor_t , TAG_IDLIST , false > stateColors; // Offset: 0x2978

    // allow interact able to be used repeatedly
    bool isReusable; // Offset: 0x2990

    // Starting state of the entity if it's reusable
    idTypeInfoGraphPath reusableInitialState; // Offset: 0x2998

    // Do we activate our target when this entity finishes its sync interaction.
    bool activateTargetsOnEndInteraction; // Offset: 0x29C8

    // Disable clipmodel when this entity finishes its sync interaction
    bool disableClipModelOnEndInteraction; // Offset: 0x29C9

    // if true - AI will path around this interactable, and the AI Director will not spawn AI near it.
    bool dynamicAASObstacle; // Offset: 0x29CA

    // disables clip when hidden (attachments may still be visible and make use of the clip)
    bool disableClipOnHide; // Offset: 0x29CB

    // __edit boolallowSave; if false disables all save abilities for this interactable if false, blocks weapon from being raised after interactable is used.
    bool raiseWeaponAfterUse; // Offset: 0x29CC

    // hides the main render model after sync
    bool hideRenderModelAfterSync; // Offset: 0x29CD

    // ignores IA_TOUCH_ACTIVATE when interact is activated. **HACK
    bool ignoreTouchOnActivate; // Offset: 0x29CE

    // play event to fire off on spawning
    playerEventID_t playerEventOnSpawn; // Offset: 0x29D0

    // play event to fire off on use
    playerEventID_t playerEventOnUse; // Offset: 0x29D4

    // hide's entity when used.
    bool hideOnUse; // Offset: 0x29D8

    // interactable can be used during invasion
    bool canUseDuringInvasion; // Offset: 0x29D9

    // human readable description of interactable
    idStrId readableStrId; // Offset: 0x29DC

    // play a sound while touching trigger in this state
    idSoundEvent* onTouchSound; // Offset: 0x29E0

    // progression category for use of the interactable
    progressionCategory_t progressionCategory; // Offset: 0x29E8

    // The automap group the interactable is in
    automapMapGroupId_t automapGroup; // Offset: 0x29EC

    // turns on/off slayer protection during sync with this interactable
    bool enableSlayerProtection; // Offset: 0x29F0

    // stat to increment when the interactable is used
    gameStat_t useStat; // Offset: 0x29F4

    // stat driven event to fire off after use
    statDrivenEvent_t statEventOnUse; // Offset: 0x29F8

    // wether we are running in a custom thread
    bool inCustomJob; // Offset: 0x29FC

    // if true will remove this interactable from all master levels
    bool removeForMasterLevels; // Offset: 0x29FD

    // Per instance if we should use the secret prop material instead of the main path one
    bool useSecretMaterial; // Offset: 0x29FE

    // secret material to swap to if useSecretMaterial = tru
    idMaterial2* secretMaterial; // Offset: 0x2A00

    // third person interaction data
    idInteractable::thirdPersonInteractionData_t thirdPersonInteractionData; // Offset: 0x2A08

    // if true this will spawn using the deferred events
    bool activateOnSpawn; // Offset: 0x2A80

    // if true, will broadcast INTERACTABLE_EVENT_USED when used
    bool interactableEventUsedOnUse; // Offset: 0x2A81

    // last valid gui state
    int lastGUIState; // Offset: 0x2A84

    // list of attachments save states for restoring
    idList < bool , TAG_IDLIST , false > attachmentsSaveState; // Offset: 0x2A88

    bool startedThirdPersonInteractMechanic; // Offset: 0x2AA0

    // if true, will Hide/Show All Attachments in Hide()/Show()
    bool shouldShowHideAllAttachments; // Offset: 0x2AA1

    // if false will not try to show after being used
    bool shouldShowAfterUse; // Offset: 0x2AA2

    // if true, will replace text on gui panel
    bool replaceTextOnPanel; // Offset: 0x2AA3

    // disable model outline
    idNetEvent < 15 > disableOutline; // Offset: 0x2AA8

    // for things to be able to stick, like HAR missiles
    idAttachmentCollection attachmentCollection; // Offset: 0x2AC0

    // Rendermodel to use when displaying this obstacle on the automap
    idRenderModel* automapRenderModel; // Offset: 0x2AE0

    // if we can use the interact able or not, derived classes should use setter.
    bool isEnabled; // Offset: 0x2AE8

    // the entity that uses this interactable must be in the onTouch trigger
    bool userMustBeInTouchTrigger; // Offset: 0x2AE9

    // if true the interactable render model will draw in its deferred position
    bool drawOnDeferredPos; // Offset: 0x2AEA

    // sound played when the player approaches and interactable is unusable
    idSoundEvent* disabledSound; // Offset: 0x2AF0

    // min delay time for disabledSound to be played again
    float disabledSoundDelaySec; // Offset: 0x2AF8

    // If TRUE, this can trigger a cheer event for the Cheat Code for QuakeCon Mode
    bool triggersQuakeConMode; // Offset: 0x2AFC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > disabledSoundTime; // Offset: 0x2B00

    // the action that we set on the interaction entity that can be used for others to check our current state
    idInteractionAction_t lastActionUsed; // Offset: 0x2B08

    idList < idEventReceiver * , TAG_IDLIST , false > statusListenerList; // Offset: 0x2B10

    idSysMutex unTouchMutex; // Offset: 0x2B28

}; // Size: 0x2B50
