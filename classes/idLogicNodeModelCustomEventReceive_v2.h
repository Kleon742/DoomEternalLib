struct idLogicNodeModelCustomEventReceive_v2 : idLogicNodeModel
{
    enum logicIds_t : int
    {
        OUTPUT_FROM_CONSOLE = 0,
        OUTPUT_ARGUMENTS = 1,
        OUTPUT_EVENT = 2
    };

    // Event names
    idList < idStr , TAG_LOGIC , false > eventNames; // Offset: 0x10

    // Global
    bool global; // Offset: 0x28

}; // Size: 0x30
