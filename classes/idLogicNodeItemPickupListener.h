struct idLogicNodeItemPickupListener : idEventReceiver
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

        // Event type
        idDeclProp_UseComponent* propUseComponentDecl; // Offset: 0x8

        // Locked
        bool locked; // Offset: 0x10

        // Interface name for the node (generated)
        idStr name; // Offset: 0x18

    }; // Size: 0x48

    // idLogicEntityPtrm_entity; Outputs
    idList < idLogicNodeItemPickupListener::output_t , TAG_LOGIC , false > outputs; // Offset: 0x38

    logicNodeReference_t node; // Offset: 0x50

}; // Size: 0x58
