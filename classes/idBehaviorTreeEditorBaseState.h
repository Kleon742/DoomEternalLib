struct idBehaviorTreeEditorBaseState : idTypeInfoGraphNode
{
    enum behaviorTreeBaseStateType_t : int
    {
        BEHAVIOR_TREE_STATE_TYPE_LEAF = 0,
        BEHAVIOR_TREE_STATE_TYPE_DECORATOR = 1,
        BEHAVIOR_TREE_STATE_TYPE_COMPOSITE = 2,
        BEHAVIOR_TREE_STATE_TYPE_INVALID = 3
    };

    // the name for the node as it appears in the editor.
    idStr displayName; // Offset: 0x30

    // if true, node won't be usable ( set by user in editor ).
    bool disabledByUser; // Offset: 0x60

    // if true, node won't be usable because a parent node up the hierarchy is disabled ( set in code ).
    bool disabledByParent; // Offset: 0x61

    // the type of behavior tree state we are. Simple RTTI for logic checking.
    idBehaviorTreeEditorBaseState::behaviorTreeBaseStateType_t behaviorTreeStateType; // Offset: 0x64

}; // Size: 0x68
