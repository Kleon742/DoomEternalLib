struct idLogicNodeModelLog : idLogicNodeModel
{
    // Message type
    logicLogMessageType_t messageType; // Offset: 0x10

    // Elements
    idList < idLogicNodeStringUtils::element_t , TAG_LOGIC , false > elements; // Offset: 0x18

}; // Size: 0x30
