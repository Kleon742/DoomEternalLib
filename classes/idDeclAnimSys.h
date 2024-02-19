struct idDeclAnimSys : idDeclTypeInfo
{
    struct idEditorData
    {
        enum modifierState_t : int
        {
            STATE_SINGULAR = 0
        };

        struct idModifierEntry
        {
            // Name of the modifier we're apart of
            idAtomicString modifierName; // Offset: 0x0

            // HashId of the name
            int modifierID; // Offset: 0x8

            // State of the modifier
            idDeclAnimSys::idEditorData::modifierState_t modifierState; // Offset: 0xC

        }; // Size: 0x10

        struct idItemData
        {
            // Modifiers sorted by modifierid's
            idList < idDeclAnimSys::idEditorData::idModifierEntry , TAG_IDLIST , false > modifiers; // Offset: 0x0

            // Name of item
            idAtomicString itemName; // Offset: 0x18

            // Editor scale
            int zoomLevel; // Offset: 0x20

            // Editor position
            idVec2i scrollPosition; // Offset: 0x24

            // Position of item containing this node
            idVec2 itemPos; // Offset: 0x2C

            int nameHash; // Offset: 0x34

        }; // Size: 0x38

        struct simulateLayer_t
        {
            // Name of layer
            idAtomicString layerName; // Offset: 0x0

            // Name of node
            idAtomicString layerNode; // Offset: 0x8

        }; // Size: 0x10

        struct simulateInput_t
        {
            // Name of the scalar
            idAtomicString scalarName; // Offset: 0x0

            // Any controller axis to use
            joystickAxis_t controllerAxis; // Offset: 0x8

            // Any button to use
            usercmdButton_t button; // Offset: 0x10

            // Input type to use (comes from enum in simulate window)
            int inputType; // Offset: 0x18

            // Any input offset
            float offset; // Offset: 0x1C

            // Any input scale
            float scale; // Offset: 0x20

            // Slider min range
            float rangeMin; // Offset: 0x24

            // Slider max range
            float rangeMax; // Offset: 0x28

            // Current value
            float value; // Offset: 0x2C

        }; // Size: 0x30

        struct selection_t
        {
            // Full path to node that is actually selected in the graph viewport
            idStr location; // Offset: 0x0

            // All nodes that are selected in the node tree
            idList < idStr , TAG_IDLIST , false > selectedNodes; // Offset: 0x30

            // Layers that are currently selected
            idList < idStr , TAG_IDLIST , false > selectedLayers; // Offset: 0x48

        }; // Size: 0x60

        // Selection
        idDeclAnimSys::idEditorData::selection_t selection; // Offset: 0x0

        // Layer items
        idList < idDeclAnimSys::idEditorData::idItemData , TAG_IDLIST , false > layerData; // Offset: 0x60

        // Node items
        idList < idDeclAnimSys::idEditorData::idItemData , TAG_IDLIST , false > nodeData; // Offset: 0x78

        // MD6 model to use in the editor
        idStr editorMD6Model; // Offset: 0x90

        // which nodes to start with when simulating
        idList < idDeclAnimSys::idEditorData::simulateLayer_t , TAG_IDLIST , false > simulateLayerData; // Offset: 0xC0

        // Input settings on simulation tab
        idList < idDeclAnimSys::idEditorData::simulateInput_t , TAG_IDLIST , false > simulateInputData; // Offset: 0xD8

    }; // Size: 0xF0

    struct idDeclAnimSysEventTypeLookUp
    {
        struct eventTypeName_t
        {
            idAtomicString name; // Offset: 0x0

            int nameHash; // Offset: 0x8

        }; // Size: 0x10

        idList < idDeclAnimSys::idDeclAnimSysEventTypeLookUp::eventTypeName_t , TAG_IDLIST , false > typeNames; // Offset: 0x0

        idHashIndex lookupHash; // Offset: 0x18

        char emptyStr; // Offset: 0x48

    }; // Size: 0x50

    struct idAnimSysTransitionList
    {
        // Transitionlist name
        idAnimSysTargetTransitionList listName; // Offset: 0x0

        // Transitions for this list
        idList < idAnimSysNodeData::idAnimSysNodeTransition , TAG_IDLIST , false > transitions; // Offset: 0x8

        int listNameHash; // Offset: 0x20

    }; // Size: 0x28

    struct idNodeOperator
    {
        idDeclAnimSys* animSys; // Offset: 0x8

    }; // Size: 0x10

    struct idNodeOpPostLoadFixup : idDeclAnimSys::idNodeOperator
    {
    }; // Size: 0x10

    struct idNodeOpRenameTransitionList : idDeclAnimSys::idNodeOperator
    {
        char* oldName; // Offset: 0x10

        char* newName; // Offset: 0x18

    }; // Size: 0x20

    struct idNodeOpRemoveTransitionList : idDeclAnimSys::idNodeOperator
    {
        char* listName; // Offset: 0x10

    }; // Size: 0x18

    // Transition lists
    idList < idDeclAnimSys::idAnimSysTransitionList , TAG_IDLIST , false > transitionLists; // Offset: 0x88

    // List of nodes, (which in turn can hold other nodes if they so choose)
    idList < idAnimSysNodeData * , TAG_ANIMSYS , false > nodes; // Offset: 0xA0

    // Defaultnode to start
    idAnimSysTargetNode defaultNode; // Offset: 0xB8

    // Layer configurations
    idList < idAnimSysLayerConfig , TAG_ANIMSYS , false > layerConfigs; // Offset: 0xC0

    // Reference md6 to find anims (if any are missing from model it's played on)
    idDeclMD6* referenceMD6; // Offset: 0xD8

    // Per layer/node data needed/usable for editor, viz node positions etc
    idDeclAnimSys::idEditorData editorData; // Offset: 0xE0

    idHashIndex transitionListHash; // Offset: 0x1D0

    // Hints to nodes that need it
    bool inEditorMode; // Offset: 0x200

}; // Size: 0x208
