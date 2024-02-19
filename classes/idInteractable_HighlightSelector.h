struct idInteractable_HighlightSelector : idInteractable
{
    enum highlightSelectorState_t : int
    {
        NO_STATE = -1,
        HSS_IDLE = 0,
        HSS_SELECT_ENTITY = 1,
        HSS_ACTIVATE_ENTITY = 2,
        MAX_STATES = 3
    };

    enum highlightSelectorTransition_t : int
    {
        NO_TRANSITION = -1,
        HST_SELECT_ENTITY = 0,
        HST_ACTIVATE_ENTITY = 1,
        HST_RESET = 2,
        MAX_TRANSITIONS = 3
    };

    struct selectionInfo_t
    {
        // the entity to activate
        idManagedClassPtr < idEntity > activateEntity; // Offset: 0x0

        // the entity to point to see
        idManagedClassPtr < idEntity > viewEntity; // Offset: 0x20

    }; // Size: 0x40

    typedef idInternalFsm < idInteractable_HighlightSelector , idInteractable_HighlightSelector::highlightSelectorState_t , idInteractable_HighlightSelector::highlightSelectorTransition_t > idHighlightSelectorFSM;

    // the player activator
    idManagedClassPtr < idPlayer > playerActivator; // Offset: 0x2B50

    // the state machine for selection of entities
    idInternalFsm < idInteractable_HighlightSelector , idInteractable_HighlightSelector::highlightSelectorState_t , idInteractable_HighlightSelector::highlightSelectorTransition_t >* highlightSelectorFSM; // Offset: 0x2B70

    // the current selection we are looking at
    int curSelectionIndex; // Offset: 0x2B78

    // the time mark when we are looking at active entities
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > viewMarkGt; // Offset: 0x2B80

    // the list of entities to select for activation and view
    idList < idInteractable_HighlightSelector::selectionInfo_t , TAG_IDLIST , false > selectionEntityInfo; // Offset: 0x2B88

    // the button used to activate the current selection
    usercmdButton_t useBtn; // Offset: 0x2BA0

    // the button used to cancel the use of the interaction
    usercmdButton_t cancelBtn; // Offset: 0x2BA8

    // sound to play when using entity
    idSoundEvent* useSound; // Offset: 0x2BB0

    // sound to play if not useable
    idSoundEvent* notUseableSound; // Offset: 0x2BB8

    // sound to play when switching to other entities
    idSoundEvent* switchSound; // Offset: 0x2BC0

    // highlight color for when its useable
    highlightColor_t useableHighlight; // Offset: 0x2BC8

    // highlight color for when its not useable
    highlightColor_t unUseableHighlight; // Offset: 0x2BCC

    // the amount of time to view the active entity
    idTypesafeTime < int , millisecondUnique_t , 1000 > viewActiveEntMs; // Offset: 0x2BD0

    // the amount of time to use as buffer before the user is allowd to select again
    idTypesafeTime < int , millisecondUnique_t , 1000 > selectionMs; // Offset: 0x2BD4

}; // Size: 0x2BD8
