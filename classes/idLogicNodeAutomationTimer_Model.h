struct idLogicNodeAutomationTimer_Model : idLogicNodeModel
{
    // Timeout time in seconds
    idTypesafeTime < float , secondUnique_t , 1 > timeoutTime; // Offset: 0x10

    // Timeout failure message. Should be passed into the automation end signal node.
    idStr timeoutFailureMessage; // Offset: 0x18

}; // Size: 0x48
