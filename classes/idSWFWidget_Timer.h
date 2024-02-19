struct idSWFWidget_Timer : idSWFWidget
{
    enum countingDirection_t : int
    {
        COUNT_INVALID = -1,
        COUNT_UP = 0,
        COUNT_DOWN = 1,
        NO_COUNTING = 2,
        ENUM_COUNT = 3
    };

    struct timerHandler_t
    {
        // Call back to our event handler.
        void (*timerCallback)(void * const param); // Offset: 0x0

        // our Handler.
        void* handler; // Offset: 0x8

    }; // Size: 0x10

    float percentRemaining; // Offset: 0x180

    int currentSecondsTick; // Offset: 0x184

    idStr messageText; // Offset: 0x188

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timerStart; // Offset: 0x1B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timerEnd; // Offset: 0x1C0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > beepThreshold; // Offset: 0x1C8

    idSWFWidget_Timer::countingDirection_t timerDirection; // Offset: 0x1D0

    bool isVisible; // Offset: 0x1D4

    bool beepThresholdResetsOnTimerReset; // Offset: 0x1D5

    // The list of ring handlers
    idList < idSWFWidget_Timer::timerHandler_t , TAG_IDLIST , false > ringHandlerList; // Offset: 0x1D8

    // The list of the tick registered object.
    idList < idSWFWidget_Timer::timerHandler_t , TAG_IDLIST , false > tickHandlerList; // Offset: 0x1F0

}; // Size: 0x208
