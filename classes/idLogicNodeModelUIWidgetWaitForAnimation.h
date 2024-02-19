struct idLogicNodeModelUIWidgetWaitForAnimation : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        INPUT_STOP = 1,
        INPUT_WIDGET = 2,
        OUTPUT_END = 3,
        OUTPUT_STOP = 4
    };

    struct instanceData_t
    {
        idSWFWidgetPtr widget; // Offset: 0x0

    }; // Size: 0x10

}; // Size: 0x10
