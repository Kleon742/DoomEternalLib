struct idDeclInteractionNode : idTypeInfoGraphNode
{
    struct renderModelAnimPath_t
    {
        // Rendermodel associated with this Anim Path.
        idDeclMD6* md6; // Offset: 0x0

        // Web path to play for this node.
        idAnimWebPath animWebPath; // Offset: 0x8

    }; // Size: 0x38

    // the render model / anim web paths associated with this node.
    idList < idDeclInteractionNode::renderModelAnimPath_t , TAG_IDLIST , false > animation; // Offset: 0x30

    // Web path to play for this node. ( BOUT TO GET REMOVED )
    idAnimWebPath animWebPath; // Offset: 0x48

    // Do we go to this state after the sync has ended?
    bool animateAfterSync; // Offset: 0x78

    // signal the enter of the node after we have played the node animation if one exists
    bool signalEnterAfterAnim; // Offset: 0x79

    // scans for any valid actions when this node is entered
    bool scanActionsOnEnter; // Offset: 0x7A

    // Uses target list to send actions on enter
    bool useTargetListOnEnter; // Offset: 0x7B

    // if true we are allowed to save this state on checkpoint to load back up
    bool saveStateAllowed; // Offset: 0x7C

    // for this node, send actions to owner
    bool sendTheseActionsToSelf; // Offset: 0x7D

    // the list of actions to send out when we enter this node
    idList < idInteractionAction_t , TAG_IDLIST , false > sendActionsOnEnter; // Offset: 0x80

    // the amount of time (milliseconds) to delay the action we are supposed to send
    idTypesafeTime < int , millisecondUnique_t , 1000 > sendActionsDelayMs; // Offset: 0x98

    // Start a sound on enter of this node.
    idSoundEvent* startsoundOnEnter; // Offset: 0xA0

    // Start a sound on enter of this node.
    idSoundEvent* stopsoundOnEnter; // Offset: 0xA8

    // Play a sound while touching the interact trigger in this state
    idSoundEvent* onTouchSound; // Offset: 0xB0

    // Start fx on enter of this node.
    fxCondition_t startFXCondition; // Offset: 0xB8

    // Stop fx on enter of this node.
    fxCondition_t stopFXCondition; // Offset: 0xBC

    // GUI commands that execute on this link.
    idList < guiComponentCommand_t , TAG_IDLIST , false > GUICommands; // Offset: 0xC0

    // Activate these flags.
    idUpdateFlags_t activateUpdateFlags; // Offset: 0xD8

    // Deacivate these flags.
    idUpdateFlags_t deactivateUpdateFlags; // Offset: 0xDC

}; // Size: 0xE0
