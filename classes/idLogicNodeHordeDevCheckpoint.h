struct idLogicNodeHordeDevCheckpoint : idEventReceiver
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        PIN_DYNAMIC_MASK = -16
    };

    struct output_t
    {
        // Identifier
        unsigned int id; // Offset: 0x0

        // Which checkpoint
        hordeCheckpointKey_t checkpointKey; // Offset: 0x4

        // Number of items to pick when using the checkpoint
        int itemCount; // Offset: 0x8

        // Items that are guaranteed by this checkpoint
        idList < idDeclProp_UseComponent * , TAG_IDLIST , false > forcedItems; // Offset: 0x10

        // Interface name for the node (generated)
        idStr name; // Offset: 0x28

    }; // Size: 0x58

    struct itemOptions_t
    {
        // Item decl
        idDeclProp_UseComponent* decl; // Offset: 0x0

        // The name the item will be given in the checkpoint menu
        idStr menu_name; // Offset: 0x8

    }; // Size: 0x38

    // Outputs
    idList < idLogicNodeHordeDevCheckpoint::output_t , TAG_LOGIC , false > outputs; // Offset: 0x38

    // Items that are available when using checkpoints
    idList < idLogicNodeHordeDevCheckpoint::itemOptions_t , TAG_LOGIC , false > itemOptions; // Offset: 0x50

    logicNodeReference_t node; // Offset: 0x68

}; // Size: 0x70
