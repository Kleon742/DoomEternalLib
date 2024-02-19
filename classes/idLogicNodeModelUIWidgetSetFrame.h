struct idLogicNodeModelUIWidgetSetFrame : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        INPUT_STOP = 1,
        INPUT_WIDGET = 2,
        INPUT_FRAME_NAME = 3,
        INPUT_PLAY_FRAME = 4,
        OUTPUT_START = 5,
        OUTPUT_STOP = 6
    };

    struct instanceData_t
    {
        idSWFWidgetPtr widget; // Offset: 0x0

        idStr frameName; // Offset: 0x10

    }; // Size: 0x40

}; // Size: 0x10
