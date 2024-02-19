struct idLogicNodeAutomationTimer
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_TIMER_FINISHED = 2,
        OUTPUT_FAILURE_STRING = 3
    };

    // Timeout failure message. Should be passed into the automation end signal node.
    idStr timeoutFailureMessage; // Offset: 0x0

    // Activation time of the node.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x30

}; // Size: 0x38
