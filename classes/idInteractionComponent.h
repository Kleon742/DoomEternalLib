struct idInteractionComponent : idClass
{
    struct stateData_t
    {
        struct hideShowAttachment_t
        {
            // index of the attachment to hide or show; -1 does nothing
            int attachmentIndex; // Offset: 0x0

            // if true, the attachment will be shown; if false, the attachment will be hidden
            bool show; // Offset: 0x4

        }; // Size: 0x8

        // the node name related to this data
        idTypeInfoGraphPath stateName; // Offset: 0x0

        // the list of current targets in the State this appends to the target list if we are using it on the interaction graph
        idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > stateTargetList; // Offset: 0x30

        // the list of additional actions to send on state enter
        idList < idInteractionAction_t , TAG_IDLIST , false > additionalActions; // Offset: 0x48

        // GUI commands that execute on this state.
        idList < guiComponentCommand_t , TAG_IDLIST , false > GUICommands; // Offset: 0x60

        // the list of current entities to activate on state enter
        idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > stateActivateList; // Offset: 0x78

        // the list of stat manipulations to do on state enter
        idList < statManipulation_t , TAG_IDLIST , false > stateStats; // Offset: 0x90

        // codex entry to signal on use
        idDeclCodexEntry* onEnterCodexEntry; // Offset: 0xA8

        // the action delay for additional actions, if -1 uses the node action delay
        idTypesafeTime < int , millisecondUnique_t , 1000 > sendActionsDelayMs; // Offset: 0xB0

        // set the player invulnerable for this amount of time
        idTypesafeTime < int , millisecondUnique_t , 1000 > invulnerabilityMs; // Offset: 0xB4

        // Play this sound on transition.
        idSoundEvent* playSoundOnEnter; // Offset: 0xB8

        // Stop a sound on enter of this node.
        idSoundEvent* stopsoundOnEnter; // Offset: 0xC0

        // if true we will mark this entity to be used and not be able to reuse it in the entire game duration even on map reloads/replay
        bool markForGameUsed; // Offset: 0xC8

        // if true it will enable the players ESC menu on this node
        bool enablePlyrEscMenu; // Offset: 0xC9

        // if true it will disable the players ESC menu on this node
        bool disablePlyrEscMenu; // Offset: 0xCA

        // Removes the collision of the interactable on enter of the state.
        bool removeCollisionOnEnter; // Offset: 0xCB

        // hides the entire object on enter
        bool hideOnEnter; // Offset: 0xCC

        // if true, call end use on the interactable
        bool endUseOnEnter; // Offset: 0xCD

        // remove player invulnerability if its active
        bool invulnerabilityRemove; // Offset: 0xCE

        // list of meshes to hide on enter
        idList < idStr , TAG_IDLIST , false > hideMeshOnEnter; // Offset: 0xD0

        // list of meshes to show on enter
        idList < idStr , TAG_IDLIST , false > showMeshOnEnter; // Offset: 0xE8

        // used for snap map classic interactables for now
        idMaterial2* customMaterial; // Offset: 0x100

        // Open a menu if you'd like that.
        hudMenuID_t openMenu; // Offset: 0x108

        // start FX OnShow() - added for SnapMap hide/show toggling
        fxCondition_t onShowFxCondition; // Offset: 0x10C

        // hide or show an attachment when node is entered
        idList < idInteractionComponent::stateData_t::hideShowAttachment_t , TAG_IDLIST , false > hideShowAttachmentOnEnter; // Offset: 0x110

    }; // Size: 0x128

    struct transitionData_t
    {
        // the edge name related to this data
        idStr transitionName; // Offset: 0x0

        // the list of current targets in the Edge, this overrides the target list from the entity
        idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > transitionTargetList; // Offset: 0x30

        // the list of entities ( items ) required for an action to be taken as valid and how to interpret their requirement
        idList < idActionRequirements , TAG_IDLIST , false > transitionRequirements; // Offset: 0x48

        // the list of additional actions required to be fulfilled in addition to the ones from the graph
        idList < idInteractionAction_t , TAG_IDLIST , false > additionalRequirements; // Offset: 0x60

        // the list of additional actions to send on state exit for this link
        idList < idInteractionAction_t , TAG_IDLIST , false > sendActionsOnLink; // Offset: 0x78

        // indicates how to interpret the list of extra requirements
        idRequirementEvaluation_t additionalEvaluation; // Offset: 0x90

        // the additional wait in ms to add to this transition before entering next state,[ 0- MAX_INT ]
        idTypesafeTime < int , millisecondUnique_t , 1000 > additionalWaitMs; // Offset: 0x94

        // Play this sound on transition.
        idSoundEvent* playSoundOnTransition; // Offset: 0x98

    }; // Size: 0xA0

    struct soundData_t
    {
        idSoundEvent* soundShader; // Offset: 0x0

    }; // Size: 0x8

    struct activeReceivedAction_t
    {
        idInteractionAction_t activeAction; // Offset: 0x0

        idActionRequirements* activeRequirements; // Offset: 0x8

    }; // Size: 0x10

    struct postponedNodeEntryInfo_t
    {
        idAnimatedEntity* ownerEntity; // Offset: 0x0

        idDeclInteractionNode* curNode; // Offset: 0x8

        int guiScreenWait; // Offset: 0x10

        bool validNodeEntry; // Offset: 0x14

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > validEntryTime; // Offset: 0x18

    }; // Size: 0x20

    struct interactMutex_t
    {
        idSysMutex mutex; // Offset: 0x0

    }; // Size: 0x28

    // Starting state of the entity.
    idTypeInfoGraphPath initalState; // Offset: 0x10

    // used to prevent the use of this interactable in previously played maps
    idTypeInfoGraphPath unuseableState; // Offset: 0x40

    // the anim web decl this component
    idDeclAnimWeb* animWebDecl; // Offset: 0x70

    // graph defining the interaction states.
    idDeclInteraction* interactionGraph; // Offset: 0x78

    // list of meshes to hide on initialization
    idList < idStr , TAG_IDLIST , false > hideMeshOnInit; // Offset: 0x80

    // will send node entry actions to self when set to true
    bool selfSendNodeActions; // Offset: 0x98

    // mark interactable dirty so client can sync up its current node
    bool serializeNodeChange; // Offset: 0x99

    // used to override the target list on a node enter
    idList < idInteractionComponent::stateData_t , TAG_IDLIST , false > stateData; // Offset: 0xA0

    // used to override the target list on a node enter
    idList < idInteractionComponent::transitionData_t , TAG_IDLIST , false > transitionData; // Offset: 0xB8

    // the anim web to use for this component
    idAnimator_AnimWeb* animWeb; // Offset: 0xD0

    // locally created animweb.
    idAnimator_AnimWeb localAnimWeb; // Offset: 0xD8

    // current interaction node.
    idDeclInteractionNode* currentNode; // Offset: 0x948

    // stored for use for synchronization with clients:
    idManagedClassPtr < idAnimatedEntity > ownerEntity; // Offset: 0x950

    idList < idInteractionComponent::soundData_t , TAG_IDLIST , false > activeSoundHandles; // Offset: 0x970

    idManagedClassPtr < idSyncEntity > activeSyncEntity; // Offset: 0x988

    // FIXME -- this can't be an idPlayer ptr because compiling fails
    idManagedClassPtr < idEntity > playerActivator; // Offset: 0x9A8

    bool signalNodeEnterAfterAnim; // Offset: 0x9C8

    bool ignoreSyncAnim; // Offset: 0x9C9

    idList < const idSoundEvent * , TAG_IDLIST , false > pausedSoundShaders; // Offset: 0x9D0

    idMaterial2* currentPrefetch; // Offset: 0x9E8

    idList < idInteractionComponent::activeReceivedAction_t , TAG_IDLIST , false > receivedActions; // Offset: 0x9F0

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false >* currentTargetList; // Offset: 0xA08

    idInteractionComponent::postponedNodeEntryInfo_t postponedNodeEntryInfo; // Offset: 0xA10

    bool postponeNodeEntry; // Offset: 0xA30

    bool debugSpam; // Offset: 0xA31

    idDeclInteractionNode* saveStateNode; // Offset: 0xA38

    idInteractionComponent::interactMutex_t actionMutex; // Offset: 0xA40

}; // Size: 0xA68
