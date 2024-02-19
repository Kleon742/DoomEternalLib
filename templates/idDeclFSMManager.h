// idDeclFSMManager < idAIFSMGraphFSM , idAIFSMGraphState , idAIFSMGraphTransition >
template <typename _subgraph1_, typename _node1_, typename _link1_>
struct idDeclFSMManager : idDeclTypeInfoGraphSingleType < _subgraph1_ , _node1_ , _link1_ >
{
    idDeclTypeInfoGraph::idContextMenuItemMain toggleTransitionsList; // Offset: 0xF8

    idDeclTypeInfoGraph::idContextMenuItemMain toggleInvalid; // Offset: 0x140

    idDeclTypeInfoGraph::idContextMenuItemMain deleteAllBreakpoints; // Offset: 0x188

    idDeclTypeInfoGraph::idContextMenuItemMain toggleFSMLog; // Offset: 0x1D0

    idDeclTypeInfoGraph::idContextMenuItemSubGraph markFSMAsRoot; // Offset: 0x218

    idDeclTypeInfoGraph::idContextMenuItemNode markStateAsDefault; // Offset: 0x260

    idDeclTypeInfoGraph::idContextMenuItemNode toggleBreakOnTransitionTo; // Offset: 0x2A8

    idDeclTypeInfoGraph::idContextMenuItemNode toggleBreakOnTransitionFrom; // Offset: 0x2F0

    idDeclTypeInfoGraph::idContextMenuItemNode toggleBreakOnStateInit; // Offset: 0x338

    idDeclTypeInfoGraph::idContextMenuItemNode toggleBreakOnStateEnter; // Offset: 0x380

    idDeclTypeInfoGraph::idContextMenuItemNode toggleBreakOnStateExit; // Offset: 0x3C8

    idDeclTypeInfoGraph::idContextMenuItemLink moveTransitionToTop; // Offset: 0x410

    idDeclTypeInfoGraph::idContextMenuItemLink moveTransitionToBottom; // Offset: 0x458

    idDeclTypeInfoGraph::idContextMenuItemLink sortTransitionUp; // Offset: 0x4A0

    idDeclTypeInfoGraph::idContextMenuItemLink sortTransitionDown; // Offset: 0x4E8

    idDeclTypeInfoGraph::idContextMenuItemLink toggleBreakOnTransitionTaken; // Offset: 0x530

    idDeclTypeInfoGraph::idContextMenuItemLink toggleBreakOnTransitionNotTaken; // Offset: 0x578

    idDeclTypeInfoGraph::idContextMenuItemLink toggleBreakOnTransitionInit; // Offset: 0x5C0

    idDeclTypeInfoGraph::idContextMenuItemLink toggleDisableTransition; // Offset: 0x608

    // flags for debugging
    int debugFlags; // Offset: 0x650

    // virtual function NotifyLinkChanged() needs access to a class that's not defined yet. Because it's a template function it needs to be defined in the header. So this class is defined upon creation of this class so it has access to a valid reference.
    idTypeInfo* Shared_FSMEventTransCode_Type; // Offset: 0x658

    // it specifies what FSM logs to display
    idRange < int > fsmLogDisplayedRange; // Offset: 0x660

}; // Size: 0x668
