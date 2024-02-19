struct idLogicNodeModelUIWidgetPlaySound : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_START = 0,
        INPUT_STOP = 1,
        INPUT_WIDGET = 2,
        INPUT_SOUND_EVENT = 3,
        OUTPUT_START = 4,
        OUTPUT_STOP = 5
    };

    struct instanceData_t
    {
        int soundId; // Offset: 0x0

    }; // Size: 0x4

}; // Size: 0x10
