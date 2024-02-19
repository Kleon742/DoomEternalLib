struct idLogicNodePlayerGetBloodPunchCharged
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_CHARGE_VALUE = 2,
        OUTPUT_CHARGED_BOOL = 3
    };

    int playerId; // Offset: 0x0

}; // Size: 0x4
