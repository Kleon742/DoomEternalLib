struct idLogicNodeModelCustomEventReceive : idLogicNodeModel
{
    // Event name
    idStr eventName; // Offset: 0x10

    // Event names
    idList < idStr , TAG_LOGIC , false > eventNames; // Offset: 0x40

    // Global
    bool global; // Offset: 0x58

}; // Size: 0x60
