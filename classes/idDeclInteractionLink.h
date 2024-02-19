struct idDeclInteractionLink : idTypeInfoGraphLink
{
    // normal anims are played when an interaction is triggered while facing the entity Def for the sync system
    idDeclEntityDef* syncEntityDef; // Offset: 0x40

    // Web path to play for this node for sync animation.
    idAnimWebPath syncAnimPath; // Offset: 0x48

    // _mirrored anims are played when an interaction is triggered from behind the entity Def for the sync system - for mirrored anim
    idDeclEntityDef* syncEntityDef_mirror; // Offset: 0x78

    // Web path to play for this node for sync animation - for mirrored anim.
    idAnimWebPath syncAnimPath_mirror; // Offset: 0x80

    // Def for the sync system
    idDeclEntityDef* syncEntityDefThirdPerson; // Offset: 0xB0

    // Web path to play for this node for sync animation.
    idAnimWebPath syncAnimPathThirdPerson; // Offset: 0xB8

    // Action to take for think link to be valid.
    idRequiredActions_t requiredActions; // Offset: 0xE8

    // the list of actions to send out when we exit the current node
    idList < idInteractionAction_t , TAG_IDLIST , false > sendActionsOnLink; // Offset: 0x108

    // the amount of time (milliseconds) to delay the action we are supposed to send
    idTypesafeTime < int , millisecondUnique_t , 1000 > sendActionsDelayMs; // Offset: 0x120

    // allows users to carry the actions received in the previous node valid, this can carry until an edge clears them. HACK
    bool keepPrevActionsValid; // Offset: 0x124

    // whether we want to use the target list to send actions on node exit
    bool useTargetListOnExit; // Offset: 0x125

    // force node to NOT be postponed when changing to new node until syncAnim / _WRAP anim completes
    bool ignorePostponeNodeEntry; // Offset: 0x126

    // Start a sound on enter of this link.
    idSoundEvent* startsoundOnLink; // Offset: 0x128

    // Start fx on enter of this link.
    fxCondition_t startFXCondition; // Offset: 0x130

    // Stop fx on enter of this link.
    fxCondition_t stopFXCondition; // Offset: 0x134

    // GUI commands that execute on this link.
    idList < guiComponentCommand_t , TAG_IDLIST , false > GUICommands; // Offset: 0x138

    // Hud notifications that get fired on this state
    idList < hudNotificationType_t , TAG_IDLIST , false > hudNotifications; // Offset: 0x150

    // Activate these flags.
    idUpdateFlags_t activateUpdateFlags; // Offset: 0x168

    // Deacivate these flags.
    idUpdateFlags_t deactivateUpdateFlags; // Offset: 0x16C

    // Wait for this screen index to be done animating.
    int waitForGUIScreenAnimation; // Offset: 0x170

    // register the instigator into the 3rd person scene
    bool syncThirdPersonRegisterInstigator; // Offset: 0x174

}; // Size: 0x178
