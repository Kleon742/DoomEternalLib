struct idLogicNodeHandleLogicTestCompletion
{
    enum logicIds_t : int
    {
        INPUT_SUCCESS = 0,
        INPUT_FAILED = 1,
        INPUT_FAILURE_MESSAGE = 2,
        OUTPUT_ACTIVATE = 3
    };

    idStr conditionName; // Offset: 0x0

    bool flowThrough; // Offset: 0x30

}; // Size: 0x38
